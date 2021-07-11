using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GtaV_Categorise_And_Download_Vehicle_Images
{
    public partial class GtaImageRipping : Form
    {
        public GtaImageRipping(){
InitializeComponent();
            if (System.IO.File.Exists(Ripper)) { System.IO.File.Delete(Ripper); }
            System.IO.File.WriteAllBytes(Ripper, Properties.Resources.RIP_GTA_IMAGES);
            if (System.IO.File.Exists(HashSite)) { CurrentHashSite.Text = System.IO.File.ReadAllText(HashSite); } else{
                CurrentHashSite.Text = HASH_HOST;
                System.IO.File.WriteAllText(HashSite, CurrentHashSite.Text);
            }     
            
            if (System.IO.File.Exists(VehPrefixFile)) { VehPrefix.Text = System.IO.File.ReadAllText(VehPrefixFile); } else{
                VehPrefix.Text = HASH_HOST_CAR_PREFIX;
                System.IO.File.WriteAllText(VehPrefixFile, VehPrefix.Text);
            }



        }
        public static string HASH_HOST = "http://www.test.raccoon72.ru";
        public static string HASH_HOST_CAR_PREFIX = "cars";
        public string HashSite = Environment.CurrentDirectory + "\\HashSite.txt";
        public string VehPrefixFile = Environment.CurrentDirectory + "\\VehPrefix.txt";
        public string Ripper = Environment.CurrentDirectory + "\\RIP_GTA_IMAGES.exe";
        private void Form1_Load(object sender, EventArgs e){
CreateCarImageDirIfNotExistant();
        }

        public GetVehicleHashes HashSets=new GetVehicleHashes();
        public  List<string> VehicleInfBuilder = new List<string>();

    /// <summary>
    /// This method writes the percentage of the top number to the bottom number.
    /// </summary>
    static string DisplayPercentage(int top, int bottom)
    {
       return     GetPercentageString((double)top / bottom);
    }

    /// <summary>
    /// This method returns the percentage-formatted string.
    /// </summary>
    static string GetPercentageString(double ratio)
    {
        return ratio.ToString("0.0%");
    }


        async Task Awaited(){
            VehicleInfBuilder.Clear();
            Processes.Clear();
            Modeling= CarListings();
            var ixi = 0;var ixim = 52;
            int Byn = 0;int BynM = HashSets.HashList.Count;
            LoadPercentage.Text = "Loaded: " + DisplayPercentage(Byn, BynM) + " Of Vehicles";
            foreach (VehicleHashSet VehInfX in HashSets.HashList){
                LoadPercentage.Text = "Loaded: " + DisplayPercentage(Byn, BynM) + " Of Vehicles";
               await QuickRun(VehInfX); Byn++; 
                if (ixi == ixim){
                    await Task.Delay(40);
                    ixi = 0; VehInfo.Lines = VehicleInfBuilder.ToArray();
                }else{
                    ixi++;
                }
            }
            LoadPercentage.Text = "Loaded: " + DisplayPercentage(Byn, BynM) + " Of Vehicles";
            VehInfo.Lines = VehicleInfBuilder.ToArray();
             ixi = 0;  ixim = 5;
             Byn = 0;  BynM = Processes.Count;
            LoadPercentage.Text = "Loaded: " + DisplayPercentage(Byn, BynM) + " Of New Vehicles Images";
            foreach (System.Diagnostics.Process Prox in Processes)
            {
                Prox.Start(); Byn++;
                LoadPercentage.Text = "Loaded: " + DisplayPercentage(Byn, BynM) + " Of New Vehicles Images";
                await Task.Delay(40);
                if (ixi == ixim){
                    for(; ; ){
                 if  (Prox.HasExited) { break; }
                  
                await Task.Delay(140);      }
                      ixi = 0;
                }else{
                    ixi++;
                }
            }
        }

        public static string sc = '"'.ToString();
public async Task QuickRun(VehicleHashSet VehInfX){
string CarCat= VehInfX.Category;

if(!Categorys.Contains(CarCat)){
CarCat=  CarImageExistsIfSoWhatModel(CarCat,VehInfX.CodeName);
if(!Categorys.Contains(CarCat)){
await Downloader(VehInfX);}}
VehicleInfBuilder.Add("CreateHash(" + sc + VehInfX.CodeName + sc + " , " + sc + VehInfX.Hash + sc + "," + sc + CarCat + sc + " , " + sc + VehInfX.DisplayName + sc + "),");
}

        List<System.Diagnostics.Process> Processes = new List<System.Diagnostics.Process>();
        public async Task Downloader(VehicleHashSet VehInfX)
        {

            Processes.Add( ProxM(VehInfX.CodeName));
        }

        System.Diagnostics.Process ProxM(string CodeName)
        {
            System.Diagnostics.Process PROX = new System.Diagnostics.Process();
            PROX.StartInfo.FileName = Ripper;
            PROX.StartInfo.WorkingDirectory = Environment.CurrentDirectory;
            PROX.StartInfo.CreateNoWindow = true;
            PROX.StartInfo.Arguments = CodeName;
            return PROX;
        }

        public string[] Modeling;
        public  string[] CarListings(){
            List<string> CL = new List<string>();
            foreach (string ModelDir in System.IO.Directory.GetDirectories(CarImageDir)) {
                foreach (string ImageDr in System.IO.Directory.GetFiles(ModelDir)) {
                    if (System.IO.File.ReadAllText(ImageDr).Length <= 10) {
                        System.IO.File.Delete(ImageDr);
                    }else{
                        CL.Add(ImageDr.Split('\\').Last() + "|" + ImageDr.Split('\\')[ImageDr.Split('\\').Length - 2]);
                    }
            } 
            }
            return CL.ToArray(); 
            }


public string CarImageDir = Environment.CurrentDirectory + "\\CarImages";
public string CarImageExistsIfSoWhatModel(string priorexistance,string CodeName){
string WANTED= CodeName.ToLower() + ".jpg";
string CarExistsModel ="NonExistant";
foreach(string ModelDir in Modeling){
if(ModelDir .Split('|')[0]== WANTED) { CarExistsModel = ModelDir.Split('|')[1]; break; 
}}
return CarExistsModel;
}




public void CreateCarImageDirIfNotExistant(){
if (!System.IO.Directory.Exists( CarImageDir)){
System.IO.Directory.CreateDirectory(CarImageDir);
}
foreach(string Category in Categorys){
if(!System.IO.Directory.Exists(CarImageDir+"\\"+Category)){
System.IO.Directory.CreateDirectory(CarImageDir+"\\"+Category);
}
}
}

public string[] Categorys = new string[] {
"utility",
"muscle",
"trains",
"compacts",
"sedans",
"super",
"industrial",
"suvs",
"military",
"planes",
"coupes",
"vans",
"off-road",
"service",
"boats",
"cycles",
"sports",
"helicopters",
"emergency",
"commercials",
"trailer",
"motorcycles",
"sport-classic",
"open-wheel",
"heist"
};

        private void button1_Click(object sender, EventArgs e){
            CreateCarImageDirIfNotExistant();
            Awaited();
        }

        private void CurrentHashSite_TextChanged(object sender, EventArgs e){
            System.IO.File.WriteAllText(HashSite, CurrentHashSite.Text);
        }

        private void VehPrefix_TextChanged(object sender, EventArgs e){
            System.IO.File.WriteAllText(VehPrefixFile, VehPrefix.Text);
        }


    }
}

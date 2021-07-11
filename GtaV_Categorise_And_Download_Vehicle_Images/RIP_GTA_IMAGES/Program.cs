using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RIP_GTA_IMAGES
{
    public class Program
    {
        public static void Main(string[] args)=>new Program().MainAsync(args).GetAwaiter().GetResult();
            

        public async Task MainAsync(string[] Args){
             if (System.IO.File.Exists(HashSite)) { HASH_HOST = System.IO.File.ReadAllText(HashSite); } 
            if (System.IO.File.Exists(VehPrefixFile)) { HASH_HOST_CAR_PREFIX = System.IO.File.ReadAllText(VehPrefixFile); } 

            await ExtractSortAndGetImageFromUrl(Args.First());
            await Task.Delay(-1);
        }

        
        
        public static string HASH_HOST = "http://www.test.raccoon72.ru";
        public static string HASH_HOST_CAR_PREFIX = "cars";
        public string HashSite = Environment.CurrentDirectory + "\\HashSite.txt";
        public string VehPrefixFile = Environment.CurrentDirectory + "\\VehPrefix.txt";
public static string[] Categorys = new string[] {
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



        
public static string CarImageDir = Environment.CurrentDirectory + "\\CarImages";
public static async Task ExtractSortAndGetImageFromUrl(string CarCodeName){
            List<Task> Runab = new List<Task>();
foreach(string Category in Categorys){
string IN = CarCodeName.ToLower() + ".jpg";
Runab.Add( ClientInTime(HASH_HOST+"/"+ HASH_HOST_CAR_PREFIX+"/" + Category + "/" + IN, CarImageDir + "\\" + Category + "\\" + IN));
}

for(; ; ){
bool Done=true;
foreach(Task Runing in Runab) { if (Runing.IsCompleted==false) { Done = false;break; } }
if(Done) { break; }
await Task.Delay(100);
}
Application.Exit();
Environment.Exit(-1);
}

public static bool BoolImageFound=false;

public static List<Task> Clients = new List<Task>();

public static async Task ClientInTime(string url, string FilePath){
for(; ; ){
System.Net.WebClient CLIENT = new System.Net.WebClient();
try{
CLIENT.DownloadFileTaskAsync(new Uri(url), FilePath);
await Task.Delay(1500);
if(System.IO.File.ReadAllText(FilePath).Length<=10){
CLIENT.CancelAsync();
CLIENT.Dispose();
}else{
await Task.Delay(400);
for(; ; ){
if(CLIENT.IsBusy==false){
CLIENT.CancelAsync();
CLIENT.Dispose();break;}
await Task.Delay(100);
}
}

            
if(System.IO.File.Exists(FilePath)){
if(System.IO.File.ReadAllText(FilePath).Length<=10){
System.IO.File.Delete(FilePath);
}}
break;
}catch { }
}
}








    }
}

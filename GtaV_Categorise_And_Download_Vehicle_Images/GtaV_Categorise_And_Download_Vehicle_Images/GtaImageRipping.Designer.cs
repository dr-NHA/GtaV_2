
namespace GtaV_Categorise_And_Download_Vehicle_Images
{
    partial class GtaImageRipping
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.VehInfo = new System.Windows.Forms.TextBox();
            this.RipVehicles = new System.Windows.Forms.Button();
            this.LoadPercentage = new System.Windows.Forms.TextBox();
            this.CurrentHashSite = new System.Windows.Forms.TextBox();
            this.HashSiteLabel = new System.Windows.Forms.Label();
            this.VehPrefix = new System.Windows.Forms.TextBox();
            this.VehiclePathPtr = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // VehInfo
            // 
            this.VehInfo.Dock = System.Windows.Forms.DockStyle.Left;
            this.VehInfo.Location = new System.Drawing.Point(0, 0);
            this.VehInfo.Multiline = true;
            this.VehInfo.Name = "VehInfo";
            this.VehInfo.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.VehInfo.Size = new System.Drawing.Size(659, 450);
            this.VehInfo.TabIndex = 0;
            this.VehInfo.WordWrap = false;
            // 
            // RipVehicles
            // 
            this.RipVehicles.Location = new System.Drawing.Point(659, 95);
            this.RipVehicles.Name = "RipVehicles";
            this.RipVehicles.Size = new System.Drawing.Size(141, 23);
            this.RipVehicles.TabIndex = 1;
            this.RipVehicles.Text = "Rip Vehicle Images";
            this.RipVehicles.UseVisualStyleBackColor = true;
            this.RipVehicles.Click += new System.EventHandler(this.button1_Click);
            // 
            // LoadPercentage
            // 
            this.LoadPercentage.Location = new System.Drawing.Point(659, 124);
            this.LoadPercentage.Name = "LoadPercentage";
            this.LoadPercentage.ReadOnly = true;
            this.LoadPercentage.Size = new System.Drawing.Size(141, 20);
            this.LoadPercentage.TabIndex = 2;
            // 
            // CurrentHashSite
            // 
            this.CurrentHashSite.Dock = System.Windows.Forms.DockStyle.Top;
            this.CurrentHashSite.Location = new System.Drawing.Point(659, 23);
            this.CurrentHashSite.Name = "CurrentHashSite";
            this.CurrentHashSite.Size = new System.Drawing.Size(141, 20);
            this.CurrentHashSite.TabIndex = 3;
            this.CurrentHashSite.TextChanged += new System.EventHandler(this.CurrentHashSite_TextChanged);
            // 
            // HashSiteLabel
            // 
            this.HashSiteLabel.Dock = System.Windows.Forms.DockStyle.Top;
            this.HashSiteLabel.Location = new System.Drawing.Point(659, 0);
            this.HashSiteLabel.Name = "HashSiteLabel";
            this.HashSiteLabel.Size = new System.Drawing.Size(141, 23);
            this.HashSiteLabel.TabIndex = 4;
            this.HashSiteLabel.Text = "Hash Site:";
            this.HashSiteLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // VehPrefix
            // 
            this.VehPrefix.Dock = System.Windows.Forms.DockStyle.Top;
            this.VehPrefix.Location = new System.Drawing.Point(659, 66);
            this.VehPrefix.Name = "VehPrefix";
            this.VehPrefix.Size = new System.Drawing.Size(141, 20);
            this.VehPrefix.TabIndex = 5;
            this.VehPrefix.TextChanged += new System.EventHandler(this.VehPrefix_TextChanged);
            // 
            // VehiclePathPtr
            // 
            this.VehiclePathPtr.Dock = System.Windows.Forms.DockStyle.Top;
            this.VehiclePathPtr.Location = new System.Drawing.Point(659, 43);
            this.VehiclePathPtr.Name = "VehiclePathPtr";
            this.VehiclePathPtr.Size = new System.Drawing.Size(141, 23);
            this.VehiclePathPtr.TabIndex = 6;
            this.VehiclePathPtr.Text = "Vehicle Path:";
            this.VehiclePathPtr.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // GtaImageRipping
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.VehPrefix);
            this.Controls.Add(this.VehiclePathPtr);
            this.Controls.Add(this.CurrentHashSite);
            this.Controls.Add(this.HashSiteLabel);
            this.Controls.Add(this.LoadPercentage);
            this.Controls.Add(this.RipVehicles);
            this.Controls.Add(this.VehInfo);
            this.MaximizeBox = false;
            this.MaximumSize = new System.Drawing.Size(816, 489);
            this.MinimumSize = new System.Drawing.Size(816, 489);
            this.Name = "GtaImageRipping";
            this.Text = "Easy Clean And Quick Image Downloader! For Vehicles And More Soon";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        public System.Windows.Forms.TextBox VehInfo;
        private System.Windows.Forms.Button RipVehicles;
        public System.Windows.Forms.TextBox LoadPercentage;
        public System.Windows.Forms.TextBox CurrentHashSite;
        private System.Windows.Forms.Label HashSiteLabel;
        public System.Windows.Forms.TextBox VehPrefix;
        private System.Windows.Forms.Label VehiclePathPtr;
    }
}


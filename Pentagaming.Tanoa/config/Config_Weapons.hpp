/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "Rangefinder", "", 45000 },				//Rangefinder
			{ "NVGoggles_INDEP", "", 2000 },			//NV Green
            { "arifle_Katiba_F", "", 180000 },			//Katiba
            { "arifle_MXC_F", "", 190000 },				//MXC
            { "arifle_MXM_F", "", 220000 },				//MXM
            { "arifle_MX_F", "", 200000 },				//MX
            { "SMG_01_F", "", 55000 },					//Vermin
            { "srifle_DMR_03_khaki_F", "", 300000 },	//MK-1 EMR
            { "srifle_DMR_03_tan_F", "", 300000 },		//""
            { "srifle_DMR_03_multicam_F", "", 300000 },	//""
            { "srifle_DMR_03_woodland_F", "", 300000 },	//""
            { "srifle_DMR_01_F", "", 270000 },			//Rahim
            { "srifle_DMR_06_camo_F", "", 290000 },		//MK14
            { "arifle_SDAR_F", "", 125000 },			//SDAR
            { "arifle_TRG20_F", "", 150000 }			//TRG20
        };
        mags[] = {
			{ "30Rnd_65x39_caseless_green", "", 1000 },	//Katiba Magazin
			{ "30Rnd_65x39_caseless_mag", "", 1000 },	//MX Serie Magazin
			{ "30Rnd_45ACP_Mag_SMG_01", "", 500 },		//Vermin Magazin
			{ "20Rnd_762x51_Mag", "", 3000 },			//MK-1 EMR Magazin
			{ "10Rnd_762x54_Mag", "", 3000 },			//Rahim Magazin
			{ "20Rnd_556x45_UW_mag", "", 1500 },		//SDAR Magazin
			{ "30Rnd_556x45_Stanag", "", 1750 },		//TRG20 + Mk20 Magazin
			{ "muzzle_snds_L", "", 10000 },				//9mm Schalldaemper
			{ "muzzle_snds_acp", "", 15000 },			//45 ACP
			{ "muzzle_snds_H", "", 50000 },				//6.5mm
			{ "muzzle_snds_M", "", 45000 },				//5.56mm
			{ "muzzle_snds_B", "", 70000 },				//7.62mm
			{ "bipod_03_F_oli", "", 25000 },			//AAF Oliv
			{ "bipod_03_F_blk", "", 25000 },			//AAF Black
			{ "bipod_02_F_tan", "", 25000 },			//CSAT Tan
			{ "bipod_02_F_blk", "", 25000 },			//CSAT Black
			{ "bipod_02_F_hex", "", 25000 },			//CSAT HEX
			{ "bipod_01_F_blk", "", 25000 },			//NATO Black
			{ "bipod_01_F_mtp", "", 25000 },			//NATO MTP
			{ "bipod_01_F_snd", "", 25000 }				//NATO Sand
        };
        accs[] = {
			{ "optic_Arco", "", 20000 },				//ARCO
			{ "optic_Hamr", "", 20000 },				//RCO
			{ "optic_MRCO", "", 20000 },				//MRCO
			{ "optic_ACO_grn", "", 2500 },				//ACO
			{ "optic_Holosight", "", 2500 },			//Holosight
			{ "optic_DMS", "", 50000 },					//DMS
			{ "optic_AMS", "", 55000 },					//AMS
			{ "optic_KHS_blk", "", 60000 },				//Kahlia
			{ "optic_NVS", "", 70000 },					//NVS
			{ "optic_SOS", "", 70000 },					//SOS
			{ "optic_LRPS", "", 75000 },				//LRPS
			{ "acc_flashlight", "", 2500 }  			//Lampe
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
           { "arifle_MXM_F", "", 220000 },				//MXM
           { "arifle_Katiba_F", "", 180000 },			//Katiba
           { "srifle_DMR_01_F", "", 270000 },			//Rahim
           { "srifle_DMR_06_camo_F", "", 290000 },		//MK14
           { "hgun_Rook40_F", "", 40000 } 				//Rook-40
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 1000 },	//MX Serie Magazin
            { "30Rnd_65x39_caseless_green", "", 1000 },	//Katiba Magazin
            { "10Rnd_762x54_Mag", "", 3000 },			//Rahim Magazin
			{ "16Rnd_9x21_Mag", "", 700 } 			//Rook-40 Magazin
        };
        accs[] = {
            { "optic_Hamr", "", 20000 },				//RCO
            { "optic_MRCO", "", 20000 },				//MRCO
			{ "optic_DMS", "", 50000 },					//DMS
			{ "optic_SOS", "", 70000 },					//SOS
			{ "optic_DMS", "", 50000 },					//DMS
			{ "optic_AMS", "", 55000 }, 				//AMS
			{ "muzzle_snds_H", "", 50000 },				//6.5mm
			{ "muzzle_snds_M", "", 45000 } 			//5.56mm
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa General Store";
        side = "civ";
        conditions = "";
        items[] = {
			{ "Toolkit", "", 250, 75, ""},
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tanoa Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Tanoa Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 1, "" },
            { "ItemGPS", "", 100, 1, "" },
            { "FirstAidKit", "", 150, 1, "" },
			{ "Toolkit", "", 250, 100, ""},
            { "NVGoggles_OPFOR", "", 50, 1, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 200, 1, "" },
			{ "SMG_05_F", "", 1000, 1,"call life_coplevel >= 1"},
			{ "arifle_SPAR_01_blk_F", "", 1000, 1,"call life_coplevel >= 2"},
			{ "arifle_MXC_Black_F", "", 1000, 1,"call life_coplevel >= 3"},
			{ "arifle_MX_Black_F", "", 1000, 1,"call life_coplevel >= 3"},
			{ "arifle_MXM_Black_F", "", 1000, 1,"call life_coplevel >= 4"},
			{ "srifle_DMR_06_olive_F", "", 1000, 1,"call life_coplevel >= 5"},
			{ "srifle_EBR_F", "", 1000, 1,"call life_coplevel >= 6"},
			{ "arifle_SPAR_03_blk_F", "", 1000, 1,"call life_coplevel >= 7"},
			{ "srifle_DMR_03_F", "", 1000, 1,"call life_coplevel >= 8"},
			{ "srifle_DMR_03_F", "", 1000, 1,"call license_cop_swat"},
			{ "srifle_DMR_07_blk_F", "", 1000, 1,"call license_cop_swat"},
			{ "arifle_MX_SW_Black_F", "", 1000, 1,"call license_cop_swat"}
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 1, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 1, "" },
            { "11Rnd_45ACP_Mag", "", 130, 1, "call life_coplevel >= 1" },
			{ "30Rnd_556x45_Stanag", "", 130, 1, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 1, "call life_coplevel >= 2" },
			{ "30Rnd_9x21_Mag_SMG_02", "", , 1, "call life_coplevel >=1 "},
			{ "30Rnd_556x45_Stanag", "", , 1, "call life_coplevel >=2"},
			{ "30Rnd_65x39_caseless_mag", "", , 1, "call life_coplevel >=3"},
			{ "20Rnd_762x51_Mag", "", 130, 1, "call life_coplevel >=5"},
			{ "20Rnd_762x51_Mag", "", , 1, "call license_cop_swat"},
			{ "20Rnd_650x39_Cased_Mag_F", "", , 1, "call license_cop_swat"},
			{ "100Rnd_65x39_caseless_mag", "", , 1, "call license_cop_swat"}
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

	class cop_swat {
        name = "Tanoa S.W.A.T Shop";
        side = "cop";
        conditions = "license_cop_swat";
        items[] = {
            { "Binocular", "", 150, 1, "" },
            { "ItemGPS", "", 100, 1, "" },
            { "FirstAidKit", "", 150, 1, "" },
            { "NVGoggles_OPFOR", "", 2000, 1, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 1, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 1, "" },
            { "hgun_P07_F", "", 7500, 1, "" },
            { "hgun_P07_khk_F", "", 7500, 1, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 1, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 1, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 1, "call life_coplevel >= 2" },
            { "arifle_MXC_F", "", 30000, 1, "call life_coplevel >= 3" },
			{ "arifle_MX_SW_Black_F", "", 3000, 1, "call life_coplevel >= 3" },
			{ "srifle_DMR_03_F", "", 3000, 1, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 1, "call life_coplevel >= 3" } //Apex DLC Sniper
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 1, "" },
            { "11Rnd_45ACP_Mag", "", 130, 1, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 1, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 1, "call life_coplevel >= 2" },
			{ "20Rnd_762x51_Mag", "", 200, 1, "call life_coplevel >= 3" },
			{ "100Rnd_65x39_caseless_mag", "", 200, 1, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 1, "call life_coplevel >= 3" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
			{ "Medikit", "", 200 ,100,"" },
			{ "Toolkit", "", 100, 100, ""},
            { "NVGoggles", "", 1200, 600, "" },
			{ "B_FieldPack_ocamo", "", 3000, "" },
			{ "B_Kitbag_cbr", "", 3000, "" }
        };
        mags[] = {};
        accs[] = {};
    };

	class civ_donator {
        name = "Donater Shop";
        side = "civ";
		conditions
		items[] = {
			{ "arifle_Katiba_F", "", 130000 },			//Katiba
            { "arifle_MXC_F", "", 140000 },				//MXC
            { "arifle_MXM_F", "", 165000 },				//MXM
            { "arifle_MX_F", "", 150000 },				//MX
            { "SMG_01_F", "", 40000 },					//Vermin
            { "srifle_DMR_03_khaki_F", "", 220000 },	//MK-1 EMR
            { "srifle_DMR_03_tan_F", "", 220000 },		//""
            { "srifle_DMR_03_multicam_F", "", 220000 },	//""
            { "srifle_DMR_03_woodland_F", "", 220000 },	//""
            { "srifle_DMR_01_F", "", 200000 },			//Rahim
            { "srifle_DMR_06_camo_F", "", 210000 },		//MK14
            { "arifle_SDAR_F", "", 90000 },				//SDAR
            { "arifle_TRG20_F", "", 110000 }    		//TRG20
		};
		accs[] = {
			{ "optic_Arco", "", 1500 },					//ARCO
			{ "optic_Hamr", "", 1500 },					//RCO
			{ "optic_MRCO", "", 1500 },					//MRCO
			{ "optic_ACO_grn", "", 1500 },				//ACO
			{ "optic_DMS", "", 25000 },					//DMS
			{ "optic_KHS_old", "", 25000 },				//Kahlia Alt
			{ "optic_AMS", "", 30000 },					//AMS
			{ "optic_KHS_blk", "", 35000 },				//Kahlia
			{ "optic_SOS", "", 30000 },					//SOS
			{ "optic_Holosight", "", 1500 },			//Holosight	
			{ "muzzle_snds_L", "", 2500 },				//9mm Schalldaemper
			{ "muzzle_snds_acp", "", 5000 },			//45 ACP
			{ "muzzle_snds_H", "", 20000 },				//6.5mm
			{ "muzzle_snds_M", "", 15000 },				//5.56mm
			{ "muzzle_snds_B", "", 25000 },				//7.62mm
			{ "bipod_03_F_oli", "", 1000 },				//AAF Oliv
			{ "bipod_03_F_blk", "", 1000 },				//AAF Black
			{ "bipod_02_F_tan", "", 1000 },				//CSAT Tan
			{ "bipod_02_F_blk", "", 1000 },				//CSAT Black
			{ "bipod_02_F_hex", "", 1000 },				//CSAT HEX
			{ "bipod_01_F_blk", "", 1000 },				//NATO Black
			{ "bipod_01_F_mtp", "", 1000 },				//NATO MTP
			{ "bipod_01_F_snd", "", 1000 }				//NATO Sand
		};
		mags[] = {
			{ "30Rnd_65x39_caseless_green", "", 1000 },	//Katiba Magazin
			{ "30Rnd_65x39_caseless_mag", "", 1000 },	//MX Serie Magazin
			{ "30Rnd_45ACP_Mag_SMG_01", "", 500 },		//Vermin Magazin
			{ "20Rnd_762x51_Mag", "", 3000 },			//MK-1 EMR Magazin
			{ "10Rnd_762x54_Mag", "", 3000 },			//Rahim Magazin
			{ "20Rnd_556x45_UW_mag", "", 1500 },		//SDAR Magazin
			{ "30Rnd_556x45_Stanag", "", 1750 }  	//TRG20 + Mk20 Magazin
	    
		};
    };
};

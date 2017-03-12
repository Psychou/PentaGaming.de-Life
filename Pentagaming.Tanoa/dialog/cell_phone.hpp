class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {

		
		class EXphone : Life_RscPicture 
		{
			idc = 3001;
			text = "textures\phone.paa";
			x = 0.384999;
			y = -0.00433818;
			w = 0.8125;
			h = 1.03676;
		};
	
	};
			
    class controls {

        class TextToSend: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
			idc = 3002;
			text = "$STR_CELL_TextToSend";
			x = 0.605607;
			y = 0.210809;
			w = 0.2725;
			h = 0.04;
        };

        class textEdit: Life_RscEdit {
            idc = 3003;
            text = "";
            sizeEx = 0.030;
            x = 0.607904;
            y = 0.340086;
            w = 0.325;
            h = 0.26;
        };

        class TextMsgButton: Life_RscButtonMenu {
            idc = 3015;
            text = "$STR_CELL_TextMSGBtn";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textmsg";
            x = 0.6125;
            y = 0.64;
            w = 0.15;
            h = 0.05;
        };

        class PlayerList: Life_RscCombo {
            idc = 3004;
            x = 0.6125;
            y = 0.28;
            w = 0.2375;
            h = 0.04;
        };

        class TextCopButton: Life_RscButtonMenu {
            idc = 3016;
            text = "$STR_CELL_TextPolice";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textcop";
            x = 0.775;
            y = 0.64;
            w = 0.15;
            h = 0.05;
        };

        class TextAdminButton: Life_RscButtonMenu {
            idc = 3017;
            text = "$STR_CELL_TextAdmins";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textadmin";
            x = 0.775;
			y = 0.72;
			w = 0.15;
			h = 0.05;
        };

        class AdminMsgButton: Life_RscButtonMenu {
            idc = 3020;
            text = "$STR_CELL_AdminMsg";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
            x = 0.6125;
			y = 0.8;
			w = 0.15;
			h = 0.05;
        };

        class AdminMsgAllButton: Life_RscButtonMenu {
            idc = 3021;
            text = "$STR_CELL_AdminMSGAll";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_adminmsgall";
            x = 0.775;
			y = 0.8;
			w = 0.15;
			h = 0.05;
        };

        class EMSRequest: Life_RscButtonMenu {
            idc = 3022;
            text = "$STR_CELL_EMSRequest";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
            x = 0.6125;
			y = 0.72;
			w = 0.15;
			h = 0.05;
        };
		
		class PoliceMsgAllButton : life_RscButtonMenu {
			idc = 3023;
			text = "Rundfunk";
			colorBackground[] = {"(profileNamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profileNamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profileNamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_polizeimsgall";
			x = 0.6125;
			y = 0.88;
			w = 0.15;
			h = 0.05;
     };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.743107;
			y = 0.886213;
			w = 0.05;
			h = 0.06;
        };
    };
};
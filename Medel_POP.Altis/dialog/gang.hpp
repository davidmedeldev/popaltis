
class Life_My_Gang_Diag
{
    idd = 2620;
    name= "life_my_gang_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

    class controlsBackground
    {
        class Life_RscTitleBackground: Life_RscText
        {
            colorBackground[] = {0.32,0.85,0.29,1};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };
        class MainBackground: Life_RscText
        {
            colorBackground[] = {1,0.6,0.2,1};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.6;
            h = 0.6 - (22 / 250);
        };
    };

    class controls
    {
        class Title: Life_RscTitle
        {
            colorBackground[] = {0, 0, 0, 0};
            idc = 2629;
            text = "";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };
        class GangMemberList: Life_RscListBox
        {
            idc = 2621;
            text = "";
            sizeEx = 0.035;
            x = 0.11;
            y = 0.26;
            w = 0.350;
            h = 0.370;
        };
        class CloseLoadMenu: Life_RscButtonMenu
        {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
        class GangLeave: Life_RscButtonMenu
        {
            idc = -1;
            text = "Salir";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_gangLeave";
            x = 0.47;
            y = 0.26;
            w = (9 / 40);
            h = (1 / 25);
        };
        class GangLock: Life_RscButtonMenu
        {
            idc = 2622;
            text = "Aumentar Slots";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangUpgrade";
            x = 0.47;
            y = 0.31;
            w = (9 / 40);
            h = (1 / 25);
        };
        class GangKick: Life_RscButtonMenu
        {
            idc = 2624;
            text = "Expulsar";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_gangKick";
            x = 0.47;
            y = 0.36;
            w = (9 / 40);
            h = (1 / 25);
        };
        class GangLeader: Life_RscButtonMenu
        {
            idc = 2625;
            text = "Hacer Líder";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangNewLeader";
            x = 0.47;
            y = 0.41;
            w = (9 / 40);
            h = (1 / 25);
        };
        class InviteMember: GangLeader
        {
            idc = 2630;
            text = "Invitar";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangInvitePlayer";
            y = .51;
        };
        class DisbandGang: InviteMember
        {
            idc = 2631;
            text = "Eliminar Banda";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangDisband";
            y = .46;
        };
        class ColorList: Life_RscCombo
        {
            idc = 2632;
            x = 0.47;
            y = 0.56;
            w = (9 / 40);
            h = 0.03;
        };
        class GangBank: Title
        {
            idc = 601;
            style = 1;
            text = "";
        };
    };
};

class Life_Create_Gang_Diag
{
    idd = 2520;
    name= "life_my_gang_menu_create";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn {waitUntil {!isNull (findDisplay 2520)}; ((findDisplay 2520) displayCtrl 2523) ctrlSetText format [localize ""STR_Gang_PriceTxt"",[(getNumber(missionConfigFile >> 'Life_Settings' >> 'gang_price'))] call life_fnc_numberText]};";

    class controlsBackground
    {
        class Life_RscTitleBackground: Life_RscText
        {
            colorBackground[] = {0.32,0.85,0.29,1};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
        };
        class MainBackground: Life_RscText
        {
            colorBackground[] = {1,0.6,0.2,1};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.5;
            h = 0.3 - (22 / 250);
        };
    };

    class controls
    {
        class InfoMsg: Life_RscStructuredText
        {
            idc = 2523;
            sizeEx = 0.020;
            text = "";
            x = 0.1;
            y = 0.25;
            w = 0.5;
            h = .11;
        };
        class Title: Life_RscTitle
        {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "Administración de la Banda";
            x = 0.1;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
        };
        class CloseLoadMenu: Life_RscButtonMenu
        {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.5 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
        class GangCreateField: Life_RscButtonMenu
        {
            idc = -1;
            text = "Crear";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_createGang";
            x = 0.27;
            y = 0.40;
            w = (6.25 / 40);
            h = (1 / 25);
        };
        class CreateGangText: Life_RscEdit
        {
            idc = 2522;
            text = "Nombre de tu Banda";
            x = 0.04 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.35;
            w = (13 / 40);
            h = (1 / 25);
        };
        		class medel: RscText
		{
    		idc = -1;
    		text = "www.medel.es"; //--- ToDo: Localize;
    		x = -0.000156274 * safezoneW + safezoneX;
    		y = -0.00599999 * safezoneH + safezoneY;
    		w = 0.0773438 * safezoneW;
    		h = 0.033 * safezoneH;
		};
        class credito: RscText
        {
	        idc = -1;
	        text = "Medel"; //--- ToDo: Localize;
	        x = 0.964475 * safezoneW + safezoneX;
	        y = -0.01656 * safezoneH + safezoneY;
	        w = 0.0412603 * safezoneW;
	        h = 0.055 * safezoneH;
        };
    };
};

class CfgPatches
{
	class 332nd_Legion_Intro
	{
		author = "332nd_AUX_TEAM";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		authors[] =
        {
			"332nd_AUX_TEAM",
			"Hawkeye",
			"Magic"
        };
	};
};

//Base Script provided by chaosviking
//reference link https://community.bistudio.com/wiki/SafeZone
//reference link https://community.bistudio.com/wiki/Arma_3:_GUI_Coordinates
//reference link https://community.bistudio.com/wiki/Arma_3:_User_Interface_Editor
//reference link https://community.bistudio.com/wiki/CT_BUTTON


class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	idc=1;
	enableDisplay=1;
	text="332nd_main_menu\Images\332nd_artwork_2.paa";
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class Spotlight
	{
	};
	class controls
	{
		class Spotlight1
		{
		};
		class Spotlight2
		{
		};
		class Spotlight3
		{
		};
		class BackgroundSpotlightRight
		{
		};
		class BackgroundSpotlightLeft
		{
		};
		class BackgroundSpotlight
		{
		};
		class B_Credits
		{
		};
		class ConnectDiscord: RscButton
		{
			idc=-1;
			text="Join the 332nd Legion Discord";
			font = PuristaSemibold;
			color = 
			style=2;
			url="https://discord.gg/tgUsw9P6dq";
			colorBackground[]={0,0,0,0.40000001};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.43 * safeZoneW";
			y="safeZoneY + 0.65 * safeZoneH";
			w="0.35";
			h="0.05";
		};
		class ConnectServer: RscButton
		{
			idc=-1;
			text="Server 1";
			font = PuristaSemibold;
			style=2;
			onbuttonclick="connectToServer ['162.248.92.58', 2322, '332nd']";
			colorBackground[]={0,0,0,0.40000001};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.43 * safeZoneW";
			y="safeZoneY + 0.25 * safeZoneH";
			w="0.35";
			h="0.05";
		};
		class ConnectServer2: RscButton
		{
			idc=-1;
			text="Server 2";
			font = PuristaSemibold;
			style=2;
			onbuttonclick="connectToServer ['162.248.92.58', 2332, '332nd']";
			colorBackground[]={0,0,0,0.40000001};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.43 * safeZoneW";
			y="safeZoneY + 0.35 * safeZoneH";
			w="0.35";
			h="0.05";
		};
		class ConnectServer3: RscButton
		{
			idc=-1;
			text="Liberation Server";
			font = PuristaSemibold;
			style=2;
			onbuttonclick="connectToServer ['162.248.92.58', 2362, '332nd']";
			colorBackground[]={0,0,0,0.40000001};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.43 * safeZoneW";
			y="safeZoneY + 0.45 * safeZoneH";
			w="0.35";
			h="0.05";
		};
		class ConnectServer4: RscButton
		{
			idc=-1;
			text="Event Server";
			font = PuristaSemibold;
			style=2;
			onbuttonclick="connectToServer ['162.248.92.58', 2342, '332nd']";
			colorBackground[]={0,0,0,0.40000001};
			colorBackgroundActive[]={1,0,0,0,2};
			borderSize=0.054000001;
			colorBorder[]={0,0,0,0};
			x="safeZoneX + 0.43 * safeZoneW";
			y="safeZoneY + 0.55 * safeZoneH";
			w="0.35";
			h="0.05";
		};

	};
	class controlsBackground
	{
		class LoadingPicture_332nd: RscPicture
		{
			idc=1;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="332nd_main_menu\Images\332nd_artwork_2.paa";
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_332nd: RscPicture
		{
			idc=1000;
			colorText[]={1,1,1,0.41999999};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="332nd_main_menu\Images\332nd_artwork_2.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingBackground_332nd_Loading1: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_332nd: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="332nd_main_menu\Images\332nd_artwork_2.paa";
				};
			};
		};
		class LoadingBackground_332nd_Loading2: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_332nd: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="332nd_main_menu\Images\332nd_artwork_2.paa";
				};
			};
		};
		class LoadingBackground_332nd_Loading3: RscDisplayLoadMission
		{
			class controlsBackground: controlsBackground
			{
				class LoadingPicture_332nd: RscPicture
				{
					idc=1000;
					colorText[]={1,1,1,0.41999999};
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="332nd_main_menu\Images\332nd_artwork_2.paa";
				};
			};
		};
	};
};
class RscDisplayLoadCustom: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_332nd: RscPicture
		{
			idc=1000;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="332nd_main_menu\Images\332nd_artwork_2.paa";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPicture_332nd: RscPicture
	{
		idc=1000;
		colorText[]={1,1,1,1};
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="332nd_main_menu\Images\332nd_artwork_2.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_332nd: RscPicture
		{
			idc=1000;
			colorText[]={1,1,1,1};
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="332nd_main_menu\Images\332nd_artwork_2.paa";
		};
	};
};
class RscDisplayConfigure
{
	enableDisplay=1;
};

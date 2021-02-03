class CfgMagazines
{
	class RPG32_F;
	class PZF3_HEAT_DM12A1: RPG32_F
	{
		author = "";
		scope = 2;
		displayName = "HEAT DM12A1";
		displaynameShort = "HEAT";
		descriptionShort = "Type: Panzerfaust 3 HEAT DM12A1 Rocket<br />Rounds: 1<br />Used in: Panzerfaust 3";
		model = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm12a1_1rnd.p3d);
		modelSpecial = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm12a1_1rnd.p3d);
		modelSpecialIsProxy = 1;
		picture = QPATHTOF(data\images\dm12a1_icon.paa);
		initSpeed = 160;
		ammo = "R_PZF3_HEAT_DM12A1";
		type = "2*		256";
		deleteIfEmpty = 0;
		mass = 233;
	};
	class PZF3_DM32: PZF3_HEAT_DM12A1
	{
		author = "";
		scope = 2;
		displayName = "BUNKERFAUST DM32";
		displaynameShort = "HE";
		descriptionShort = "Type: Panzerfaust 3 HE DM32 Rocket<br />Rounds: 1<br />Used in: Panzerfaust 3";
		model = QPATHTOF(data\p3d\mags\mag_pzf3_dm32_1rnd.p3d);
		modelSpecial = QPATHTOF(data\p3d\mags\mag_pzf3_dm32_1rnd.p3d);
		picture = QPATHTOF(data\images\dm32_icon.paa);
		initSpeed = 152;
		ammo = "R_PZF3_DM32";
		mass = 242;
	};
	class PZF3_HEAT_DM22: PZF3_HEAT_DM12A1
	{
		author = "";
		scope = 2;
		displayName = "TANDEM HEAT DM22";
		displaynameShort = "HEAT-RA";
		descriptionShort = "Type: Panzerfaust 3 HE DM22 Rocket<br />Rounds: 1<br />Used in: Panzerfaust 3";
		model = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm22_1rnd.p3d);
		modelSpecial = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm22_1rnd.p3d);
		picture = QPATHTOF(data\images\dm22_icon.paa);
		initSpeed = 149;
		ammo = "R_PZF3_HEAT_DM22";
		mass = 242;
	};
};
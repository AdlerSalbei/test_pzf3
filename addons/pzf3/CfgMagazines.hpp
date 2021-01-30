class CfgMagazines
{
	class RPG32_F;
	class PZF3_HEAT_DM12A1: RPG32_F
	{
		author = "";
		scope = 2;
		displayName = "HEAT DM12A1";
		displaynameShort = "";
		descriptionShort = "";
		model = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm12a1_1rnd.p3d);
		modelSpecial = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm12a1_1rnd.p3d);
		modelSpecialIsProxy = 1;
		picture = "";
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
		displaynameShort = "";
		descriptionShort = "";
		model = QPATHTOF(data\p3d\mags\mag_pzf3_dm32_1rnd.p3d);
		modelSpecial = QPATHTOF(data\p3d\mags\mag_pzf3_dm32_1rnd.p3d);
		picture = "";
		initSpeed = 152;
		ammo = "R_PZF3_DM32";
		mass = 242;
	};
	class PZF3_HEAT_DM22: PZF3_HEAT_DM12A1
	{
		author = "";
		scope = 2;
		displayName = "TANDEM HEAT DM22";
		displaynameShort = "";
		descriptionShort = "";
		model = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm22_1rnd.p3d);
		modelSpecial = QPATHTOF(data\p3d\mags\mag_pzf3_heat_dm22_1rnd.p3d);
		picture = "";
		initSpeed = 149;
		ammo = "R_PZF3_HEAT_DM22";
		mass = 242;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class RPG32_F;
	class PZF3_HEAT_DM12A1: RPG32_F
	{
		author = "";
		scope = 2;
		displayName = "Rocket HEAT DM12A1";
		displaynameShort = "";
		descriptionShort = "";
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm12a1_item);
		modelSpecial = QPATHTOF(data\p3d\proxys\mag_pzf3_heat_dm12a1_1rnd);
		modelSpecialIsProxy = 1;
		picture = "";
		initSpeed = 160;
		ammo = "R_PZF3_HEAT_DM12A1";
		type = "2*		256";
		mass = 233;
	};
	class PZF3_DM32: RPG32_F
	{
		author = "";
		scope = 2;
		displayName = "Rocket BUNKERFAUST DM32";
		displaynameShort = "";
		descriptionShort = "";
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_dm32_item);
		modelSpecial = QPATHTOF(data\p3d\proxys\mag_pzf3_dm32_1rnd);
		modelSpecialIsProxy = 1;
		picture = "";
		initSpeed = 152;
		ammo = "R_PZF3_DM32";
		type = "2*		256";
		mass = 242;
	};
	class PZF3_HEAT_DM22: RPG32_F
	{
		author = "";
		scope = 2;
		displayName = "Rocket TANDEM HEAT DM22";
		displaynameShort = "";
		descriptionShort = "";
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm22_item);
		modelSpecial = QPATHTOF(data\p3d\proxys\mag_pzf3_heat_dm22_1rnd);
		modelSpecialIsProxy = 1;
		picture = "";
		initSpeed = 149;
		ammo = "R_PZF3_HEAT_DM22";
		type = "2*		256";
		mass = 242;
	};
};
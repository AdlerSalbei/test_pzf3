class CfgAmmo
{
	class R_PG7V_AT;
	class R_PG7VR_AT;
	class R_OG9_HE;
	class R_PZF3_HEAT_DM12A1: R_PG7V_AT
	{
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm12a1);
		displayName = "DM12 Monohohlladung";
		thrust = 280;
		thrusttime = 1.3;
		maxspeed = 248;
		inittime = 0.002;
		sideairfriction = 0.22;
		ACE_caliber = 110;
		ACE_bulletLength = 1200;
		ACE_bulletMass = 3900;
	};
	class R_PZF3_DM32: R_OG9_HE
	{
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_dm32);
		displayName = "DM32 Bunkerfaust";
		thrust = 280;
		thrusttime = 1.3;
		maxspeed = 248;
		inittime = 0.002;
		sideairfriction = 0.22;
		ACE_caliber = 110;
		ACE_bulletLength = 1200;
		ACE_bulletMass = 3900;
	};
	class R_PZF3_HEAT_DM22: R_PG7VR_AT
	{
		model = QPATHTOF(data\p3d\ammo\rocket_pzf3_heat_dm22);
		displayName = "DM22 Tandemhohlladung";
		hit = 650;
		thrust = 280;
		thrusttime = 1.3;
		maxspeed = 248;
		inittime = 0.002;
		sideairfriction = 0.22;
		ACE_caliber = 110;
		ACE_bulletLength = 1200;
		ACE_bulletMass = 3900;
	};
};
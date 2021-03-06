class 20Rnd_762x51_FNFAL : CA_Magazine
{
	picture = "\z\addons\dayz_epoch_w\magazine\ui\m_fnfal_mag.paa";
    model = "\z\addons\dayz_epoch_w\magazine\dze_fnFal_mag.p3d";
	displayName = $STR_DZ_MAG_20RND_762X51_FNFAL_NAME;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_762x51_G3 : 20Rnd_762x51_FNFAL
{
	picture	= "\z\addons\dayz_epoch_w\g3\data\m_g3_CA.paa";
	model = "\z\addons\dayz_epoch_w\g3\h4g3_mag.p3d";
	displayName = $STR_DZ_MAG_20RND_G3_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_G3_DESC;
};

class 20Rnd_762x51_DMR : CA_Magazine
{
	model = "\dayz_equip\models\mag20.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_us_dmr_ca.paa";
	displayName = $STR_DZ_MAG_20RND_762X51_DMR_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_DMR_DESC;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_SPLIT_4X5M24;
			script = "spawn player_reloadMag;";
			use[] = {"20Rnd_762x51_DMR"};
			output[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
		};
	};
};

class 20Rnd_762x51_DMRSD : 20Rnd_762x51_DMR
{
	displayName = $STR_DZ_MAG_20RND_762X51_DMRSD_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_DMRSD_DESC;
	picture = "\dayz_epoch_c\icons\magazines\m_us_dmr_ca_sd.paa";
	ammo = "Rem_762x51_SD";	
	
	cartridgeName = "762x51_SD";
	
	class ItemActions
	{
		COMBINE_MAG		
		delete ReloadMag;
	};
};

class 5Rnd_762x51_M24 : CA_Magazine
{
	model = "\dayz_equip\models\mag5rnd.p3d";
	displayName = $STR_DZ_MAG_5RND_762X51_M24_NAME;
	descriptionShort = $STR_DZ_MAG_5RND_762x51_M24_DESC;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
		
		class ReloadMag
		{
			text = $STR_MAG_CONV_M24_DMR;
			script = "spawn player_reloadMag;";
			use[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
			output[] = {"20Rnd_762x51_DMR"};
		};
	};
};

class 100Rnd_762x51_M240: CA_Magazine
{
	displayName = $STR_DZ_MAG_100RND_762X51_M240_NAME;
	descriptionShort = $STR_DZ_MAG_100RND_762x51_M240_DESC;
	
	cartridgeName = "762x51";
	type = WeaponSlotItem; // Only takes up one gear slot in Epoch
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_762x51_B_SCAR : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_mk17_mag.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_mk17_ca.paa";
	displayName = $STR_DZ_MAG_20Rnd_762x51_B_SCAR_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_MK17_DESC;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 20Rnd_762x51_SB_SCAR : CA_Magazine
{
	model = "\z\addons\dayz_epoch_w\magazine\dze_mk17_mag.p3d";
	picture = "\dayz_epoch_c\icons\magazines\m_mk17sd_ca.paa";
	displayName = $STR_DZ_MAG_20Rnd_762x51_SB_SCAR_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_MK17SD_DESC;
	ammo = "Rem_762x51_SD";	
	initSpeed = 750;
	
	cartridgeName = "762x51_SD";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

class 10Rnd_762x51_CZ750 : 5Rnd_762x51_M24
{
	count = 10;
	picture = "\Ca\Weapons_ACR\Data\UI\picture_CZ750_mag_CA.paa";
	displayName = $STR_DZ_MAG_10Rnd_762x51_CZ750_NAME;
	descriptionShort = $STR_DZ_MAG_10RND_CZ750_DESC;
	
	cartridgeName = "762x51";
	
	class ItemActions
	{
		delete ReloadMag;
		COMBINE_MAG
	};
};

class 20Rnd_762x51_RSASS: CA_Magazine
{
	scope = public;
	initSpeed = 900;
	picture = "\FHQ_Remington\ammo\ui\i_20rndpmag.paa";
	model = "\FHQ_Remington\RSASS\magazine.p3d";
	displayName = $STR_DZ_MAG_20RND_RSASS_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_RSASS_DESC;
	count = 20;
	cartridgeName = "762x51";
	ammo = "Rem_762x51_Ball";	
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};

class 20Rnd_762x51_RSASS_SD: 20Rnd_762x51_RSASS
{
	picture = "\FHQ_Remington\ammo\ui\i_20rndpmag_sd.paa";
	initSpeed = 850;
	displayName = $STR_DZ_MAG_20RND_RSASSSD_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_RSASSSD_DESC;
	cartridgeName = "762x51_SD";
	ammo = "Rem_762x51_SD";	
};

class 20Rnd_762x51_HK417: 20Rnd_762x51_RSASS
{
	picture = "\dayz_epoch_c\icons\magazines\m_hk417.paa";
	displayName = $STR_DZ_MAG_20RND_HK417_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_HK417_DESC;
	count = 20;
	cartridgeName = "762x51";
	ammo = "Rem_762x51_Ball";	
};

class 20Rnd_762x51_HK417SD: 20Rnd_762x51_HK417
{
	initSpeed = 850;
	picture = "\dayz_epoch_c\icons\magazines\m_hk417_sd.paa";
	displayName = $STR_DZ_MAG_20RND_HK417SD_NAME;
	descriptionShort = $STR_DZ_MAG_20RND_HK417SD_DESC;
	cartridgeName = "762x51_SD";
	ammo = "Rem_762x51_SD";	
};

class 6Rnd_762x51_WA2000: CA_Magazine
{
	scope = public;
	initSpeed = 900;
	picture	= "\z\addons\dayz_epoch_w\wa2000\data\m_wa2000_CA.paa";
	model = "\z\addons\dayz_epoch_w\wa2000\h4_wa2000_mag.p3d";
	displayName = $STR_DZ_MAG_6RND_WA2000_NAME;
	descriptionShort = $STR_DZ_MAG_6RND_WA2000_DESC;
	count = 6;
	cartridgeName = "762x51";
	ammo = "Rem_762x51_Ball";	
	
	class ItemActions
	{
		COMBINE_MAG
	};	
};

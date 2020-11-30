class ModularItems: NonStrategic {
	scope = 0;
	destrType = "DestructBuilding";
	placement = "vertical";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch Buildables";
	
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};
		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};
		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class MetalFloor_DZ: ModularItems {
	scope = 2;	
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\metal_floor.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_METALFLOOR;	
	GhostPreview = "MetalFloor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_metal_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodRamp_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Ramp.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODRAMP;
	GhostPreview = "WoodRamp_Preview_DZ";
};
class CinderWallHalf_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	upgradeBuilding[] = {"CinderWall_DZ",{"ItemToolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWallHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class CinderWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	maintainBuilding[] = {{"MortarBucket",1}};
	GhostPreview = "CinderWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderWallDoorway_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoor_DZ",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	GhostPreview = "CinderWallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class CinderWallSmallDoorway_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	maintainBuilding[] = {{"MortarBucket",1}};
	upgradeBuilding[] = {"CinderWallDoorSmall_DZ",{"ItemToolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
	GhostPreview = "CinderWallSmallDoorway_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodFloor_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\Wood_Floor.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_FLOORCEILING;
	maintainBuilding[] = {{"PartWoodLumber",4}};
	GhostPreview = "WoodFloor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_floor.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodFloorHalf_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\half_floor.p3d";
	armor = 1000;
	displayName = $STR_EPOCH_FLOORCEILINGHALF;
	maintainBuilding[] = {{"PartWoodLumber",2}};
	constructioncount = 2;
	GhostPreview = "WoodFloorHalf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_half.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodFloorQuarter_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch\models\quarter_floor.p3d";
	armor = 600;
	displayName = $STR_EPOCH_FLOORCEILINGQUARTER;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	GhostPreview = "WoodFloorQuarter_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_quarter.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodLargeWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWOODWALL;
	upgradeBuilding[] = {"WoodLargeWallWin_DZ",{"ItemToolbox"},{{"PartGlass",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodLargeWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodLargeWallDoor_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_door.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHDOORWAY;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	upgradeBuilding[] = {"Land_DZE_LargeWoodDoor",{"ItemToolbox"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	GhostPreview = "WoodLargeWallDoor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodLargeWallWin_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\large_wall_win.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_LARGEWALLWITHWINDOW;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodLargeWallWin_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodSmallWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WOODWALL;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodSmallWallWin_DZ",{"ItemToolbox"},{{"PartGlass",1}}};
	GhostPreview = "WoodSmallWall_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodSmallWallThird_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\third_wall.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODWALLTHIRDPART;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	constructioncount = 1;
	GhostPreview = "WoodSmallWallThird_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_third.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodSmallWallWin_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_win.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHWINDOW;
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodSmallWallWin_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodSmallWallDoor_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\small_wall_door.p3d";
	armor = 2000;
	displayName = $STR_EPOCH_WALLWITHDOORWAY;
	upgradeBuilding[] = {"Land_DZE_WoodDoor",{"ItemToolbox"},{{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	maintainBuilding[] = {{"PartWoodPlywood",1},{"PartWoodLumber",1}};
	GhostPreview = "WoodSmallWallDoor_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class WoodTriangleWall_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\apex_tri\apex_tri.p3d";
	armor = 1500;
	displayName = $STR_EPOCH_TRIANGLE_WOODWALL;
	GhostPreview = "Wood_Triangle_Wall_Preview_DZ";
	maintainBuilding[] = {{"PartWoodLumber",1}};
};

class WoodStairs_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs.p3d";
	armor = 600;
	displayName = $STR_EPOCH_WOODSTAIRSWITHSUPPORTS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodStairsRails_DZ",{"ItemToolbox"},{{"PartWoodLumber",2}}};
	GhostPreview = "WoodStairs_Preview_DZ";
};

class WoodStairsRails_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_rail.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODSTAIRSRAILS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "WoodStairs_Preview_DZ";
};

class WoodStairsSans_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_stairs_sans.p3d";
	armor = 500;
	displayName = $STR_EPOCH_WOODSTAIRS;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	upgradeBuilding[] = {"WoodStairs_DZ",{"ItemToolbox"},{{"PartWoodLumber",2}}};
	GhostPreview = "WoodStairsSans_Preview_DZ";
};

class WoodFloorStairs_DZ: ModularItems {
	scope = 2;
	offset[] = {0,4,0};
	model = "\z\addons\dayz_epoch_v\base_building\floors\wood_floor_stairs.p3d";
	armor = 1000;
	displayName = "Wood floor w/Stairs";
	maintainBuilding[] = {{"PartWoodLumber",4}};
	GhostPreview = "Wood_Floor_Stairs_Preview_DZ";
};

class WoodLadder_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch\models\wood_ladder.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODLADDER;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "WoodLadder_Preview_DZ";
	ladders[] = {{"start1","end1"}};
};

class WoodHandrail_DZ: ModularItems {
	scope = 2;
	offset[] = {0,1.5,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\railing\railing.p3d";
	armor = 300;
	displayName = $STR_EPOCH_WOODRAIL;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "Wood_Handrail_Preview_DZ";
};

class WoodPillar_DZ: ModularItems {
	scope = 2;
	offset[] = {0,2,0};
	model = "z\addons\dayz_epoch_v\base_building\wood\pillar\corner_pillar.p3d";
	armor = 700;
	displayName = $STR_EPOCH_WOODPILLAR;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	GhostPreview = "Wood_Pillar_Preview_DZ";
};

class WoodGateFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_frame.p3d";
	armor = 2800;
	displayName = $STR_EPOCH_WOODGATEFRAME;
	maintainBuilding[] = {{"PartWoodLumber",4}};
	upgradeBuilding[] = {"Land_DZE_WoodGate",{"ItemToolbox"},{{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}}};
	GhostPreview = "WoodGate_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wood_wreck_frame.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

class CinderGateFrame_DZ: ModularItems {
	scope = 2;
	offset[] = {0,3,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_frame.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_CINDERGATEFRAME;
	maintainBuilding[] = {{"MortarBucket",3}};
	upgradeBuilding[] = {"CinderGate_DZ",{"ItemToolbox"},{{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	GhostPreview = "CinderGate_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

#include "ModularPreviews.hpp"

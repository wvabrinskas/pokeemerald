Underwater_PALake_Level_3_MapScripts::
# 4 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Underwater_PALake_Level_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Underwater_PALake_Level_3_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	warp UNDERWATER_PA_LAKE_LEVEL_2, 1, 1, 0
	return


PAUnderwater_Wailmer_Triggers::
# 10 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	msgbox PAUnderwater_Wailmer_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	waitmessage
# 12 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	call PAUnderwater_Wailmer_Battle
	return


PAUnderwater_Wailmer_Battle::
# 16 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	playmoncry SPECIES_WAILMER, CRY_MODE_ENCOUNTER
# 17 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	delay 40
# 18 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	waitmoncry
# 19 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	setwildbattle SPECIES_WAILMER, 25, ITEM_ORAN_BERRY
# 20 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	dowildbattle
# 21 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 22 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq PAUnderwater_Wailmer_Battle_2
# 22 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PAUnderwater_Wailmer_Battle_2
	return

PAUnderwater_Wailmer_Battle_2:
# 23 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	call PAUnderwater_Battle_Complete
	return


PAUnderwater_Battle_Complete::
# 30 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	call PAHome_Hide_Wailmers
# 31 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	msgbox PAUnderwater_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	waitmessage
	return


PAHome_Hide_Wailmers::
# 37 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	removeobject 2
# 38 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	setflag FLAG_DEFEATED_WAILMER_PA
	return


PAUnderwater_Wailmer_Triggers_Text_0:
# 10 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	.string "The...lost...phone...$"

PAUnderwater_Battle_Complete_Text_0:
# 31 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	.string "You may obtain the lost phone..$"

Underwater_PALake_Level_3_MapScripts::
	.byte 0


PAUnderwater_Wailmer_Triggers::
# 6 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	msgbox PAUnderwater_Wailmer_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	waitmessage
# 8 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	call PAUnderwater_Wailmer_Battle
	return


PAUnderwater_Wailmer_Battle::
# 12 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	playmoncry SPECIES_WAILMER, CRY_MODE_ENCOUNTER
# 13 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	delay 40
# 14 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	waitmoncry
# 15 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	setwildbattle SPECIES_WAILMER, 25, ITEM_ORAN_BERRY
# 16 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	dowildbattle
# 17 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq PAUnderwater_Wailmer_Battle_2
# 18 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PAUnderwater_Wailmer_Battle_2
	return

PAUnderwater_Wailmer_Battle_2:
# 19 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	call PAUnderwater_Battle_Complete
	return


PAUnderwater_Battle_Complete::
# 26 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	call PAHome_Hide_Wailmers
# 28 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 29 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	msgbox PAUnderwater_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	waitmessage
	return


PAHome_Hide_Wailmers::
# 35 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	removeobject 2
# 36 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	setflag FLAG_DEFEATED_WAILMER_PA
	return


PAUnderwater_Wailmer_Triggers_Text_0:
# 6 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	.string "The...lost...phone...$"

PAUnderwater_Battle_Complete_Text_0:
# 29 "data/maps/Underwater_PALake_Level_3/scripts.pory"
	.string "You may obtain the lost phone..$"

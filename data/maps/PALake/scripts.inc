PALake_MapScripts::
# 4 "data/maps/PALake/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PALake_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/PALake/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PALake_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PALake_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_PA_LAKE_MAKELEY, PALake_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PALake_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/PALake/scripts.pory"
	setflag FLAG_PA_LAKE_MAKELEY
# 7 "data/maps/PALake/scripts.pory"
	removeobject 11
	return

PALake_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_PA_LAKE_MAKELEY, PALake_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PALake_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/PALake/scripts.pory"
	setflag FLAG_PA_LAKE_MAKELEY
# 14 "data/maps/PALake/scripts.pory"
	removeobject 11
	return


PALake_Battle_Elliot::
# 22 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_ELLIOT, PALake_Text_TianaIntro, PALake_Text_TianaDefeat
# 23 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


PALake_EventScript_Jd::
# 28 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_JD, PALake_Text_JakeIntro, PALake_Text_JakeDefeat
# 29 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end


PALake_EventScript_John::
# 34 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_JOHN, PALake_Text_JohnIntro, PALake_Text_JohnDefeat
# 35 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_JohnPostBattle, MSGBOX_AUTOCLOSE
	end


PALake_Event_Pikachu::
# 40 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_Pikachu, MSGBOX_NPC
	end


PALake_Event_MakeleyPower::
# 45 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_ITEM_PA_LAKE_CHUNGAS_HAT, PALake_Event_MakeleyPower_5
PALake_Event_MakeleyPower_3:
# 52 "data/maps/PALake/scripts.pory"
	clearflag FLAG_PA_LAKE_MAKELEY
# 53 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_Pikachu_Cave_No_Items, MSGBOX_NPC
PALake_Event_MakeleyPower_1:
	end

PALake_Event_MakeleyPower_2:
# 46 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_Pikachu_Cave, MSGBOX_NPC
# 47 "data/maps/PALake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/PALake/scripts.pory"
	setflag FLAG_PA_LAKE_MAKELEY
# 49 "data/maps/PALake/scripts.pory"
	removeobject 11
# 50 "data/maps/PALake/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PALake_Event_MakeleyPower_1

PALake_Event_MakeleyPower_4:
# 45 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_ITEM_PA_LAKE_MATT_PHONE, PALake_Event_MakeleyPower_2
	goto PALake_Event_MakeleyPower_3

PALake_Event_MakeleyPower_5:
# 45 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_ITEM_PA_LAKE_BILLY_RAYBANS, PALake_Event_MakeleyPower_4
	goto PALake_Event_MakeleyPower_3


PALake_Event_Boy1::
# 59 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_Boy1, MSGBOX_NPC
	end


PALake_Event_Girl1::
# 65 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_Girl1, MSGBOX_NPC
	end


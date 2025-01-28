PALake_MapScripts::
	.byte 0


PALake_Battle_Tiana::
# 6 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_TIANA, PALake_Text_TianaIntro, PALake_Text_TianaDefeat
# 7 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


PALake_EventScript_Jake::
# 12 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_JAKE, PALake_Text_JakeIntro, PALake_Text_JakeDefeat
# 13 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end


PALake_EventScript_John::
# 18 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_JOHN, PALake_Text_JohnIntro, PALake_Text_JohnDefeat
# 19 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_JohnPostBattle, MSGBOX_AUTOCLOSE
	end


PALake_Event_Pikachu::
# 24 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_Pikachu, MSGBOX_NPC
	end


PALake_Event_MakeleyPower::
# 29 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_ITEM_PA_LAKE_CHUNGAS_HAT, PALake_Event_MakeleyPower_5
PALake_Event_MakeleyPower_3:
# 36 "data/maps/PALake/scripts.pory"
	clearflag FLAG_PA_LAKE_MAKELEY
# 37 "data/maps/PALake/scripts.pory"
	msgbox PALake_Event_MakeleyPower_Text_1, MSGBOX_NPC
PALake_Event_MakeleyPower_1:
	end

PALake_Event_MakeleyPower_2:
# 30 "data/maps/PALake/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/PALake/scripts.pory"
	setflag FLAG_PA_LAKE_MAKELEY
# 32 "data/maps/PALake/scripts.pory"
	removeobject 11
# 33 "data/maps/PALake/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/PALake/scripts.pory"
	msgbox PALake_Event_MakeleyPower_Text_0, MSGBOX_NPC
	goto PALake_Event_MakeleyPower_1

PALake_Event_MakeleyPower_4:
# 29 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_ITEM_PA_LAKE_MATT_PHONE, PALake_Event_MakeleyPower_2
	goto PALake_Event_MakeleyPower_3

PALake_Event_MakeleyPower_5:
# 29 "data/maps/PALake/scripts.pory"
	goto_if_set FLAG_ITEM_PA_LAKE_BILLY_RAYBANS, PALake_Event_MakeleyPower_4
	goto PALake_Event_MakeleyPower_3


PALake_Event_MakeleyPower_Text_0:
# 34 "data/maps/PALake/scripts.pory"
	.string "You are now deserving...$"

PALake_Event_MakeleyPower_Text_1:
# 37 "data/maps/PALake/scripts.pory"
	.string "The power of Makeley awaits... \pBut only to those deserving....$"

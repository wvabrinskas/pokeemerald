PALake_MapScripts::
	.byte 0


PALake_Battle_Tiana::
# 4 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_TIANA, PALake_Text_TianaIntro, PALake_Text_TianaDefeat
# 5 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


PALake_EventScript_Jake::
# 10 "data/maps/PALake/scripts.pory"
	trainerbattle_single TRAINER_MK_JAKE, PALake_Text_JakeIntro, PALake_Text_JakeDefeat
# 11 "data/maps/PALake/scripts.pory"
	msgbox PALake_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end


PAHouse_MapScripts::
# 8 "data/maps/PAHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PAHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PAHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/PAHouse/scripts.pory"
	clearflag FLAG_PA_HOME_PLAYER_KICKED_BALL
# 10 "data/maps/PAHouse/scripts.pory"
	clearflag FLAG_PA_HOME_BEEDRILL_DISAPPEARED
# 11 "data/maps/PAHouse/scripts.pory"
	clearflag FLAG_PA_HOME_BEE_BATTLE
# 13 "data/maps/PAHouse/scripts.pory"
	setrespawn HEAL_LOCATION_PA_HOUSE
# 14 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_VISITED_PA_HOUSE
	return


PAHome_Player_Kicked_Ball::
# 20 "data/maps/PAHouse/scripts.pory"
	goto_if_set FLAG_PA_HOME_BEE_BATTLE, PAHome_Player_Kicked_Ball_2
# 23 "data/maps/PAHouse/scripts.pory"
	lock
# 24 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Player_Kicked_Ball_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 26 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 27 "data/maps/PAHouse/scripts.pory"
	call PAHome_Beedrill_Triggers
# 28 "data/maps/PAHouse/scripts.pory"
	release
	end

PAHome_Player_Kicked_Ball_2:
	return


# 32 "data/maps/PAHouse/scripts.pory"
PAHome_Beedrill_Movement:
# 33 "data/maps/PAHouse/scripts.pory"
	lock_anim
# 34 "data/maps/PAHouse/scripts.pory"
	set_visible
# 35 "data/maps/PAHouse/scripts.pory"
	unlock_anim
# 36 "data/maps/PAHouse/scripts.pory"
	step_end

# 39 "data/maps/PAHouse/scripts.pory"
PAHome_Player_SeesBees_Movement:
# 40 "data/maps/PAHouse/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 42 "data/maps/PAHouse/scripts.pory"
	delay_1
# 43 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 44 "data/maps/PAHouse/scripts.pory"
	delay_2
# 45 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 46 "data/maps/PAHouse/scripts.pory"
	delay_2
# 47 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 48 "data/maps/PAHouse/scripts.pory"
	delay_1
# 49 "data/maps/PAHouse/scripts.pory"
	face_original_direction
# 50 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Beedrill_Triggers::
# 54 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 56 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 57 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 58 "data/maps/PAHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PAHome_Player_SeesBees_Movement
# 59 "data/maps/PAHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 60 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 62 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Beedrills
	return


PAHome_Battle_Beedrills::
# 66 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 67 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 68 "data/maps/PAHouse/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 69 "data/maps/PAHouse/scripts.pory"
	delay 40
# 70 "data/maps/PAHouse/scripts.pory"
	waitmoncry
# 71 "data/maps/PAHouse/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 35, ITEM_ORAN_BERRY
# 72 "data/maps/PAHouse/scripts.pory"
	dowildbattle
# 73 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne PAHome_Battle_Beedrills_2
	return

PAHome_Battle_Beedrills_2:
# 75 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Complete
	return


PAHome_Hide_Beedrills::
# 82 "data/maps/PAHouse/scripts.pory"
	removeobject 2
# 83 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 84 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEEDRILL_DISAPPEARED
# 85 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_PLAYER_KICKED_BALL
	return


PAHome_Battle_Complete::
# 89 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/PAHouse/scripts.pory"
	call PAHome_Hide_Beedrills
# 91 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEE_BATTLE
# 93 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 94 "data/maps/PAHouse/scripts.pory"
	waitmessage
	return


PAHome_Sign::
# 99 "data/maps/PAHouse/scripts.pory"
	lock
# 100 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Sign_Text_0, MSGBOX_SIGN
# 101 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 102 "data/maps/PAHouse/scripts.pory"
	release
	end


# 106 "data/maps/PAHouse/scripts.pory"
Porcubro:
# 107 "data/maps/PAHouse/scripts.pory"
	face_player
# 108 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Porcubro::
# 112 "data/maps/PAHouse/scripts.pory"
	lock
# 113 "data/maps/PAHouse/scripts.pory"
	applymovement 7, Porcubro
# 114 "data/maps/PAHouse/scripts.pory"
	waitmovement 7
# 115 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Porcubro_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 117 "data/maps/PAHouse/scripts.pory"
	release
	end


PAHome_Lake_Sign::
# 122 "data/maps/PAHouse/scripts.pory"
	lock
# 123 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Lake_Sign_Text_0, MSGBOX_SIGN
# 124 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 125 "data/maps/PAHouse/scripts.pory"
	release
	end


PAHome_Battle_Billy::
# 136 "data/maps/PAHouse/scripts.pory"
	trainerbattle_single TRAINER_MK_BILLY, PAHome_Battle_Billy_Text_0, PAHome_Battle_Billy_Text_1
	end


PAHome_Player_Kicked_Ball_Text_0:
# 24 "data/maps/PAHouse/scripts.pory"
	.string "You kicked the ball.....$"

PAHome_Beedrill_Triggers_Text_0:
# 60 "data/maps/PAHouse/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

PAHome_Battle_Complete_Text_0:
# 93 "data/maps/PAHouse/scripts.pory"
	.string "The Beedrills have disappeared!$"

PAHome_Sign_Text_0:
# 100 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the PA House!$"

PAHome_Porcubro_Text_0:
# 115 "data/maps/PAHouse/scripts.pory"
	.string "Porcubro is always here to chill!$"

PAHome_Lake_Sign_Text_0:
# 123 "data/maps/PAHouse/scripts.pory"
	.string "Head to the lake!$"

PAHome_Battle_Billy_Text_0:
# 136 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the house..\nLet's battle.$"

PAHome_Battle_Billy_Text_1:
# 136 "data/maps/PAHouse/scripts.pory"
	.string "Damn I got bodied.. $"

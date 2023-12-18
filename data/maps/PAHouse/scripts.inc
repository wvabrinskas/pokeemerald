PAHouse_MapScripts::
	.byte 0


PAHome_Player_Kicked_Ball::
# 10 "data/maps/PAHouse/scripts.pory"
	goto_if_set FLAG_PA_HOME_BEE_BATTLE, PAHome_Player_Kicked_Ball_2
# 13 "data/maps/PAHouse/scripts.pory"
	lock
# 14 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Player_Kicked_Ball_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 16 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 17 "data/maps/PAHouse/scripts.pory"
	call PAHome_Beedrill_Triggers
# 18 "data/maps/PAHouse/scripts.pory"
	release
	end

PAHome_Player_Kicked_Ball_2:
	return


# 22 "data/maps/PAHouse/scripts.pory"
PAHome_Beedrill_Movement:
# 23 "data/maps/PAHouse/scripts.pory"
	lock_anim
# 24 "data/maps/PAHouse/scripts.pory"
	set_visible
# 25 "data/maps/PAHouse/scripts.pory"
	unlock_anim
# 26 "data/maps/PAHouse/scripts.pory"
	step_end

# 29 "data/maps/PAHouse/scripts.pory"
PAHome_Player_SeesBees_Movement:
# 30 "data/maps/PAHouse/scripts.pory"
	emote_exclamation_mark
# 31 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 32 "data/maps/PAHouse/scripts.pory"
	delay_1
# 33 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 34 "data/maps/PAHouse/scripts.pory"
	delay_2
# 35 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 36 "data/maps/PAHouse/scripts.pory"
	delay_2
# 37 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 38 "data/maps/PAHouse/scripts.pory"
	delay_1
# 39 "data/maps/PAHouse/scripts.pory"
	face_original_direction
# 40 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Beedrill_Triggers::
# 44 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 46 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 47 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data/maps/PAHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PAHome_Player_SeesBees_Movement
# 49 "data/maps/PAHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 50 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 51 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 52 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Beedrills
	return


PAHome_Battle_Beedrills::
# 56 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 57 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 58 "data/maps/PAHouse/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 59 "data/maps/PAHouse/scripts.pory"
	delay 40
# 60 "data/maps/PAHouse/scripts.pory"
	waitmoncry
# 61 "data/maps/PAHouse/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 35, ITEM_ORAN_BERRY
# 62 "data/maps/PAHouse/scripts.pory"
	dowildbattle
# 63 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne PAHome_Battle_Beedrills_2
	return

PAHome_Battle_Beedrills_2:
# 65 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Complete
	return


PAHome_Hide_Beedrills::
# 72 "data/maps/PAHouse/scripts.pory"
	removeobject 2
# 73 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 74 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEEDRILL_DISAPPEARED
# 75 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_PLAYER_KICKED_BALL
	return


PAHome_Battle_Complete::
# 79 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/PAHouse/scripts.pory"
	call PAHome_Hide_Beedrills
# 81 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 82 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEE_BATTLE
# 83 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/PAHouse/scripts.pory"
	waitmessage
	return


PAHome_Sign::
# 89 "data/maps/PAHouse/scripts.pory"
	lock
# 90 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Sign_Text_0, MSGBOX_SIGN
# 91 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 92 "data/maps/PAHouse/scripts.pory"
	release
	end


# 96 "data/maps/PAHouse/scripts.pory"
Porcubro:
# 97 "data/maps/PAHouse/scripts.pory"
	face_player
# 98 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Porcubro::
# 102 "data/maps/PAHouse/scripts.pory"
	lock
# 103 "data/maps/PAHouse/scripts.pory"
	applymovement 7, Porcubro
# 104 "data/maps/PAHouse/scripts.pory"
	waitmovement 7
# 105 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Porcubro_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 107 "data/maps/PAHouse/scripts.pory"
	release
	end


PAHome_Lake_Sign::
# 112 "data/maps/PAHouse/scripts.pory"
	lock
# 113 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Lake_Sign_Text_0, MSGBOX_SIGN
# 114 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 115 "data/maps/PAHouse/scripts.pory"
	release
	end


PAHome_Battle_Billy::
# 126 "data/maps/PAHouse/scripts.pory"
	trainerbattle_single TRAINER_MK_BILLY, PAHome_Battle_Billy_Text_0, PAHome_Battle_Billy_Text_1
	end


PAHome_Player_Kicked_Ball_Text_0:
# 14 "data/maps/PAHouse/scripts.pory"
	.string "You kicked the ball.....$"

PAHome_Beedrill_Triggers_Text_0:
# 50 "data/maps/PAHouse/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

PAHome_Battle_Complete_Text_0:
# 83 "data/maps/PAHouse/scripts.pory"
	.string "The Beedrills have disappeared!$"

PAHome_Sign_Text_0:
# 90 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the PA House!$"

PAHome_Porcubro_Text_0:
# 105 "data/maps/PAHouse/scripts.pory"
	.string "Porcubro is always here to chill!$"

PAHome_Lake_Sign_Text_0:
# 113 "data/maps/PAHouse/scripts.pory"
	.string "Head to the lake!$"

PAHome_Battle_Billy_Text_0:
# 126 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the house..\nLet's battle.$"

PAHome_Battle_Billy_Text_1:
# 126 "data/maps/PAHouse/scripts.pory"
	.string "Damn I got bodied.. $"

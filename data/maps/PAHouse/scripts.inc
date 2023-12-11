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
	delay_2
# 39 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 40 "data/maps/PAHouse/scripts.pory"
	delay_1
# 41 "data/maps/PAHouse/scripts.pory"
	face_original_direction
# 42 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Beedrill_Triggers::
# 46 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 48 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 49 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 50 "data/maps/PAHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PAHome_Player_SeesBees_Movement
# 51 "data/maps/PAHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 52 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 54 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Beedrills
	return


PAHome_Battle_Beedrills::
# 58 "data/maps/PAHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_NONE
# 59 "data/maps/PAHouse/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 60 "data/maps/PAHouse/scripts.pory"
	delay 40
# 61 "data/maps/PAHouse/scripts.pory"
	waitmoncry
# 62 "data/maps/PAHouse/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 15, ITEM_FULL_RESTORE
# 63 "data/maps/PAHouse/scripts.pory"
	dowildbattle
# 64 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne PAHome_Battle_Beedrills_2
	return

PAHome_Battle_Beedrills_2:
# 66 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Complete
	return


PAHome_Hide_Beedrills::
# 73 "data/maps/PAHouse/scripts.pory"
	removeobject 2
# 74 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 75 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEEDRILL_DISAPPEARED
# 76 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_PLAYER_KICKED_BALL
	return


PAHome_Battle_Complete::
# 80 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/PAHouse/scripts.pory"
	call PAHome_Hide_Beedrills
# 82 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEE_BATTLE
# 84 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/PAHouse/scripts.pory"
	waitmessage
	return


PAHome_Sign::
# 90 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Sign_Text_0, MSGBOX_SIGN
	return


# 94 "data/maps/PAHouse/scripts.pory"
Porcubro:
# 95 "data/maps/PAHouse/scripts.pory"
	face_player
# 96 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Porcubro::
# 100 "data/maps/PAHouse/scripts.pory"
	applymovement 7, Porcubro
# 101 "data/maps/PAHouse/scripts.pory"
	waitmovement 7
# 102 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Porcubro_Text_0, MSGBOX_DEFAULT
	return


PAHome_Player_Kicked_Ball_Text_0:
# 14 "data/maps/PAHouse/scripts.pory"
	.string "You kicked the ball.....$"

PAHome_Beedrill_Triggers_Text_0:
# 52 "data/maps/PAHouse/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

PAHome_Battle_Complete_Text_0:
# 84 "data/maps/PAHouse/scripts.pory"
	.string "The Beedrills have disappeared!$"

PAHome_Sign_Text_0:
# 90 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the PA House!$"

PAHome_Porcubro_Text_0:
# 102 "data/maps/PAHouse/scripts.pory"
	.string "Porcubro is always here to chill!$"

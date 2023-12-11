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
	walk_faster_down
# 24 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 24 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 24 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 24 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 24 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 25 "data/maps/PAHouse/scripts.pory"
	unlock_anim
# 26 "data/maps/PAHouse/scripts.pory"
	set_visible
# 27 "data/maps/PAHouse/scripts.pory"
	step_end

# 30 "data/maps/PAHouse/scripts.pory"
PAHome_Player_SeesBees_Movement:
# 31 "data/maps/PAHouse/scripts.pory"
	emote_exclamation_mark
# 32 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 33 "data/maps/PAHouse/scripts.pory"
	delay_1
# 34 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 35 "data/maps/PAHouse/scripts.pory"
	delay_2
# 36 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 37 "data/maps/PAHouse/scripts.pory"
	delay_2
# 38 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 39 "data/maps/PAHouse/scripts.pory"
	delay_2
# 40 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 41 "data/maps/PAHouse/scripts.pory"
	delay_1
# 42 "data/maps/PAHouse/scripts.pory"
	face_original_direction
# 43 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Beedrill_Triggers::
# 47 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 49 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 50 "data/maps/PAHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_NONE
# 51 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 52 "data/maps/PAHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PAHome_Player_SeesBees_Movement
# 53 "data/maps/PAHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 54 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 56 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Beedrills
	return


PAHome_Battle_Beedrills::
# 60 "data/maps/PAHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_NONE
# 61 "data/maps/PAHouse/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 62 "data/maps/PAHouse/scripts.pory"
	delay 40
# 63 "data/maps/PAHouse/scripts.pory"
	waitmoncry
# 64 "data/maps/PAHouse/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 15, ITEM_FULL_RESTORE
# 65 "data/maps/PAHouse/scripts.pory"
	dowildbattle
# 66 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne PAHome_Battle_Beedrills_2
	return

PAHome_Battle_Beedrills_2:
# 68 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Complete
	return


PAHome_Hide_Beedrills::
# 75 "data/maps/PAHouse/scripts.pory"
	removeobject 2
# 76 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 77 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEEDRILL_DISAPPEARED
# 78 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_PLAYER_KICKED_BALL
	return


PAHome_Battle_Complete::
# 82 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/PAHouse/scripts.pory"
	call PAHome_Hide_Beedrills
# 84 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEE_BATTLE
# 86 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/PAHouse/scripts.pory"
	waitmessage
	return


PAHome_Sign::
# 92 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Sign_Text_0, MSGBOX_SIGN
	return


# 96 "data/maps/PAHouse/scripts.pory"
Porcubro:
# 97 "data/maps/PAHouse/scripts.pory"
	face_player
# 98 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Porcubro::
# 102 "data/maps/PAHouse/scripts.pory"
	applymovement 7, Porcubro
# 103 "data/maps/PAHouse/scripts.pory"
	waitmovement 7
# 104 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Porcubro_Text_0, MSGBOX_DEFAULT
	return


PAHome_Player_Kicked_Ball_Text_0:
# 14 "data/maps/PAHouse/scripts.pory"
	.string "You kicked the ball.....$"

PAHome_Beedrill_Triggers_Text_0:
# 54 "data/maps/PAHouse/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

PAHome_Battle_Complete_Text_0:
# 86 "data/maps/PAHouse/scripts.pory"
	.string "The Beedrills have disappeared!$"

PAHome_Sign_Text_0:
# 92 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the PA House!$"

PAHome_Porcubro_Text_0:
# 104 "data/maps/PAHouse/scripts.pory"
	.string "Porcubro is always here to chill!$"

PAHouse_MapScripts::
	.byte 0


PAHome_Player_Kicked_Ball::
# 9 "data/maps/PAHouse/scripts.pory"
	goto_if_set FLAG_PA_HOME_BEE_BATTLE, PAHome_Player_Kicked_Ball_2
# 12 "data/maps/PAHouse/scripts.pory"
	lock
# 13 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Player_Kicked_Ball_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 15 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 16 "data/maps/PAHouse/scripts.pory"
	call PAHome_Beedrill_Triggers
# 17 "data/maps/PAHouse/scripts.pory"
	release
	end

PAHome_Player_Kicked_Ball_2:
	return


# 21 "data/maps/PAHouse/scripts.pory"
PAHome_Beedrill_Movement:
# 22 "data/maps/PAHouse/scripts.pory"
	lock_anim
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 23 "data/maps/PAHouse/scripts.pory"
	walk_faster_down
# 24 "data/maps/PAHouse/scripts.pory"
	unlock_anim
# 25 "data/maps/PAHouse/scripts.pory"
	step_end

# 28 "data/maps/PAHouse/scripts.pory"
PAHome_Player_SeesBees_Movement:
# 29 "data/maps/PAHouse/scripts.pory"
	emote_exclamation_mark
# 30 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 31 "data/maps/PAHouse/scripts.pory"
	delay_1
# 32 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 33 "data/maps/PAHouse/scripts.pory"
	delay_2
# 34 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 35 "data/maps/PAHouse/scripts.pory"
	delay_2
# 36 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 37 "data/maps/PAHouse/scripts.pory"
	delay_2
# 38 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 39 "data/maps/PAHouse/scripts.pory"
	delay_1
# 40 "data/maps/PAHouse/scripts.pory"
	face_original_direction
# 41 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Beedrill_Triggers::
# 45 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 47 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 48 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data/maps/PAHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PAHome_Player_SeesBees_Movement
# 50 "data/maps/PAHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 51 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 53 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Beedrills
	return


PAHome_Battle_Beedrills::
# 57 "data/maps/PAHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_NONE
# 58 "data/maps/PAHouse/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 59 "data/maps/PAHouse/scripts.pory"
	delay 40
# 60 "data/maps/PAHouse/scripts.pory"
	waitmoncry
# 61 "data/maps/PAHouse/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 15, ITEM_FULL_RESTORE
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
	msgbox PAHome_Sign_Text_0, MSGBOX_SIGN
	return


PAHome_Player_Kicked_Ball_Text_0:
# 13 "data/maps/PAHouse/scripts.pory"
	.string "You kicked the ball.....$"

PAHome_Beedrill_Triggers_Text_0:
# 51 "data/maps/PAHouse/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

PAHome_Battle_Complete_Text_0:
# 83 "data/maps/PAHouse/scripts.pory"
	.string "The Beedrills have disappeared!$"

PAHome_Sign_Text_0:
# 89 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the PA House!$"

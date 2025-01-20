PAHouse_MapScripts::
# 8 "data/maps/PAHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PAHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PAHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/PAHouse/scripts.pory"
	setrespawn HEAL_LOCATION_PA_HOUSE
# 10 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_VISITED_PA_HOUSE
	return


PAHome_Player_Kicked_Ball::
# 16 "data/maps/PAHouse/scripts.pory"
	goto_if_set FLAG_PA_HOME_BEE_BATTLE, PAHome_Player_Kicked_Ball_2
# 19 "data/maps/PAHouse/scripts.pory"
	lock
# 20 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Player_Kicked_Ball_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 22 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 23 "data/maps/PAHouse/scripts.pory"
	call PAHome_Beedrill_Triggers
# 24 "data/maps/PAHouse/scripts.pory"
	release
	end

PAHome_Player_Kicked_Ball_2:
	return


# 28 "data/maps/PAHouse/scripts.pory"
PAHome_Beedrill_Movement:
# 29 "data/maps/PAHouse/scripts.pory"
	lock_anim
# 30 "data/maps/PAHouse/scripts.pory"
	set_visible
# 31 "data/maps/PAHouse/scripts.pory"
	unlock_anim
# 32 "data/maps/PAHouse/scripts.pory"
	step_end

# 35 "data/maps/PAHouse/scripts.pory"
PAHome_Player_SeesBees_Movement:
# 36 "data/maps/PAHouse/scripts.pory"
	emote_exclamation_mark
# 37 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 38 "data/maps/PAHouse/scripts.pory"
	delay_1
# 39 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 40 "data/maps/PAHouse/scripts.pory"
	delay_2
# 41 "data/maps/PAHouse/scripts.pory"
	jump_in_place_left
# 42 "data/maps/PAHouse/scripts.pory"
	delay_2
# 43 "data/maps/PAHouse/scripts.pory"
	jump_in_place_right
# 44 "data/maps/PAHouse/scripts.pory"
	delay_1
# 45 "data/maps/PAHouse/scripts.pory"
	face_original_direction
# 46 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Beedrill_Triggers::
# 50 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 52 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 53 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 54 "data/maps/PAHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PAHome_Player_SeesBees_Movement
# 55 "data/maps/PAHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 56 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 58 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Beedrills
	return


PAHome_Battle_Beedrills::
# 62 "data/maps/PAHouse/scripts.pory"
	applymovement 2, PAHome_Beedrill_Movement
# 63 "data/maps/PAHouse/scripts.pory"
	waitmovement 2
# 64 "data/maps/PAHouse/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 65 "data/maps/PAHouse/scripts.pory"
	delay 40
# 66 "data/maps/PAHouse/scripts.pory"
	waitmoncry
# 67 "data/maps/PAHouse/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 35, ITEM_ORAN_BERRY
# 68 "data/maps/PAHouse/scripts.pory"
	dowildbattle
# 69 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne PAHome_Battle_Beedrills_2
	return

PAHome_Battle_Beedrills_2:
# 71 "data/maps/PAHouse/scripts.pory"
	call PAHome_Battle_Complete
	return


PAHome_Hide_Beedrills::
# 78 "data/maps/PAHouse/scripts.pory"
	removeobject 2
# 79 "data/maps/PAHouse/scripts.pory"
	removeobject 1
# 80 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEEDRILL_DISAPPEARED
# 81 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_PLAYER_KICKED_BALL
	return


PAHome_Battle_Complete::
# 85 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/maps/PAHouse/scripts.pory"
	call PAHome_Hide_Beedrills
# 87 "data/maps/PAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_PA_HOME_BEE_BATTLE
# 89 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 90 "data/maps/PAHouse/scripts.pory"
	waitmessage
	return


PAHome_Sign::
# 95 "data/maps/PAHouse/scripts.pory"
	lock
# 96 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Sign_Text_0, MSGBOX_SIGN
# 97 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 98 "data/maps/PAHouse/scripts.pory"
	release
	end


# 102 "data/maps/PAHouse/scripts.pory"
Porcubro:
# 103 "data/maps/PAHouse/scripts.pory"
	face_player
# 104 "data/maps/PAHouse/scripts.pory"
	step_end

PAHome_Porcubro::
# 108 "data/maps/PAHouse/scripts.pory"
	lock
# 109 "data/maps/PAHouse/scripts.pory"
	applymovement 7, Porcubro
# 110 "data/maps/PAHouse/scripts.pory"
	waitmovement 7
# 111 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Porcubro_Text_0, MSGBOX_DEFAULT
# 112 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 113 "data/maps/PAHouse/scripts.pory"
	release
	end


PAHome_Lake_Sign::
# 118 "data/maps/PAHouse/scripts.pory"
	lock
# 119 "data/maps/PAHouse/scripts.pory"
	msgbox PAHome_Lake_Sign_Text_0, MSGBOX_SIGN
# 120 "data/maps/PAHouse/scripts.pory"
	waitmessage
# 121 "data/maps/PAHouse/scripts.pory"
	release
	end


PAHome_Battle_Billy::
# 127 "data/maps/PAHouse/scripts.pory"
	trainerbattle_single TRAINER_MK_BILLY, PAHouse_Text_BillyIntro, PAHouse_Text_BillyDefeat
# 128 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 130 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PAHome_Battle_Billy_2
PAHome_Battle_Billy_1:
	end

PAHome_Battle_Billy_2:
# 131 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_BEAT_PA_BILLY
	goto PAHome_Battle_Billy_1


PAHome_Battle_Matt::
# 139 "data/maps/PAHouse/scripts.pory"
	trainerbattle_single TRAINER_MK_MATT, PAHouse_Text_MattIntro, PAHouse_Text_MattDefeat
# 141 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PAHome_Battle_Matt_2
PAHome_Battle_Matt_1:
	end

PAHome_Battle_Matt_2:
# 144 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_BEAT_PA_MATT
	goto PAHome_Battle_Matt_1


PAHome_Battle_Chunga::
# 151 "data/maps/PAHouse/scripts.pory"
	trainerbattle_single TRAINER_MK_CHUNGA, PAHouse_Text_ChungaIntro, PAHouse_Text_ChungaDefeat
# 153 "data/maps/PAHouse/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 155 "data/maps/PAHouse/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PAHome_Battle_Chunga_2
PAHome_Battle_Chunga_1:
	end

PAHome_Battle_Chunga_2:
# 156 "data/maps/PAHouse/scripts.pory"
	setflag FLAG_BEAT_PA_CHUNGA
	goto PAHome_Battle_Chunga_1


PAHome_Player_Kicked_Ball_Text_0:
# 20 "data/maps/PAHouse/scripts.pory"
	.string "You kicked the ball.....$"

PAHome_Beedrill_Triggers_Text_0:
# 56 "data/maps/PAHouse/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

PAHome_Battle_Complete_Text_0:
# 89 "data/maps/PAHouse/scripts.pory"
	.string "The Beedrills have disappeared!$"

PAHome_Sign_Text_0:
# 96 "data/maps/PAHouse/scripts.pory"
	.string "Welcome to the PA HOUSE!$"

PAHome_Porcubro_Text_0:
# 111 "data/maps/PAHouse/scripts.pory"
	.string "Porcubro is always here to chill!$"

PAHome_Lake_Sign_Text_0:
# 119 "data/maps/PAHouse/scripts.pory"
	.string "Head to the lake!$"

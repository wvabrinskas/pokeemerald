# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/Route102/scripts.pory"
	end
# 8 "data/maps/Route102/scripts.pory"

# 9 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 10 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"

# 13 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 15 "data/maps/Route102/scripts.pory"
	end
# 16 "data/maps/Route102/scripts.pory"

# 17 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 18 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 19 "data/maps/Route102/scripts.pory"
	end
# 20 "data/maps/Route102/scripts.pory"

# 21 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 22 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 23 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 25 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 26 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 27 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 28 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/Route102/scripts.pory"
	release
# 30 "data/maps/Route102/scripts.pory"
	end
# 31 "data/maps/Route102/scripts.pory"

# 32 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 33 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 34 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 36 "data/maps/Route102/scripts.pory"
	release
# 37 "data/maps/Route102/scripts.pory"
	end
# 38 "data/maps/Route102/scripts.pory"

# 39 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 40 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 41 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 42 "data/maps/Route102/scripts.pory"
	release
# 43 "data/maps/Route102/scripts.pory"
	end
# 44 "data/maps/Route102/scripts.pory"

# 45 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 46 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 47 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route102/scripts.pory"
	release
# 49 "data/maps/Route102/scripts.pory"
	end
# 50 "data/maps/Route102/scripts.pory"

# 51 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 52 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 53 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 54 "data/maps/Route102/scripts.pory"
	release
# 55 "data/maps/Route102/scripts.pory"
	end
# 56 "data/maps/Route102/scripts.pory"

# 57 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 58 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 59 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route102/scripts.pory"
	end
# 61 "data/maps/Route102/scripts.pory"

# 62 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 63 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 64 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route102/scripts.pory"
	end
# 66 "data/maps/Route102/scripts.pory"

# 67 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 68 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 69 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route102/scripts.pory"
	end
# 71 "data/maps/Route102/scripts.pory"

# 72 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 73 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 74 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route102/scripts.pory"
	end
# 76 "data/maps/Route102/scripts.pory"

# 77 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 78 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 79 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 80 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 81 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 82 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 83 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 84 "data/maps/Route102/scripts.pory"

# 85 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 86 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 87 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 88 "data/maps/Route102/scripts.pory"

# 89 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 90 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 91 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 92 "data/maps/Route102/scripts.pory"

# 93 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 94 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 95 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 96 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 97 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 98 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 99 "data/maps/Route102/scripts.pory"

# 100 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 101 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 102 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 103 "data/maps/Route102/scripts.pory"

# 104 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 105 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 106 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 107 "data/maps/Route102/scripts.pory"

# 108 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 109 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 110 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_Player_Kicked_Ball::
# 117 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_ROUTE_102_BEE_BATTLE, Route102_Player_Kicked_Ball_2
# 120 "data/maps/Route102/scripts.pory"
	lock
# 121 "data/maps/Route102/scripts.pory"
	msgbox Route102_Player_Kicked_Ball_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route102/scripts.pory"
	waitmessage
# 123 "data/maps/Route102/scripts.pory"
	removeobject 11
# 124 "data/maps/Route102/scripts.pory"
	call Route102_Beedrill_Triggers
# 125 "data/maps/Route102/scripts.pory"
	release
	end

Route102_Player_Kicked_Ball_2:
	return


# 129 "data/maps/Route102/scripts.pory"
Route102_Beedrill_Movement:
# 130 "data/maps/Route102/scripts.pory"
	lock_anim
# 131 "data/maps/Route102/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route102/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route102/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route102/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route102/scripts.pory"
	walk_faster_down
# 131 "data/maps/Route102/scripts.pory"
	walk_faster_down
# 132 "data/maps/Route102/scripts.pory"
	unlock_anim
# 133 "data/maps/Route102/scripts.pory"
	step_end

# 136 "data/maps/Route102/scripts.pory"
Route102_Player_SeesBees_Movement:
# 137 "data/maps/Route102/scripts.pory"
	emote_exclamation_mark
# 138 "data/maps/Route102/scripts.pory"
	jump_in_place_down
# 139 "data/maps/Route102/scripts.pory"
	delay_1
# 140 "data/maps/Route102/scripts.pory"
	player_run_down
# 141 "data/maps/Route102/scripts.pory"
	delay_2
# 142 "data/maps/Route102/scripts.pory"
	face_left
# 143 "data/maps/Route102/scripts.pory"
	player_run_up
# 144 "data/maps/Route102/scripts.pory"
	delay_2
# 145 "data/maps/Route102/scripts.pory"
	face_right
# 146 "data/maps/Route102/scripts.pory"
	player_run_down
# 147 "data/maps/Route102/scripts.pory"
	delay_2
# 148 "data/maps/Route102/scripts.pory"
	face_left
# 149 "data/maps/Route102/scripts.pory"
	player_run_up
# 150 "data/maps/Route102/scripts.pory"
	delay_1
# 151 "data/maps/Route102/scripts.pory"
	face_original_direction
# 152 "data/maps/Route102/scripts.pory"
	step_end

Route102_Beedrill_Triggers::
# 156 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/Route102/scripts.pory"
	applymovement 10, Route102_Beedrill_Movement
# 158 "data/maps/Route102/scripts.pory"
	waitmovement 10
# 159 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 160 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Player_SeesBees_Movement
# 161 "data/maps/Route102/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 162 "data/maps/Route102/scripts.pory"
	msgbox Route102_Beedrill_Triggers_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route102/scripts.pory"
	waitmessage
# 164 "data/maps/Route102/scripts.pory"
	call Route102_Battle_Beedrills
	return


Route102_Battle_Beedrills::
# 168 "data/maps/Route102/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_NONE
# 169 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 170 "data/maps/Route102/scripts.pory"
	delay 40
# 171 "data/maps/Route102/scripts.pory"
	waitmoncry
# 172 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 15, ITEM_FULL_RESTORE
# 173 "data/maps/Route102/scripts.pory"
	dowildbattle
# 174 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 175 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne Route102_Battle_Beedrills_2
	return

Route102_Battle_Beedrills_2:
# 176 "data/maps/Route102/scripts.pory"
	call Route102_Battle_Complete
	return


Route102_Hide_Beedrills::
# 183 "data/maps/Route102/scripts.pory"
	removeobject 10
# 184 "data/maps/Route102/scripts.pory"
	removeobject 11
# 185 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE_102_BEEDRILL_DISAPPEARED
# 186 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE_102_PLAYER_KICKED_BALL
	return


Route102_Battle_Complete::
# 190 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/Route102/scripts.pory"
	call Route102_Hide_Beedrills
# 192 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 193 "data/maps/Route102/scripts.pory"
	setflag FLAG_ROUTE_102_BEE_BATTLE
# 194 "data/maps/Route102/scripts.pory"
	msgbox Route102_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route102/scripts.pory"
	waitmessage
	return


Route102_Player_Kicked_Ball_Text_0:
# 121 "data/maps/Route102/scripts.pory"
	.string "You kicked the ball.....$"

Route102_Beedrill_Triggers_Text_0:
# 162 "data/maps/Route102/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

Route102_Battle_Complete_Text_0:
# 194 "data/maps/Route102/scripts.pory"
	.string "The Beedrills have disappeared!$"

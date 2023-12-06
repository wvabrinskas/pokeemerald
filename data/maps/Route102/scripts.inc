# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route102_On_Resume
# 4 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_On_Transition
# 5 "data/maps/Route102/scripts.pory"
	.byte 0
# 6 "data/maps/Route102/scripts.pory"

# 7 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 8 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 9 "data/maps/Route102/scripts.pory"
	end
# 10 "data/maps/Route102/scripts.pory"

# 11 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 12 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 13 "data/maps/Route102/scripts.pory"
	end
# 14 "data/maps/Route102/scripts.pory"

# 15 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 16 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 17 "data/maps/Route102/scripts.pory"
	end
# 18 "data/maps/Route102/scripts.pory"

# 19 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 20 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 21 "data/maps/Route102/scripts.pory"
	end
# 22 "data/maps/Route102/scripts.pory"

# 23 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 24 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 25 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 26 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 27 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 28 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 29 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 30 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 31 "data/maps/Route102/scripts.pory"
	release
# 32 "data/maps/Route102/scripts.pory"
	end
# 33 "data/maps/Route102/scripts.pory"

# 34 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 35 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 36 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 38 "data/maps/Route102/scripts.pory"
	release
# 39 "data/maps/Route102/scripts.pory"
	end
# 40 "data/maps/Route102/scripts.pory"

# 41 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 42 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 43 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 44 "data/maps/Route102/scripts.pory"
	release
# 45 "data/maps/Route102/scripts.pory"
	end
# 46 "data/maps/Route102/scripts.pory"

# 47 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 48 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 49 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/Route102/scripts.pory"
	release
# 51 "data/maps/Route102/scripts.pory"
	end
# 52 "data/maps/Route102/scripts.pory"

# 53 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 54 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 55 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 56 "data/maps/Route102/scripts.pory"
	release
# 57 "data/maps/Route102/scripts.pory"
	end
# 58 "data/maps/Route102/scripts.pory"

# 59 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 60 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 61 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route102/scripts.pory"
	end
# 63 "data/maps/Route102/scripts.pory"

# 64 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 65 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 66 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route102/scripts.pory"
	end
# 68 "data/maps/Route102/scripts.pory"

# 69 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 70 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 71 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route102/scripts.pory"
	end
# 73 "data/maps/Route102/scripts.pory"

# 74 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 75 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 76 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/Route102/scripts.pory"
	end
# 78 "data/maps/Route102/scripts.pory"

# 79 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 80 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 81 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 82 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 83 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 84 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 85 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 86 "data/maps/Route102/scripts.pory"

# 87 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 88 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 89 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 90 "data/maps/Route102/scripts.pory"

# 91 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 92 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 93 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 94 "data/maps/Route102/scripts.pory"

# 95 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 96 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 97 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 98 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 99 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 100 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 101 "data/maps/Route102/scripts.pory"

# 102 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 103 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 104 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 105 "data/maps/Route102/scripts.pory"

# 106 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 107 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 108 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 109 "data/maps/Route102/scripts.pory"

# 110 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 111 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 112 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_Player_Kicked_Ball::
# 118 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_ROUTE_102_BEE_BATTLE, Route102_Player_Kicked_Ball_2
# 121 "data/maps/Route102/scripts.pory"
	lock
# 122 "data/maps/Route102/scripts.pory"
	msgbox Route102_Player_Kicked_Ball_Text_0, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route102/scripts.pory"
	waitmessage
# 124 "data/maps/Route102/scripts.pory"
	call Route102_Beedrill_Triggers
# 125 "data/maps/Route102/scripts.pory"
	release
	end

Route102_Player_Kicked_Ball_2:
	return


Route102_On_Resume::
# 130 "data/maps/Route102/scripts.pory"
	hideobjectat 10, MAP_ROUTE102
	return


Route102_On_Transition::
# 134 "data/maps/Route102/scripts.pory"
	hideobjectat 10, MAP_ROUTE102
	return


Route102_Beedrill_Triggers::
# 142 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 143 "data/maps/Route102/scripts.pory"
	showobjectat 10, MAP_ROUTE102
# 144 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/Route102/scripts.pory"
	msgbox Route102_Beedrill_Triggers_Text_0
# 146 "data/maps/Route102/scripts.pory"
	call Route102_Battle_Beedrills
	return


Route102_Battle_Beedrills::
# 150 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 151 "data/maps/Route102/scripts.pory"
	delay 40
# 152 "data/maps/Route102/scripts.pory"
	waitmoncry
# 153 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 15, ITEM_FULL_RESTORE
# 154 "data/maps/Route102/scripts.pory"
	dowildbattle
# 155 "data/maps/Route102/scripts.pory"
	call Route102_Battle_Complete
	return


Route102_Hide_Beedrills::
# 159 "data/maps/Route102/scripts.pory"
	removeobject 10
# 160 "data/maps/Route102/scripts.pory"
	removeobject 11
	return


Route102_Battle_Complete::
# 166 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/Route102/scripts.pory"
	call Route102_Hide_Beedrills
# 168 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 170 "data/maps/Route102/scripts.pory"
	msgbox Route102_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route102/scripts.pory"
	waitmessage
	return


Route102_Player_Kicked_Ball_Text_0:
# 122 "data/maps/Route102/scripts.pory"
	.string "You kicked the ball.....$"

Route102_Beedrill_Triggers_Text_0:
# 145 "data/maps/Route102/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

Route102_Battle_Complete_Text_0:
# 170 "data/maps/Route102/scripts.pory"
	.string "The Beedrills have disappeared!$"

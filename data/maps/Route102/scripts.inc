# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route102_On_Resume
# 4 "data/maps/Route102/scripts.pory"
	.byte 0
# 5 "data/maps/Route102/scripts.pory"

# 6 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 7 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 8 "data/maps/Route102/scripts.pory"
	end
# 9 "data/maps/Route102/scripts.pory"

# 10 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 11 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 12 "data/maps/Route102/scripts.pory"
	end
# 13 "data/maps/Route102/scripts.pory"

# 14 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 15 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 16 "data/maps/Route102/scripts.pory"
	end
# 17 "data/maps/Route102/scripts.pory"

# 18 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 19 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 20 "data/maps/Route102/scripts.pory"
	end
# 21 "data/maps/Route102/scripts.pory"

# 22 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 23 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 24 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 25 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 26 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 27 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 28 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 29 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 30 "data/maps/Route102/scripts.pory"
	release
# 31 "data/maps/Route102/scripts.pory"
	end
# 32 "data/maps/Route102/scripts.pory"

# 33 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 34 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 35 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 37 "data/maps/Route102/scripts.pory"
	release
# 38 "data/maps/Route102/scripts.pory"
	end
# 39 "data/maps/Route102/scripts.pory"

# 40 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 41 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 42 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 43 "data/maps/Route102/scripts.pory"
	release
# 44 "data/maps/Route102/scripts.pory"
	end
# 45 "data/maps/Route102/scripts.pory"

# 46 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 47 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 48 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 49 "data/maps/Route102/scripts.pory"
	release
# 50 "data/maps/Route102/scripts.pory"
	end
# 51 "data/maps/Route102/scripts.pory"

# 52 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 53 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 54 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 55 "data/maps/Route102/scripts.pory"
	release
# 56 "data/maps/Route102/scripts.pory"
	end
# 57 "data/maps/Route102/scripts.pory"

# 58 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 59 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route102/scripts.pory"
	end
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 64 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 65 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route102/scripts.pory"
	end
# 67 "data/maps/Route102/scripts.pory"

# 68 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 69 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 70 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route102/scripts.pory"
	end
# 72 "data/maps/Route102/scripts.pory"

# 73 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 74 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 75 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route102/scripts.pory"
	end
# 77 "data/maps/Route102/scripts.pory"

# 78 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 79 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 80 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 81 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 82 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 83 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 84 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 87 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 88 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 89 "data/maps/Route102/scripts.pory"

# 90 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 91 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 92 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 93 "data/maps/Route102/scripts.pory"

# 94 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 95 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 96 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 97 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 98 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 99 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 100 "data/maps/Route102/scripts.pory"

# 101 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 102 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 103 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 104 "data/maps/Route102/scripts.pory"

# 105 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 106 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 107 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 108 "data/maps/Route102/scripts.pory"

# 109 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 110 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 111 "data/maps/Route102/scripts.pory"
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
	call Route102_Beedrill_Triggers
# 124 "data/maps/Route102/scripts.pory"
	release
	end

Route102_Player_Kicked_Ball_2:
	return


Route102_On_Resume::
# 129 "data/maps/Route102/scripts.pory"
	removeobject 10
	return


Route102_Beedrill_Triggers::
# 137 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/Route102/scripts.pory"
	showobjectat 10, MAP_ROUTE102
# 139 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 140 "data/maps/Route102/scripts.pory"
	msgbox Route102_Beedrill_Triggers_Text_0
# 141 "data/maps/Route102/scripts.pory"
	call Route102_Battle_Beedrills
	return


Route102_Battle_Beedrills::
# 145 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
# 146 "data/maps/Route102/scripts.pory"
	delay 40
# 147 "data/maps/Route102/scripts.pory"
	waitmoncry
# 148 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_BEEDRILL, 15, ITEM_FULL_RESTORE
# 149 "data/maps/Route102/scripts.pory"
	dowildbattle
# 150 "data/maps/Route102/scripts.pory"
	call Route102_Battle_Complete
	return


Route102_Hide_Beedrills::
# 154 "data/maps/Route102/scripts.pory"
	removeobject 10
# 155 "data/maps/Route102/scripts.pory"
	removeobject 11
	return


Route102_Battle_Complete::
# 161 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data/maps/Route102/scripts.pory"
	call Route102_Hide_Beedrills
# 163 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data/maps/Route102/scripts.pory"
	msgbox Route102_Battle_Complete_Text_0, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route102/scripts.pory"
	waitmessage
	return


Route102_Player_Kicked_Ball_Text_0:
# 121 "data/maps/Route102/scripts.pory"
	.string "You kicked the ball.....$"

Route102_Beedrill_Triggers_Text_0:
# 140 "data/maps/Route102/scripts.pory"
	.string "BEEEEEEEESSSSSSSSSSSSSSSSSSSSSS!$"

Route102_Battle_Complete_Text_0:
# 165 "data/maps/Route102/scripts.pory"
	.string "The Beedrills have disappeared!$"

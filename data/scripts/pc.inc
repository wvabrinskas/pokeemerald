# 1 "data/scripts/pc.pory"

# 2 "data/scripts/pc.pory"
EventScript_PCFromStartMenu::
# 3 "data/scripts/pc.pory"
	lockall
# 4 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_MENU
# 5 "data/scripts/pc.pory"
	playse SE_PC_ON
# 6 "data/scripts/pc.pory"
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
# 7 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 8 "data/scripts/pc.pory"
	end
# 9 "data/scripts/pc.pory"

# 10 "data/scripts/pc.pory"
EventScript_PC::
# 11 "data/scripts/pc.pory"
	lockall
# 12 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 13 "data/scripts/pc.pory"
	special DoPCTurnOnEffect
# 14 "data/scripts/pc.pory"
	playse SE_PC_ON
# 15 "data/scripts/pc.pory"
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
# 16 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 17 "data/scripts/pc.pory"
	end
# 18 "data/scripts/pc.pory"

# 19 "data/scripts/pc.pory"
EventScript_PCMainMenu::
# 20 "data/scripts/pc.pory"
	message gText_WhichPCShouldBeAccessed
# 21 "data/scripts/pc.pory"
	waitmessage
# 22 "data/scripts/pc.pory"
	special ScriptMenu_CreatePCMultichoice
# 23 "data/scripts/pc.pory"
	waitstate
# 24 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 25 "data/scripts/pc.pory"
	end
# 26 "data/scripts/pc.pory"

# 27 "data/scripts/pc.pory"
EventScript_AccessPC::
# 28 "data/scripts/pc.pory"
	switch VAR_RESULT
# 29 "data/scripts/pc.pory"
	case 0, EventScript_AccessPokemonStorage
# 30 "data/scripts/pc.pory"
	case 1, EventScript_AccessPlayersPC
# 31 "data/scripts/pc.pory"
	case 2, EventScript_AccessHallOfFame
# 32 "data/scripts/pc.pory"
	case 3, EventScript_TurnOffPC
# 33 "data/scripts/pc.pory"
	case MULTI_B_PRESSED, EventScript_TurnOffPC
# 34 "data/scripts/pc.pory"
	end
# 35 "data/scripts/pc.pory"

# 36 "data/scripts/pc.pory"
EventScript_AccessPlayersPC::
# 37 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 38 "data/scripts/pc.pory"
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
# 39 "data/scripts/pc.pory"
	special PlayerPC
# 40 "data/scripts/pc.pory"
	waitstate
# 41 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 42 "data/scripts/pc.pory"
	end
# 43 "data/scripts/pc.pory"

# 44 "data/scripts/pc.pory"
EventScript_AccessPokemonStorage::
# 45 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 46 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
# 47 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
# 48 "data/scripts/pc.pory"
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
# 49 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 50 "data/scripts/pc.pory"
	waitstate
# 51 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
# 52 "data/scripts/pc.pory"
	end
# 53 "data/scripts/pc.pory"

# 54 "data/scripts/pc.pory"
EventScript_AccessSomeonesPC::
# 55 "data/scripts/pc.pory"
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
# 56 "data/scripts/pc.pory"
	return
# 57 "data/scripts/pc.pory"

# 58 "data/scripts/pc.pory"
EventScript_AccessLanettesPC::
# 59 "data/scripts/pc.pory"
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
# 60 "data/scripts/pc.pory"
	return
# 61 "data/scripts/pc.pory"

# 62 "data/scripts/pc.pory"
EventScript_AnimatePcOff:
# 63 "data/scripts/pc.pory"
	special DoPCTurnOffEffect
# 64 "data/scripts/pc.pory"
	return
# 65 "data/scripts/pc.pory"

# 66 "data/scripts/pc.pory"
EventScript_AccessHallOfFame::
# 67 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
# 68 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 69 "data/scripts/pc.pory"
	special AccessHallOfFamePC
# 70 "data/scripts/pc.pory"
	waitstate
# 71 "data/scripts/pc.pory"
	goto EventScript_AccessPC
# 72 "data/scripts/pc.pory"
	end

EventScript_TurnOffPC::
# 76 "data/scripts/pc.pory"
	compare VAR_0x8004, PC_LOCATION_MENU
	goto_if_ne EventScript_TurnOffPC_2
EventScript_TurnOffPC_1:
# 79 "data/scripts/pc.pory"
	setvar VAR_0x8004, PC_LOCATION_OTHER
# 80 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 81 "data/scripts/pc.pory"
	releaseall
	end

EventScript_TurnOffPC_2:
# 77 "data/scripts/pc.pory"
	special DoPCTurnOffEffect
	goto EventScript_TurnOffPC_1


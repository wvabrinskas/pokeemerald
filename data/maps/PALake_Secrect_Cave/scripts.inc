PALake_Secrect_Cave_MapScripts::
# 2 "data/maps/PALake_Secrect_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PALake_Secrect_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PALake_Secrect_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PALake_Secrect_Cave/scripts.pory"
	goto_if_set FLAG_PA_LAKE_GOT_HARVEY_TEETH, PALake_Secrect_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

PALake_Secrect_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/PALake_Secrect_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


PALake_Secret_Cave_trigger::
# 12 "data/maps/PALake_Secrect_Cave/scripts.pory"
	goto_if_set FLAG_PA_LAKE_GOT_HARVEY_TEETH, PALake_Secret_Cave_trigger_2
# 17 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq PALake_Secret_Cave_trigger_5
# 20 "data/maps/PALake_Secrect_Cave/scripts.pory"
	lockall
# 21 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/PALake_Secrect_Cave/scripts.pory"
	releaseall
# 24 "data/maps/PALake_Secrect_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

PALake_Secret_Cave_trigger_2:
# 13 "data/maps/PALake_Secrect_Cave/scripts.pory"
	releaseall
	return

PALake_Secret_Cave_trigger_5:
	return


PALake_Secret_Cave_OptionA::
# 29 "data/maps/PALake_Secrect_Cave/scripts.pory"
	goto_if_set FLAG_PA_LAKE_GOT_HARVEY_TEETH, PALake_Secret_Cave_OptionA_2
# 33 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Wall_Text, MSGBOX_YESNO
# 34 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PALake_Secret_Cave_OptionA_4
# 37 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_OptionA_2:
	return

PALake_Secret_Cave_OptionA_4:
# 35 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Incorrect_Text, MSGBOX_AUTOCLOSE
	return


PALake_Secret_Cave_OptionB::
# 43 "data/maps/PALake_Secrect_Cave/scripts.pory"
	goto_if_set FLAG_PA_LAKE_GOT_HARVEY_TEETH, PALake_Secret_Cave_OptionB_2
# 47 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Wall_Text, MSGBOX_YESNO
# 48 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PALake_Secret_Cave_OptionB_4
# 51 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_OptionB_2:
	return

PALake_Secret_Cave_OptionB_4:
# 49 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Incorrect_Text, MSGBOX_AUTOCLOSE
	return


PALake_Secret_Cave_OptionC::
# 58 "data/maps/PALake_Secrect_Cave/scripts.pory"
	goto_if_set FLAG_PA_LAKE_GOT_HARVEY_TEETH, PALake_Secret_Cave_OptionC_2
# 62 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Wall_Text, MSGBOX_YESNO
# 63 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PALake_Secret_Cave_OptionC_4
# 67 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_OptionC_2:
	return

PALake_Secret_Cave_OptionC_4:
# 64 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Correct_Text, MSGBOX_AUTOCLOSE
# 65 "data/maps/PALake_Secrect_Cave/scripts.pory"
	call PALake_Secret_Cave_Give_Item
	return


PALake_Secret_Cave_Give_Item::
# 72 "data/maps/PALake_Secrect_Cave/scripts.pory"
	goto_if_set FLAG_PA_LAKE_GOT_HARVEY_TEETH, PALake_Secret_Cave_Give_Item_2
# 76 "data/maps/PALake_Secrect_Cave/scripts.pory"
	setflag FLAG_PA_LAKE_GOT_HARVEY_TEETH
# 78 "data/maps/PALake_Secrect_Cave/scripts.pory"
	giveitem ITEM_HARVEY_TEETH, 1
# 79 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_Give_Item_2:
	return


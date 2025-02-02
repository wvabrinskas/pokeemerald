PALake_Secrect_Cave_MapScripts::
	.byte 0


PALake_Secret_Cave_trigger::
# 4 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq PALake_Secret_Cave_trigger_2
# 7 "data/maps/PALake_Secrect_Cave/scripts.pory"
	lockall
# 8 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Text_1, MSGBOX_AUTOCLOSE
# 9 "data/maps/PALake_Secrect_Cave/scripts.pory"
	releaseall
# 10 "data/maps/PALake_Secrect_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

PALake_Secret_Cave_trigger_2:
	return


PALake_Secret_Cave_OptionA::
# 15 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Wall_Text, MSGBOX_YESNO
# 16 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PALake_Secret_Cave_OptionA_1
# 19 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_OptionA_1:
# 17 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Incorrect_Text, MSGBOX_NPC
	return


PALake_Secret_Cave_OptionB::
# 24 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Wall_Text, MSGBOX_YESNO
# 25 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PALake_Secret_Cave_OptionB_1
# 28 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_OptionB_1:
# 26 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Incorrect_Text, MSGBOX_NPC
	return


PALake_Secret_Cave_OptionC::
# 34 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Wall_Text, MSGBOX_YESNO
# 35 "data/maps/PALake_Secrect_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PALake_Secret_Cave_OptionC_1
# 39 "data/maps/PALake_Secrect_Cave/scripts.pory"
	closemessage
	return

PALake_Secret_Cave_OptionC_1:
# 36 "data/maps/PALake_Secrect_Cave/scripts.pory"
	msgbox PALake_Secret_Cave_Correct_Text, MSGBOX_NPC
# 37 "data/maps/PALake_Secrect_Cave/scripts.pory"
	call PALake_Secret_Cave_Give_Item
	return


PALake_Secret_Cave_Give_Item::
# 44 "data/maps/PALake_Secrect_Cave/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 10
	return


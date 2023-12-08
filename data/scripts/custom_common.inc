# 1 "data/scripts/custom_common.pory"

# 2 "data/scripts/custom_common.pory"
Common_EventScript_Luke::
# 3 "data/scripts/custom_common.pory"
	call_if_unset FLAG_MET_LUKE EventScript_LukeFirstMet
# 4 "data/scripts/custom_common.pory"
	return
# 5 "data/scripts/custom_common.pory"

# 6 "data/scripts/custom_common.pory"

# 7 "data/scripts/custom_common.pory"
EventScript_LukeFirstMet:
# 8 "data/scripts/custom_common.pory"
	msgbox gText_Luke_MetFirstTime, MSGBOX_DEFAULT
# 9 "data/scripts/custom_common.pory"
	setflag FLAG_MET_LUKE
# 10 "data/scripts/custom_common.pory"
	return

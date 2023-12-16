IndoorPAHouse_MapScripts::
	.byte 0


IndoorPAHouse_TV::
# 4 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 5 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_TV_Text_0, MSGBOX_SIGN
# 6 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
# 7 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end


IndoorPAHouse_Refrigerator::
# 12 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 13 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Refrigerator_Text_0, MSGBOX_SIGN
# 14 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
# 15 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end


IndoorPAHouse_Bathroom::
# 20 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 21 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Bathroom_Text_0, MSGBOX_SIGN
# 22 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
# 23 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end


IndoorPAHouse_Heal::
# 31 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 32 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_0, MSGBOX_YESNO
# 33 "data/maps/IndoorPAHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IndoorPAHouse_Heal_2
# 41 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_2
IndoorPAHouse_Heal_1:
# 43 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end

IndoorPAHouse_Heal_2:
# 34 "data/maps/IndoorPAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/IndoorPAHouse/scripts.pory"
	playbgm MUS_HEAL, FALSE
# 36 "data/maps/IndoorPAHouse/scripts.pory"
	special HealPlayerParty
# 37 "data/maps/IndoorPAHouse/scripts.pory"
	delay 40
# 38 "data/maps/IndoorPAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_1
	goto IndoorPAHouse_Heal_1


IndoorPAHouse_Heal_30::
# 48 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 49 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_0, MSGBOX_YESNO
# 50 "data/maps/IndoorPAHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IndoorPAHouse_Heal_30_2
# 58 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_2
IndoorPAHouse_Heal_30_1:
# 60 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end

IndoorPAHouse_Heal_30_2:
# 51 "data/maps/IndoorPAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/maps/IndoorPAHouse/scripts.pory"
	playbgm MUS_HEAL, FALSE
# 53 "data/maps/IndoorPAHouse/scripts.pory"
	special HealPlayerParty
# 54 "data/maps/IndoorPAHouse/scripts.pory"
	delay 40
# 55 "data/maps/IndoorPAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 56 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_30_Text_0
	goto IndoorPAHouse_Heal_30_1


IndoorPAHouse_Gobbledorf::
# 66 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 67 "data/maps/IndoorPAHouse/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_GOBBLEDORF, IndoorPAHouse_Gobbledorf_2
# 71 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Gobbledorf_Text_1, MSGBOX_SIGN
# 72 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
# 73 "data/maps/IndoorPAHouse/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 10
IndoorPAHouse_Gobbledorf_1:
# 75 "data/maps/IndoorPAHouse/scripts.pory"
	setflag FLAG_GOT_FULL_RESTORE_GOBBLEDORF
# 76 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end

IndoorPAHouse_Gobbledorf_2:
# 68 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Gobbledorf_Text_0, MSGBOX_SIGN
# 69 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
	goto IndoorPAHouse_Gobbledorf_1


IndoorPAHouse_TV_Text_0:
# 5 "data/maps/IndoorPAHouse/scripts.pory"
	.string "GIANT SCHLONG STEVE!!!\pDING!\p Steve is in disgust.$"

IndoorPAHouse_Refrigerator_Text_0:
# 13 "data/maps/IndoorPAHouse/scripts.pory"
	.string "What's the wattage\nof this microwave?$"

IndoorPAHouse_Bathroom_Text_0:
# 21 "data/maps/IndoorPAHouse/scripts.pory"
	.string "I'M SHITTIN' 'ERE!!!$"

IndoorPAHouse_Heal_Text_0:
# 32 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Too baked? Rest up your POKEMON?$"

IndoorPAHouse_Heal_Text_1:
# 39 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Ight you got your 20min!\nAll healed!$"

IndoorPAHouse_Heal_Text_2:
# 41 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Go get more FUGGED!$"

IndoorPAHouse_Heal_30_Text_0:
# 56 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Ight you got your 30min!\nAll healed!$"

IndoorPAHouse_Gobbledorf_Text_0:
# 68 "data/maps/IndoorPAHouse/scripts.pory"
	.string "I'm Gobbledorf\pI protect this place.\nExplore safely.$"

IndoorPAHouse_Gobbledorf_Text_1:
# 71 "data/maps/IndoorPAHouse/scripts.pory"
	.string "I'm Gobbledorf\pI protect this place.\pYou seem chill though\n have this.$"

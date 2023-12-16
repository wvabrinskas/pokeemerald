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


IndoorPAHouse_Heal::
# 23 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 24 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_0, MSGBOX_YESNO
# 25 "data/maps/IndoorPAHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IndoorPAHouse_Heal_2
# 33 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_2
IndoorPAHouse_Heal_1:
# 35 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end

IndoorPAHouse_Heal_2:
# 26 "data/maps/IndoorPAHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/IndoorPAHouse/scripts.pory"
	playbgm MUS_HEAL, FALSE
# 28 "data/maps/IndoorPAHouse/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/IndoorPAHouse/scripts.pory"
	delay 40
# 30 "data/maps/IndoorPAHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 31 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Heal_Text_1
	goto IndoorPAHouse_Heal_1


IndoorPAHouse_Gobbledorf::
# 40 "data/maps/IndoorPAHouse/scripts.pory"
	lock
# 41 "data/maps/IndoorPAHouse/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_GOBBLEDORF, IndoorPAHouse_Gobbledorf_2
# 45 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Gobbledorf_Text_1, MSGBOX_SIGN
# 46 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
# 47 "data/maps/IndoorPAHouse/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 10
IndoorPAHouse_Gobbledorf_1:
# 50 "data/maps/IndoorPAHouse/scripts.pory"
	release
	end

IndoorPAHouse_Gobbledorf_2:
# 42 "data/maps/IndoorPAHouse/scripts.pory"
	msgbox IndoorPAHouse_Gobbledorf_Text_0, MSGBOX_SIGN
# 43 "data/maps/IndoorPAHouse/scripts.pory"
	waitmessage
	goto IndoorPAHouse_Gobbledorf_1


IndoorPAHouse_TV_Text_0:
# 5 "data/maps/IndoorPAHouse/scripts.pory"
	.string "GIANT SCHLONG STEVE!!!\pDING!\p Steve is in disgust.$"

IndoorPAHouse_Refrigerator_Text_0:
# 13 "data/maps/IndoorPAHouse/scripts.pory"
	.string "What's the wattage\nof this microwave?$"

IndoorPAHouse_Heal_Text_0:
# 24 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Too baked? Rest up your POKEMON?$"

IndoorPAHouse_Heal_Text_1:
# 31 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Ight you got your 20min!\nAll healed!$"

IndoorPAHouse_Heal_Text_2:
# 33 "data/maps/IndoorPAHouse/scripts.pory"
	.string "Go get more FUGGED!$"

IndoorPAHouse_Gobbledorf_Text_0:
# 42 "data/maps/IndoorPAHouse/scripts.pory"
	.string "I'm Gobbledorf\pI protect this place.\nExplore safely.$"

IndoorPAHouse_Gobbledorf_Text_1:
# 45 "data/maps/IndoorPAHouse/scripts.pory"
	.string "I'm Gobbledorf\pI protect this place.\pYou seem chill though\n have this.$"

Route420_MapScripts::
	.byte 0


Route420_Sign::
# 5 "data/maps/Route420/scripts.pory"
	lock
# 6 "data/maps/Route420/scripts.pory"
	msgbox Route420_Sign_Text_0, MSGBOX_SIGN
# 7 "data/maps/Route420/scripts.pory"
	waitmessage
# 8 "data/maps/Route420/scripts.pory"
	release
	end


Route420_Sign_Text_0:
# 6 "data/maps/Route420/scripts.pory"
	.string "Route 420 - PA HOUSE$"

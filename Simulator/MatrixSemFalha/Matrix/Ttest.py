#!/usr/bin/env python
import sys
import os

#time 
time = [100, 200, 225, 250, 275, 300, 325, 350, 375, 400, 800]

for t in time:
	os.system("sed -i '94s/.*/\t\tsendINTERVAL = " + str(t) + ";/' ModuleTestC.nc")
	os.system("make micaz sim")
	os.system("python main.py")
	os.system("python countMsg.py -t" + str(t) )

print "Finished!!"

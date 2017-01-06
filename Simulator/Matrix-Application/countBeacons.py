import os
import sys

timer = { }
timer[0] = [] #0 min
timer[1] = [] #5 min
timer[2] = [] #10 min
timer[3] = [] #15 min
timer[4] = [] #20 min

def counterBeacons(timer, node, topo, test):
    fileName = "beacons-test-" + str(test) + ".txt"
    logName = "./LOG/BEA/" + str(topo) + "-topo/" + fileName
    arq = open(logName,"r")
    counter = 0
    lastTimerStored = -1
    for line in arq:
        if(lastTimerStored != int(line.split(":")[1])):
            lastTimerStored = int(line.split(":")[1])
            if(lastTimerStored == 0 or lastTimerStored == 5 or lastTimerStored == 10 or lastTimerStored == 15 or lastTimerStored == 20):
                timer[lastTimerStored/5].append(counter)
        counter +=1
    else: timer[(lastTimerStored/5) + 1].append(counter)
    arq.close()

def averageBeacons(timer, node, topo):
    d = os.getcwd().split("/")[-1]

    for test in range(1,11):
        counterBeacons(timer, node, topo, test)

    fileName = d + "beacons-test.txt"
    logName = "../OutputBeacons/" + fileName
    fp = open(logName, "w")
    media = 0

    for i in range(0,5):
        media = sum(timer[i])/float(len(timer[i]))
        fp.write("time:%dmin:beacons:%d\n"%(i*5,media))
        timer[i] = []
    fp.close()

for node in range(100,200,100):
    for topo in range(1,2):
        averageBeacons(timer, node, topo)

import sys
import os

pathMS   = "./LOG/MSG_APP/"
pathMR   = "./LOG/REC_APP/"
pathOut  = "../OutputMSG/"

def file_len(fname):
        return sum(1 for line in open(fname))

d = os.getcwd().split("/")[-1]
outputrcv = open(pathOut + d + "-averange-receive-test.txt" , "w")

for x in range(1,11):
        path = pathMR + str(x) + "-topo/"
        outputrcv.write(str(x) + "-topo-average-receive:")
        testLen = []
        for i in range(1,11):
                pathtst = path + "receive-App-test-" + str(i) + ".txt"
                testLen.append(file_len(pathtst))
        SUM = sum(testLen)
        LEN = len(testLen)
        if LEN:
                average = SUM / float(LEN)
        else:
                average = 0
        outputrcv.write(str(average) + "\n")

outputrcv.close()

d = os.getcwd().split("/")[-1]
outputsnd = open(pathOut + d + "-averange-send-test.txt", "w")

for x in range(1,11):
        path = pathMS + str(x) + "-topo/"
        outputsnd.write(str(x) + "-topo-average-send:")
        testLen = []
        for i in range(1,11):
                pathtst = path + "message-App-test-" + str(i) + ".txt"
                testLen.append(file_len(pathtst))
        SUM = sum(testLen)
        LEN = len(testLen)
        if LEN:
                average = SUM / float(LEN)
        else:
                average = 0
        outputsnd.write(str(average) + "\n")

outputsnd.close()

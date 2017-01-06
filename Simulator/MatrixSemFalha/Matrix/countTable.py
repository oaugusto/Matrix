import os
import sys

pathOut = "../OutputTable/"
pathToRead = "./LOG/TBL/1-topo/"

def countTable(test):
    nodes = {}
    for i in range(1,101):
        nodes[i] = []

    fi = open(pathToRead + "table-test-" + str(test) + ".txt", "r")
    fp = open(pathOut + "table-test-" + str(test) + ".txt", "w")

    for line in fi:
        pattern = line.split(":")
        nodes[int(pattern[0])].append(int(pattern[1]))

    average = 0
    for node in nodes.items():
        if(len(node[1])):
            average = sum(node[1])/float(len(node[1]))
        else:
            average = 0
        fp.write("node"+str(node[0])+":tableSize:"+str(average)+"\n")

    fi.close()
    fp.close()

for test in range(1,11):
    countTable(test)

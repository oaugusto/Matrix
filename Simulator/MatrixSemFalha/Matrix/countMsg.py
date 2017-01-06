#! /usr/bin/env python
"""     data:02/07/2015
        Modulo principal na simulacao. Executa o numero de teste solicitados com certa topologia.
        Verifica se o diretorio contem todos os demais diretorios e arquivos para continuar com
        a simulacao. Caso nao estaje, cria ou solicita as dependencia.
"""
from optparse  import OptionParser
import time
import sys
import os

usage = "usage: %prog [options]"
des = "Simulator"

parser = OptionParser(usage = usage, description = des, version = "%prog 1.0")


parser.add_option("-t", "--time",
                                        action = "store", type = "string", dest = "time", default = "1",
                                        help = "")

(options, args) = parser.parse_args()

pathMS   = "./LOG/MSG_APP/"
pathMR   = "./LOG/REC_APP/"
pathOut  = "./Output/"

def file_len(fname):
        return sum(1 for line in open(fname))

dr = options.time + "-mili"
outputrcv = open(pathOut + dr + "/receive-test.txt" , "w")

outputrcv.write("topo:\ttest1\ttest2\ttest3\ttest4\ttest5\ttest6\ttest7\ttest8\ttest9\ttest10\n")

for x in range(1,11):
    path = pathMR + str(x) + "-topo/"
    outputrcv.write("topo" + str(x))

    for i in range(1,11):
        pathtst = path + "receive-App-test-" + str(i) + ".txt"
        outputrcv.write("\t" + str(file_len(pathtst)))

    outputrcv.write("\n")

outputrcv.close()

dr = options.time + "-mili"
outputsnd = open(pathOut + dr + "/send-test.txt", "w")

outputsnd.write("topo:\ttest1\ttest2\ttest3\ttest4\ttest5\ttest6\ttest7\ttest8\ttest9\ttest10\n")

for x in range(1,11):
    path = pathMS + str(x) + "-topo/"
    outputsnd.write("topo" + str(x))

    for i in range(1,11):
        pathtst = path + "message-App-test-" + str(i) + ".txt"
        outputsnd.write("\t" + str(file_len(pathtst)))

    outputsnd.write("\n")

outputsnd.close()

#! /usr/bin/env python
"""	data:02/07/2015
	Modulo principal na simulacao. Executa o numero de teste solicitados com certa topologia.
	Verifica se o diretorio contem todos os demais diretorios e arquivos para continuar com
	a simulacao. Caso nao estaje, cria ou solicita as dependencia.
"""
from optparse  import OptionParser
from TOSSIM    import *
from random    import *
from simulator import *
import time
import sys
import os
import threading

usage = "usage: %prog [options]"
des = "Simulator"

parser = OptionParser(usage = usage, description = des, version = "%prog 1.0")

parser.add_option("-n","--node",
					action = "store", type = "int", dest = "node", default = 20,
					help = "number of nodes [default: %default]")

parser.add_option("-T", "--TOPO",
					action = "store", type = "string", dest = "topo", default = "1",
					help = "set the topology [default: %default]")

parser.add_option("--test",
					action = "store", type = "int", dest = "test", default = 1,
					help = "number of simulation are required [default: %default]")

parser.add_option("-u", "--utime",
					action = "store", type = "string", dest = "utime", default = "m",
					help = "[default: %default]")

parser.add_option("-t", "--ntime",
					action = "store", type = "int", dest = "ntime", default = 5,
					help = "[default: %default]")

parser.add_option("--name",
					action = "store", type = "string", dest = "name", default = "sim",
					help = "name of file")

(options, args) = parser.parse_args()

#armazena o diretorio corrente onde se deseja realizar as simulacoes
path = os.getcwd()

#verifica a existencia do arquivo no diretorio corrente
if os.path.isfile(path + "/meyer-light.txt") != True:
	print "meyer-light.txt can not be found"
	#erro

#verifica a existencia do arquivo no diretorio corrente
if os.path.isfile(path + "/TOSSIM.py") != True:
	print "TOSSIM.py can not be found"
	#erro

#verifica a existencia do arquivo no diretorio corrente
if os.path.isfile(path + "/TOSSIM.pyc") != True:
	print "TOSSIM.pyc can not be found"
	#erro

#verifica a existencia do arquivo no diretorio corrente
if os.path.isfile(path + "/makefile") != True:
	print "makefile can not be found"
	#erro

#verifica a existencia do diretorio no diretorio corrente
if os.path.isdir(path + "/build") != True:
	print "build can not be found"
	#erro

#verifica a existencia do arquivo no diretorio corrente
if os.path.isdir(path + "/simbuild") != True:
	print "simbuild can not be found"
	#erro

#verifica a existencia do diretorio TOPO no diretorio corrente
#caso nao exista cria um novo
if os.path.isdir(path + "/TOPO") != True:
	os.mkdir(path + "/TOPO")
	#cria as topologias necessarias por meio do modulo topology

#verifica a existencia do diretorio TOPO no diretorio corrente
#caso nao exista cria um novo
if os.path.isdir(path + "/Output") != True:
	os.mkdir(path + "/Output")

#verifica a existencia do diretorio LOG no diretorio corrente
#caso nao exista cria um novo
if os.path.isdir(path + "/LOG") != True:
	for i in range(1,11):
		os.makedirs(path + "/LOG/BOO/"		+	str(i) + "-topo")
		os.makedirs(path + "/LOG/RAD/"		+	str(i) + "-topo")
		os.makedirs(path + "/LOG/MSG_AGG/"	+	str(i) + "-topo")
		os.makedirs(path + "/LOG/MSG_DIS/"	+	str(i) + "-topo")
		os.makedirs(path + "/LOG/MSG_APP/"	+	str(i) + "-topo")
		os.makedirs(path + "/LOG/DFU/"		+	str(i) + "-topo")
		os.makedirs(path + "/LOG/STB/"		+	str(i) + "-topo")
		os.makedirs(path + "/LOG/TBL/"		+	str(i) + "-topo")
		os.makedirs(path + "/LOG/MTX/"		+	str(i) + "-topo")
		os.makedirs(path + "/LOG/REC_APP/"	+	str(i) + "-topo")
		os.makedirs(path + "/LOG/BEA/"		+	str(i) + "-topo")


#verifica a existencia do diretorio DES no diretorio corrente
#caso nao exista cria um novo
#if os.path.isdir(path + "/SIM") != True:
#	os.mkdir(path + "/SIM")

command = "python simulator.py"
command += " --utime=m"
command += " --ntime=20"
command += " --node=100"

#extends thread class
class myThread (threading.Thread):
    def __init__(self, threadID, name, command):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.name = name
        self.command = command
    def run(self):
        print "Starting " + self.name
        simulator_topo(self.command)


def simulator_topo(command):
		command_initial = command
		for test in range(1,11):
			command += " --test=" + str(test)
			print command
			os.system(command)
			command = command_initial


threads = []
threadID = 1


# Create new threads
for idx in range(1,11):
    thread = myThread(threadID, "Topo" + str(idx), command + " --TOPO="  + str(idx))
    thread.start()
    threads.append(thread)
    threadID += 1


# Wait for all threads to complete
for t in threads:
    t.join()

print "\nExiting Main Thread\n"

#processing number of beacons
os.system("python countBeacons.py")

#processing number of application msg
os.system("python countMsg.py")

#processing the amount of table was used
#os.system("python countTable.py")

print "\nMission accomplished\n"

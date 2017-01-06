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
for i in range(1,11):
        if os.path.isdir(path + "/LOG/BOO/"     + str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/BOO/"      + str(i) + "-topo")
        if os.path.isdir(path + "/LOG/RAD/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/RAD/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/MSG_AGG/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/MSG_AGG/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/MSG_DIS/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/MSG_DIS/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/MSG_APP/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/MSG_APP/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/DFU/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/DFU/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/STB/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/STB/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/TBL/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/TBL/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/MTX/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/MTX/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/REC_APP/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/REC_APP/"	+ str(i) + "-topo")
        if os.path.isdir(path + "/LOG/BEA/"	+ str(i) + "-topo") != True:
            os.makedirs(path + "/LOG/BEA/"	+ str(i) + "-topo")

print "\nMission accomplished\n"

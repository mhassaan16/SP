import os
import psutil
import time
from datetime import datetime

processID=input("ENTER PROCESS ID : ")

for process in psutil.process_iter():
	if(process.pid == processID):
		print('PROCESS ID : %d'%(process.pid))
		print('PROCESS NAME : %s'%(process.name))
		print('PEOCESS STATUS : %s'%(process.status))
		print('PROCESS PARENT ID : %d'%(process.ppid))
		print('PROCESS CREATION TIME : %s'%(datetime.fromtimestamp(process.create_time).strftime("%A, %B %d, %Y %I:%M:%S")))
		print('PROCESS MEMORY INFO : %s'%(process.get_memory_info))
		print('FILES OPENED BY PROCESS : %s'%(process.get_open_files))
		quit()
print('PROCESS NOT EXIST')

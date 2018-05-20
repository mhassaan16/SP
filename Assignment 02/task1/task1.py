import requests
import os,sys
import time
from PIL import Image
from bs4 import BeautifulSoup
from StringIO import StringIO
 
def lastItems(URL):
	req1=requests.get(url)
	obj=BeautifulSoup(req1.content)
	names=[]
	if req1.status_code == 200:
		for i in obj.find_all("a"):
			names.append(i.text)
	return names
def totalQari(url):
	count=0
	req3=requests.get(url)
	obj1=BeautifulSoup(req3.content)
	totalqari=0
	if req3.status_code ==200:
		for k in obj1.find_all("a"):
			count=count+1
			
	return count

count=0
cc=0
url3="https://download.quranicaudio.com/quran/"
f=open("logfile","w+")
count=totalQari(url3)

st=str(time.strftime("%c"))+" "+"TOTAL QARI : "+str(count)
f.write(st)
f.write("\n")
req=requests.get("https://download.quranicaudio.com/quran/")
if req.status_code == 200:
	parser_obj = BeautifulSoup(req.content);
	
	for i in parser_obj.find_all("a"):
		path = i.text 
		
		if not os.path.exists(path):
			os.makedirs(path)
			os.chdir(path)
			url="https://download.quranicaudio.com/quran/"+path
			
			name =lastItems(url)
			cc=cc+1
			st=str(time.strftime("%c"))+" "+"START PROCESSING : "+str(cc)+"out of "+str(count)
			f.write(st)
			f.write("\n")
			st=str(time.strftime("%c"))+" "+"QARI NAME : "+str(path)
			f.write(st)
			f.write("\n")
			
			for j in name[-26:]:			
				url2= url+j
				st=str(time.strftime("%c"))+" "+"QARI NAME : "+str(path)+" "+"FILENAME : "+str(j)+"START"
				f.write(st)
				f.write("\n")
				r = requests.get(url2)
				with open(j,"wb") as code:
					code.write(r.content)
				st=str(time.strftime("%c"))+" "+"QARI NAME : "+str(path)+" "+"FILENAME : "+str(j)+"END"
				f.write(st)
				f.write("\n")
				
				
			st=str(time.strftime("%c"))+" "+"MERGING FILE OF QARI NAME : "+str(path)+" "+"START"
			f.write(st)
			f.write("\n")
			
			os.system("mp3wrap secondHalf.mp3 *.mp3")
			
			st=str(time.strftime("%c"))+" "+"MERGING FILE OF QARI NAME : "+str(path)+" "+"END"
			f.write(st)
			f.write("\n")	
					
					
		os.chdir("../")
							

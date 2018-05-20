import requests
import os,sys
from PIL import Image
from bs4 import BeautifulSoup
from StringIO import StringIO

print "YOUR ENTERED WORD IS :{0} ".format((sys.argv[1]))
word=sys.argv[1];


req=requests.get("https://propakistani.pk/");
data = req.text
soup = BeautifulSoup(data)
linkname =[]
for link in soup.find_all("div",{"class","single-story"}):
	
	for j in link.find_all("a"):
		linkk=j.get("href")
		linkname.append(linkk)
		break


for j in range(0,4):
	req1=requests.get(linkname[j]);
	data1=req1.text
	soup=BeautifulSoup(data1)
	for i in soup.find_all("a"):
		if word  in i.text:
			print "____________________________________________________________"
			print "\n"
			print "found in the following link:"
			print linkname[j]
			break;
	

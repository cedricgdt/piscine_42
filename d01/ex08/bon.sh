ldapsearch -xLLL "sn=*bon*" | grep "^sn" | wc -l | cut -c6-

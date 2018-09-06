ldapsearch -Q "(sn=*bon*)" cn | grep ^cn | wc -l | rev | cut -d" " -f1 | rev

ifconfig | grep -i ether | cut -d " " -f 2 | sed "s/ //"

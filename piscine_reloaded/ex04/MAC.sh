ifconfig | grep "ether " | sed -E 's/[[:blank:]]*ether[[:blank:]]*//' | sed -E 's/[[:blank:]]$//'

# ifconfig (interface configuration) is a network management tool. It is used to configure and view the status of the network interfaces in Linux operating systems.
# Grep "ether" gets all the ethernet address AKA MAC adress
# the sed is used to remove ether

ifconfig | grep "ether" | sed 's/\(.*\)ether //g'
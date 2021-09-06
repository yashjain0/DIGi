arp -a will typically give you a quick look at ip + mac addresses on the network.
  
// Netstat instructions
  http://www.cs.newpaltz.edu/~easwaran/CCN/Week3/netstat.html
netstat -a -t (or netstat -at) shows all the TCP connections on the host.
  //TCP-Transmission Control Protocol is connection-oriented, and a connection between client and server is established before data can be sent. 
  //The server must be listening (passive open) for connection requests from clients before a connection is established.
  https://geeksforgeeks.org/tcp-connection-establishment/


netstat -ad and netstat -au shows UDP and Unix socket connections.
  https://www.hitchhikersguidetolearning.com/2020/04/22/unix-domain-udp-socket-connection-example/

netstat -i, works as windows NET VIEW command.
  
 Tracert command-
  //Launch Network Utility by going in Mac OS X Spotlight, typing Network Utility, and then clicking the Top Hit. 
  //Alternatively, you can double-click the Hard Drive icon -> Applications -> Utilities -> Network Utility program
  
//change names in MACBOOK for hinding your system.
sudo scutil --set ComputerName "newname"
sudo scutil --set LocalHostName "newname"
sudo scutil --set HostName "newname"


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

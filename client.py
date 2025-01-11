import socket

c=socket.socket()

c.connect(('100.1.2.13',9999))

message=input("enter a message")
c.send(bytes(message,'utf-8'))
print(c.recv(1024).decode())
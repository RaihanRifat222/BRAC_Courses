import socket

HEADER=16
PORT=5050
SERVER=socket.gethostbyname(socket.gethostname())

#bind the address
ADDR=(SERVER, PORT) #binding IP and port
FORMAT="utf8"
DISCONNET_MSG="End"

server=socket.socket(socket.AF_INET, socket.SOCK_STREAM) # (ipv4, TCP)

server.bind(ADDR)



server.listen()
print("server is Listening")

conn, addr= server.accept()

connected=True

while connected: #client is connected
    msg_length=conn.recv(HEADER).decode(FORMAT)
    if msg_length:
        msg_length= int(msg_length)
        msg=conn.recv(msg_length).decode(FORMAT) # how many length of messages
        if msg==DISCONNET_MSG:
            connected=False
            conn.send("Goodbye".encode(FORMAT))
        else:
            #write your code here
            vowels = ['a','e','i','o','u']
            v=0
            for i in msg:
                if i in vowels:
                    v+=1
            if v== 0:
                conn.send("Not enough vowels".encode(FORMAT))
            elif v<=2:
                conn.send("Enough vowels I guess".encode(FORMAT))
            elif v>2:
                conn.send("Too many vowels".encode(FORMAT))

conn.close()
            
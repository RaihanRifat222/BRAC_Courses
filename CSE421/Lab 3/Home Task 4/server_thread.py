import socket
import threading
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




def handle_clients(conn,addr):
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
                hours= int(msg)
                if hours <= 40 :
                    salary= hours*200
                else:
                    salary = 8000 + (hours*300)

                salary = str(salary)
                conn.send(f"Your Salary is {salary}".encode(FORMAT))
    conn.close()

def start():
    server.listen()
    print("Server is listening")
    while True:
        conn, addr= server.accept()
        thread=threading.Thread(target=handle_clients,args=(conn,addr))
        thread.start()
        print(f"total Clients connected: {threading.active_count()-1} ")
start()
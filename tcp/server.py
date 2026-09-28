import socket

# Create TCP socket
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Server IP and port
server_address = ("127.0.0.1", 12345)

# Bind socket
server_socket.bind(server_address)

# Listen for client
server_socket.listen(1)

print("TCP Server is running...")
print("Waiting for client...")

# Accept client connection
client_socket, client_address = server_socket.accept()

print("Client connected:", client_address)

while True:

    # Receive data from client
    data = client_socket.recv(1024)

    if not data:
        break

    message = data.decode()

    # Message format: operation|string
    operation, text = message.split("|", 1)

    # Perform selected operation
    if operation == "1":
        # Uppercase to lowercase
        result = text.lower()

    elif operation == "2":
        # Reverse string
        result = text[::-1]

    elif operation == "3":
        print("Client disconnected.")
        break

    else:
        result = "Invalid choice!"

    # Send result to client
    client_socket.send(result.encode())

    print("Received:", text)
    print("Result:", result)

# Close sockets
client_socket.close()
server_socket.close()
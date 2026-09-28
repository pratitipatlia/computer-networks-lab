import socket

# Create TCP socket
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Server address
server_address = ("127.0.0.1", 12345)

# Connect to server
client_socket.connect(server_address)

print("Connected to TCP Server!")

while True:

    # Display menu
    print("\nMENU")
    print("1. Convert Uppercase to Lowercase")
    print("2. Reverse the String")
    print("3. Exit")

    choice = input("Enter your choice: ")

    # Exit
    if choice == "3":
        client_socket.send("3|".encode())
        print("Client exited.")
        break

    # Validate choice
    if choice not in ["1", "2"]:
        print("Invalid choice! Please try again.")
        continue

    # Take string input
    text = input("Enter a string: ")

    # Create message
    message = choice + "|" + text

    # Send message to server
    client_socket.send(message.encode())

    # Receive result
    data = client_socket.recv(1024)

    result = data.decode()

    print("Result:", result)

# Close socket
client_socket.close()
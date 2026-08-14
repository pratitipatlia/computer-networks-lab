#include<iostream>
using namespace std;

int main() {
    int firstOctet;

    cout << "Enter First Octet of IP Address: ";
    cin >> firstOctet;

    if(firstOctet < 0 || firstOctet > 255) {
        cout << "Invalid IP Address!";
    }
    else if(firstOctet >= 1 && firstOctet <= 126) {
        cout << "Class A IP Address\n";
        cout << "Address Range: 1.0.0.0 to 126.255.255.255\n";
        cout << "Default Subnet Mask: 255.0.0.0 \n";
        cout << "Number of Networks: 126\n";
        cout << "Number of Hosts per Network: 16,777,214\n";
        cout << "Reason: 2^24 - 2 = 16,777,214 usable hosts.\n";
        cout << "-2 because one address is reserved for the Network Address\n";
        cout << "and one address is reserved for the Broadcast Address.\n";
    }
    else if(firstOctet == 127) {
        cout << "Loopback Address\n";
        cout << "Address Range: 127.0.0.0 to 127.255.255.255\n";
        cout << "Loopback Address is a special IP address reserved for testing and diagnosing a computer's network software.\n";
        cout << "The address 127.0.0.1 (localhost) allows a computer to communicate with itself.\n";
        cout << "Subnet Mask: Not Applicable\n";
    }
    else if(firstOctet >= 128 && firstOctet <= 191) {
        cout << "Class B IP Address\n";
        cout << "Address Range: 128.0.0.0 to 191.255.255.255\n";
        cout << "Default Subnet Mask: 255.255.0.0 \n";
        cout << "Number of Networks: 16,384\n";
        cout << "Number of Hosts per Network: 65,534\n";
        cout << "Reason: 2^16 - 2 = 65,534 usable hosts.\n";
        cout << "-2 because one address is reserved for the Network Address\n";
        cout << "and one address is reserved for the Broadcast Address.\n";
    }
    else if(firstOctet >= 192 && firstOctet <= 223) {
        cout << "Class C IP Address\n";
        cout << "Address Range: 192.0.0.0 to 223.255.255.255\n";
        cout << "Default Subnet Mask: 255.255.255.0 \n";
        cout << "Number of Networks: 2,097,152\n";
        cout << "Number of Hosts per Network: 254\n";
        cout << "Reason: 2^8 - 2 = 254 usable hosts.\n";
        cout << "-2 because one address is reserved for the Network Address\n";
        cout << "and one address is reserved for the Broadcast Address.\n";
    }
    else if(firstOctet >= 224 && firstOctet <= 239) {
        cout << "Class D IP Address (Multicast)\n";
        cout << "Address Range: 224.0.0.0 to 239.255.255.255\n";
        cout << "Subnet Mask: Not Applicable\n";
    }
    else if(firstOctet >= 240 && firstOctet <= 255) {
        cout << "Class E IP Address (Experimental)\n";
        cout << "Address Range: 240.0.0.0 to 255.255.255.255\n";
        cout << "Subnet Mask: Not Applicable\n";
    }
    else {
        cout << "Invalid IP Address!";
    }

    return 0;
}[14/08, 12:28 pm] +91 81144 73426: #include<iostream>
using namespace std;

int main() {
    int firstOctet;

    cout << "Enter First Octet of IP Address: ";
    cin >> firstOctet;

    if(firstOctet < 0 || firstOctet > 255) {
        cout << "Invalid IP Address!";
    }
    else if(firstOctet >= 1 && firstOctet <= 126) {
        cout << "Class A IP Address\n";
        cout << "Address Range: 1.0.0.0 to 126.255.255.255\n";
        cout << "Default Subnet Mask: 255.0.0.0 \n";
        cout << "Number of Networks: 126\n";
        cout << "Number of Hosts per Network: 16,777,214\n";
        cout << "Reason: 2^24 - 2 = 16,777,214 usable hosts.\n";
        cout << "-2 because one address is reserved for the Network Address\n";
        cout << "and one address is reserved for the Broadcast Address.\n";
    }
    else if(firstOctet == 127) {
        cout << "Loopback Address\n";
        cout << "Address Range: 127.0.0.0 to 127.255.255.255\n";
        cout << "Loopback Address is a special IP address reserved for testing and diagnosing a computer's network software.\n";
        cout << "The address 127.0.0.1 (localhost) allows a computer to communicate with itself.\n";
        cout << "Subnet Mask: Not Applicable\n";
    }
    else if(firstOctet >= 128 && firstOctet <= 191) {
        cout << "Class B IP Address\n";
        cout << "Address Range: 128.0.0.0 to 191.255.255.255\n";
        cout << "Default Subnet Mask: 255.255.0.0 \n";
        cout << "Number of Networks: 16,384\n";
        cout << "Number of Hosts per Network: 65,534\n";
        cout << "Reason: 2^16 - 2 = 65,534 usable hosts.\n";
        cout << "-2 because one address is reserved for the Network Address\n";
        cout << "and one address is reserved for the Broadcast Address.\n";
    }
    else if(firstOctet >= 192 && firstOctet <= 223) {
        cout << "Class C IP Address\n";
        cout << "Address Range: 192.0.0.0 to 223.255.255.255\n";
        cout << "Default Subnet Mask: 255.255.255.0 \n";
        cout << "Number of Networks: 2,097,152\n";
        cout << "Number of Hosts per Network: 254\n";
        cout << "Reason: 2^8 - 2 = 254 usable hosts.\n";
        cout << "-2 because one address is reserved for the Network Address\n";
        cout << "and one address is reserved for the Broadcast Address.\n";
    }
    else if(firstOctet >= 224 && firstOctet <= 239) {
        cout << "Class D IP Address (Multicast)\n";
        cout << "Address Range: 224.0.0.0 to 239.255.255.255\n";
        cout << "Subnet Mask: Not Applicable\n";
    }
    else if(firstOctet >= 240 && firstOctet <= 255) {
        cout << "Class E IP Address (Experimental)\n";
        cout << "Address Range: 240.0.0.0 to 255.255.255.255\n";
        cout << "Subnet Mask: Not Applicable\n";
    }
    else {
        cout << "Invalid IP Address!";
    }

    return 0;
}
[14/08, 12:28 pm] +91 81144 73426: #include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    int r = 0;

    cout << "Enter binary data: ";
    cin >> binary;

    // Validate input
    for (char bit : binary) {
        if (bit != '0' && bit != '1') {
            cout << "Invalid binary data";
            return 0;
        }
    }

    int m = binary.length();

    // Find number of parity bits
    while (pow(2, r) < (m + r + 1)) {
        r++;
    }

    int totalBits = m + r;

    char hamming[100];

    // Insert parity positions and data bits from right side
    int dataIndex = m - 1;

    for (int pos = 1; pos <= totalBits; pos++) {

        if ((pos & (pos - 1)) == 0) {
            hamming[pos] = '0'; // parity placeholder
        }
        else {
            hamming[pos] = binary[dataIndex];
            dataIndex--;
        }
    }


    // Calculate parity bits
    for (int i = 0; i < r; i++) {

        int parityPos = pow(2, i);
        int count = 0;

        for (int pos = 1; pos <= totalBits; pos++) {

            if (pos & parityPos) {

                if (hamming[pos] == '1')
                    count++;
            }
        }

        if (count % 2 == 0)
            hamming[parityPos] = '0';
        else
            hamming[parityPos] = '1';
    }


    cout << "\nNumber of data bits: " << m;
    cout << "\nNumber of parity bits: " << r;


    // Show parity bit coverage
    cout << "\n\nParity Bit Coverage:\n";

    for (int i = 0; i < r; i++) {

        int parityPos = pow(2, i);

        cout << "\nP" << parityPos 
             << " (Position " << parityPos << ") = "
             << hamming[parityPos];

        cout << "\nChecks positions: ";

        for (int pos = 1; pos <= totalBits; pos++) {

            if (pos & parityPos) {
                cout << pos << " ";
            }
        }

        cout << "\nValues considered: ";

        for (int pos = 1; pos <= totalBits; pos++) {

            if (pos & parityPos) {
                cout << hamming[pos] << " ";
            }
        }

        cout << endl;
    }


    // Show final arrangement
    cout << "\n\nHamming Code Arrangement:\n";

    cout << "Position: ";
    for (int pos = totalBits; pos >= 1; pos--) {
        cout << pos << " ";
    }

    cout << "\nBit: ";

    for (int pos = totalBits; pos >= 1; pos--) {
        cout << hamming[pos] << " ";
    }
char choice;

    cout << "\nDo you want to send data with error? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {

        int errorPosition;

        cout << "Enter the position of bit to flip (from right side): ";
        cin >> errorPosition;

        if (errorPosition < 1 || errorPosition > totalBits) {
            cout << "Invalid position!" << endl;
            return 0;
        }

        // Flip the bit
        if (hamming[errorPosition] == '0')
            hamming[errorPosition] = '1';
        else
            hamming[errorPosition] = '0';


        cout << "\nError introduced at position "
             << errorPosition << endl;

        cout << "Data after introducing error: ";

        // Display left to right
        for (int pos = totalBits; pos >= 1; pos--) {
            cout << hamming[pos];
        }

        cout << endl;

    }
    else {

        cout << "\nData sent without error: ";

        for (int pos = totalBits; pos >= 1; pos--) {
            cout << hamming[pos];
        }

        cout << endl;
    }

   

    return 0;
}
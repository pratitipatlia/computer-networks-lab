#include <iostream>
using namespace std;

int main() {
    int subnets;

    cout << "Enter number of subnets: ";
    cin >> subnets;

    int bits = 0;

    // Find number of bits needed
    while ((1 << bits) < subnets) {
        bits++;
    }

    int hostsPerSubnet = 256 / (1 << bits);

    cout << "\nSubnet Information:\n\n";

    for (int i = 0; i < (1 << bits); i++) {

        int start = i * hostsPerSubnet;
        int end = start + hostsPerSubnet - 1;

        cout << "Subnet " << i + 1 << ":\n";

        cout << "Network Address : 192.168.1." << start << endl;

        cout << "Host Range      : 192.168.1."
             << start + 1
             << " - 192.168.1."
             << end - 1 << endl;

        cout << "Broadcast       : 192.168.1."
             << end << endl;

        cout << endl;
    }

    return 0;
}

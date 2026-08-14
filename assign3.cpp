#include <iostream>
using namespace std;

int main()
{
    int ip[4];
    int subnet;

    cout << "Enter IP Address (four octets): ";
    cin >> ip[0] >> ip[1] >> ip[2] >> ip[3];

    // Validate IP address
    for (int i = 0; i < 4; i++)
    {
        if (ip[i] < 0 || ip[i] > 255)
        {
            cout << "Invalid IP address." << endl;
            return 0;
        }
    }

    cout << "Enter Subnet Prefix (24-30): /";
    cin >> subnet;

    // Validate subnet prefix
    if (subnet < 24 || subnet > 30)
    {
        cout << "Invalid prefix." << endl;
        cout << "This program supports /24 to /30." << endl;
        return 0;
    }

    int hostBits = 32 - subnet;

    int hostsPerSubnet = (1 << hostBits) - 2;

    int numberOfSubnets = 1 << (subnet - 24);

    // Calculate last octet of subnet mask
    int lastMaskOctet = 256 - (1 << (32 - subnet));

    cout << "\nIP Address: "
         << ip[0] << "."
         << ip[1] << "."
         << ip[2] << "."
         << ip[3] << endl;

    cout << "Subnet Prefix: /" << subnet << endl;

    cout << "Subnet Mask: "
         << "255.255.255."
         << lastMaskOctet << endl;

    cout << "Number of Subnets: "
         << numberOfSubnets << endl;

    cout << "Number of Hosts per Subnet: "
         << hostsPerSubnet << endl;

    cout << "\nCalculation:" << endl;

    cout << "-> Total IPv4 bits = 32" << endl;
    cout << "-> Network bits = " << subnet << endl;
    cout << "-> Host bits = 32 - " << subnet
         << " = " << hostBits << endl;

    cout << "-> Total addresses per subnet = 2^"
         << hostBits << " = "
         << (1 << hostBits) << endl;

    cout << "-> Usable hosts = 2^"
         << hostBits << " - 2 = "
         << hostsPerSubnet << endl;

    cout << "-> Borrowed bits from /24 = "
         << subnet - 24 << endl;

    cout << "-> Number of subnets = 2^"
         << (subnet - 24) << " = "
         << numberOfSubnets << endl;

    return 0;
}

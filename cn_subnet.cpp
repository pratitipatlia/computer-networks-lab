#include <iostream>
using namespace std;

int main()
{
    int ip[4], subnet;

    cout << "Enter IP Address: ";
    cin >> ip[0] >> ip[1] >> ip[2] >> ip[3];

    cout << "Enter Subnet Prefix (e.g. 24): ";
    cin >> subnet;

    int hostBits = 32 - subnet;
    int hosts = (1 << hostBits) - 2;
    int networks = 1 << (subnet - 24);

    cout << "\nIP Address: "
         << ip[0] << "." << ip[1] << "."
         << ip[2] << "." << ip[3] << endl;

    cout << "Subnet Prefix: /" << subnet << endl;

    if (subnet >= 24 && subnet <= 30)
    {
        cout << "Subnet Mask: 255.255.255.";

        int mask = 256 - (1 << (32 - subnet));
        cout << mask << endl;

        cout << "Number of Hosts per Subnet: "
             << hosts << endl;

        cout << "Number of Subnets: "
             << networks << endl;
    }
    else
    {
        cout << "This program supports prefix values from /24 to /30." << endl;
    }

    return 0;
}

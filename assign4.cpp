#include <iostream>
#include <iomanip>
using namespace std;

#define INF 999

int main() {
    int n;

    cout << "Enter the number of routers: ";
    cin >> n;

    int cost[10][10];
    int dist[10][10];
    int nextHop[10][10];

    cout << "\nEnter the cost matrix:\n";
    cout << "(Enter 999 for no direct connection)\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];

            dist[i][j] = cost[i][j];

            if (i == j)
                nextHop[i][j] = i;
            else if (cost[i][j] != INF)
                nextHop[i][j] = j;
            else
                nextHop[i][j] = -1;
        }
    }

    // Distance Vector Algorithm
    bool updated;

    do {
        updated = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {

                    if (dist[i][k] != INF &&
                        dist[k][j] != INF &&
                        dist[i][j] > dist[i][k] + dist[k][j]) {

                        dist[i][j] = dist[i][k] + dist[k][j];
                        nextHop[i][j] = nextHop[i][k];

                        updated = true;
                    }
                }
            }
        }

    } while (updated);

    // Display routing tables
    for (int i = 0; i < n; i++) {

        cout << "\n\nRouting Table for Router " << i + 1 << endl;
        cout << "----------------------------------------\n";
        cout << "Destination\tCost\tNext Hop\n";

        for (int j = 0; j < n; j++) {

            cout << j + 1 << "\t\t";

            if (dist[i][j] == INF)
                cout << "INF\t";
            else
                cout << dist[i][j] << "\t";

            if (nextHop[i][j] == -1)
                cout << "-";
            else
                cout << nextHop[i][j] + 1;

            cout << endl;
        }
    }

    return 0;
}
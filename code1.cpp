#include <iostream>
using namespace std;

class TowerOfHanoi
{
public:
    void solve(int n, char source, char auxiliary, char destination)
    {
        if (n == 1)
        {
            cout << "Move Disk 1 from Rod " << source << " to Rod " << destination << endl;
            return;
        }

        solve(n - 1, source, destination, auxiliary);

        cout << "Move Disk " << n << " from Rod " << source << " to Rod " << destination << endl;

        solve(n - 1, auxiliary, source, destination);
    }
};

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    TowerOfHanoi hanoi;
    hanoi.solve(n, 'A', 'B', 'C');

    return 0;
}

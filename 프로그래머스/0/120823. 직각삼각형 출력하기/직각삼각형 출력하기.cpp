#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    for (int ii = 1; ii <= n; ii++)
    {
        for (int jj = 0; jj < ii; jj++)
        {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}
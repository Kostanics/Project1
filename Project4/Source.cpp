#include <iostream>
using namespace std;
void sorty(const int n) {
    int *random = new int[n]{};
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        random[i] = rand() % 10;
    }
    cout << "massive: " << endl;
    for (int i = 0; i < n; i++) {
        cout << random[i];
    }
    cout << endl;
    int x = 0;
    for (int j = 0; j < n - 1; j++) {
        for (int k = n - 1; k > j; k--) {
            if (random[k] < random[k - 1]) {
                x = random[k - 1];
                random[k - 1] = random[k];
                random[k] = x;
            }
        }
    }
    cout << "sort massive: " << endl;
    for (int i = 0; i < n; i++) {
        cout << random[i];
    }
    delete [] random;
}

int main()
{
    cout << "For 100 elements:" << endl;
    int n;
    cin >> n;
    sorty(n);
    cout << endl;
    cout << "For 1000 elements:" << endl;
    cin >> n;
    sorty(n);
    cout << endl;
    cout << "For 10000 elements:" << endl;
    cin >> n;
    sorty(n);
    cout << endl;
    cout << "For 100000 elements:" << endl;
    cin >> n;
    sorty(n);
    cout << endl;
    cout << "For 1000000 elements:" << endl;
    cin >> n;
    sorty(n);
}

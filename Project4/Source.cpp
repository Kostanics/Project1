#include <iostream>
#include <chrono> 
using namespace std;
void sorty(const int n) {
    int* random = new int[n] {};
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        random[i] = rand() % 10;
    }
    //cout << "massive: " << endl;
    for (int i = 0; i < n; i++) {
        //cout << random[i];
    }
    cout << endl;
    auto start = chrono::high_resolution_clock::now();
    unsigned long long comparisonsCount = 0, swapCount = 0;
    int temp;
    int x = 0;
    for (int j = 0; j < n - 1; j++) {
        for (int k = n - 1; k > j; k--) {
            comparisonsCount++;
            if (random[k] < random[k - 1]) {
                x = random[k - 1];
                random[k - 1] = random[k];
                random[k] = x;
                swapCount += 3;
            }
        }
    }
    auto finish = chrono::high_resolution_clock::now();
    cout << "sorting time: " << ((chrono::duration_cast<chrono::microseconds>)(finish - start)).count() << " (microseconds)\nNumber of permutations: " << swapCount << "\nNumber of comparisons: " << comparisonsCount << "\npermutations and comparisons = " << (comparisonsCount + swapCount) << "\n";
    //cout << "sort massive: " << endl;
    for (int i = 0; i < n; i++) {
        //cout << random[i];
    }
    delete[] random;
}

int main()
{
    cout << "For 100 elements:" << endl;
    sorty(100);
    cout << endl;
    cout << "For 1000 elements:" << endl;
    sorty(1000);
    cout << endl;
    cout << "For 10000 elements:" << endl;
    sorty(10000);
    cout << endl;
    cout << "For 100000 elements:" << endl;
    sorty(100000);
    cout << endl;
    cout << "For 1000000 elements:" << endl;
    sorty(1000000);
}

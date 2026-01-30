#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The number" << n << " is Even." << endl;
    } else {
        cout << "The number" << n << " is Odd." << endl;
    }

    return 0;
}

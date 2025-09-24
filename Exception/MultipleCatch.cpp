#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    cout << "hello " << endl;
    int a = 12, b = 0, r = 0;

    try {
        // Division check
        if (b == 0)
            throw runtime_error("division by zero");

        r = a / b;
        cout << "division = " << r << endl;

        // Nested try block for array access
        try {
            int x[] = {3, 4, 5, 6, 7, 2};
            int size = sizeof(x) / sizeof(x[0]);
            int index = 40;

            if (index < 0 || index >= size)
                throw out_of_range("Index out of Bound");

            cout << "x[" << index << "] = " << x[index] << endl;
        }
        catch (const out_of_range &e) {
            cout << "exception: " << e.what() << endl;
        }

    }
    catch (const runtime_error &e) {
        cout << "exception: " << e.what() << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
 
int main()
{
    int a = 10, b = 5;
    if (b > 0) {
        while (b > 0) {
            a++;
            b--;
        }
    }
    if (b < 0) { // when 'b' is negative
        while (b < 0) {
            a--;
            b++;
        }
    }
    cout << "Sum = " << a;
    return 0;
}

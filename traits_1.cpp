#include <iostream>

using namespace std;

template<typename T> inline
T sigma(const T *start, const T *end)
{
    T total = T(); // suppose T() actually creates a zero value
    while (start != end) {
        total += *start++;
    }
    return total;
}

int main()
{
    int a[] = {22, 22, 22, 22, 222};
    auto n = sizeof(a) / sizeof(int);
    cout << sigma(a, a + n) << endl;
    return 0;
}

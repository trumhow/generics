#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// bool func(int x)
// {
//     return x == 1;
// }

int main()
{
    vector<int> vec{2, 1, 2, 1, 1, 2, 1, 2, 2};
    // vec.erase(vec.begin() + 2, vec.end());
    // copy(vec.begin(), vec.end(), ostream_iterator<int>(std::cout, " "));

    // vec.erase(remove_if(vec.begin(), vec.end(), func), vec.end());
    vec.erase(remove_if(vec.begin(), vec.end(), [](auto x){ return x == 1; }), vec.end());
    copy(vec.begin(), vec.end(), ostream_iterator<int>(std::cout, " "));

    cout << endl;
    return 0;
}

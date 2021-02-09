#include <iostream>
#include <cstring>

using namespace std;

template<typename T> class SigmaTraits {};
//-----------------------------------------------------------------------------
template<> class SigmaTraits<char>
{
    public: using ReturnType = int;
};
template<> class SigmaTraits<int>
{
    public: using ReturnType = long;
};
template<> class SigmaTraits<unsigned int>
{
    public: using ReturnType = unsigned long;
};
template<> class SigmaTraits<float>
{
    public: using ReturnType = double;
};
//-----------------------------------------------------------------------------
template<typename T> inline
typename SigmaTraits<T>::ReturnType sigma(const T *start, const T *end)
{
    using ReturnType = typename SigmaTraits<T>::ReturnType;
    ReturnType total = ReturnType();
    while (start != end) {
        total += *start++;
    }
    return total;
}

int main()
{
    char str[] = "abc";
    auto n = strlen(str);
    cout << sigma(str, str + n) << endl;
    return 0;
}

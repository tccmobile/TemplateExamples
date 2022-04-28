#include <iostream> //main header
using namespace std;//for namespace

template<auto N>
class MainFunda
{
    public:
    MainFunda()
    {
        cout << N << endl;
    }
};

int main()
{
    MainFunda<2> m1;
    MainFunda<'x'> m2;
    MainFunda<0xb> m3;
    MainFunda<true> m4;
    MainFunda<false>m5;
    MainFunda<3l> m6;
    MainFunda<6u> m7;
    MainFunda<-2> m8;
    
    return 0;
}
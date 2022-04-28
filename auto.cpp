#include <iostream> //main header
using namespace std;//for namespace

template<auto N>
void funda()
{
    cout << N << endl;
}

int main()
{
    funda<2>();    //N is int
    funda<'x'>();  //N is char
    funda<0xb>();  //N is hex int
    funda<true>(); //N is bool 1
    funda<false>();//N is bool 0
    funda<3l>();   //N is long int
    funda<6u>();   //N is unsigned int
    funda<-2>();   //N is signed int with -ve val
    
    return 0;
}
#include <iostream>
using namespace std;

template<auto p>
class Foo{
   using P_t = decltype(P);  //define the type of P
   
   //store the template parameter with P_t
   P_t p;
public:
  auto operator()(){
     std::cout << "Foo: " << p << "\n";
  }
};
int main(){
  Foo<1> f1; //non-type parameter
  f1();
  Foo<'c'> f2;
  f2();
 return 0;
}
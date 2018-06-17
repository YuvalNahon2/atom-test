#include<iostream>
template<typename T>
class Test{
  public:
  static int n;
  Test(){
    n++;
  }
  static void print_n(){
    std::cout<<n<<std::endl;
  }
};
template<typename T>
int Test<T>::n = 0;

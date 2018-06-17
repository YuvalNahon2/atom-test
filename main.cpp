#include "templates.h"
int main(){
    Test<int> shit;
    Test<double> shit2;
    Test<int>::print_n();
    Test<double>::print_n();
    Test<bool>::print_n();
}

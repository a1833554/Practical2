

#include <iostream>
#include "function-2-4.cpp"
int main(){

int array[5] = {6,5,7,3,21};

    std::cout << "min: "<< array_min(array, 5)<< std::endl;
    std::cout << "max: "<<array_max(array, 5)<< std::endl;
    std::cout << "sum: "<<sum_min_max(array, 5)<< std::endl;
}

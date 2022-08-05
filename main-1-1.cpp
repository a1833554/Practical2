//
//  main-1-1.cpp
//  
//
//  Created by Shea Cowan on 4/8/22.
//

#include <iostream>
#include "function-1-1.cpp"

int main(){
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    std::cout << sum_diagonal(array) << std::endl;
    return 0;
}

//
//  function-1-2.cpp
//  
//
//  Created by Shea Cowan on 3/8/22.
//

#include <iostream>

int is_identity(int array[10][10]){
    int test = 0;
    for (int i = 0; i< 10; i++){
        for(int j = 0; j<10; j++){
            if (i == j && array[i][j] != 1){
                test++;
                break;
            }else if(i != j && array[i][j] != 0){
                test++;
                break;

            }
        }
    }
    if(test == 1){
        test = 0;
    }else
        test = 1;
    return test;

}

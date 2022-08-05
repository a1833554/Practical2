

#include <iostream>


int sum_array_elements(int integers[], int length){
    if (length<1)
        return -1;
    int sum = 0;
    for (int i = 0; i<length; i++){
        sum = sum + integers[i];
    }
            return sum;
    }

bool is_palindrome(int integers[], int length){
    if (length<1)
        return -1;
    int i;
    
        for (i = 0; i< length/2; i++)
            if(integers[i]!=integers[length-i-1]){
                return false;
            }
                return true;
}

int sum_if_palidrone(int integers[], int length){
    if (length < 1)
        return -1;
    
    if (is_palindrome(integers,length)==1)
        return sum_array_elements(integers, length);
    else
        return -2;

}



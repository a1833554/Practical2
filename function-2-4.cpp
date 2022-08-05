
#include <iostream>

int array_min(int integers[], int length){
    
    int min = integers[0];
    if (length<1)
        return -1;
    for(int i = 1; i< length; i++){
        if (integers[i] < min)
            min = integers[i];
    }
    return min;
    
}
int array_max(int integers[], int length){
    int max = integers[0];
    if (length <1 )
        return -1;
    for (int i = 1; i<length; i++){
        if (integers[i]>max)
            max = integers[i];
    }
    return max;
}

int sum_min_max(int integers[], int length){
    int sum = 0;
    if (length<1)
        return -1;
    else
sum = array_min(integers,length)+array_max(integers,length);
        return sum;
}


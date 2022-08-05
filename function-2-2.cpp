

#include <iostream>


int binary_to_int(int binary_digits[], int number_of_digits){

    int n = number_of_digits;
    int sum = 0;
    int i;
    for (i=0; i<n;i++){
        sum = sum*2 + binary_digits[i];
    }
    
    std::cout<< sum << std:: endl;
    return 0;
}


#include <iostream>
#include <string>
void print_binary_str(std::string decimal_number){

std::string str = "";

int number = stoi(decimal_number);
int remainder = 0;
while(number>0){
    remainder = number%2;
    str += remainder?'1':'0';
    number = number/2;
    }
    
int size = str.size();
    
for(int i=size-1; i>=0; i--){
    std::cout<<str[i];
}
std::cout<<std::endl;

}

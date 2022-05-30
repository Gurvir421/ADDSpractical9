#include <iostream>


#include"Cool.h"
#include <string>

using namespace std;
Cool::Cool() {
    
}
 
string Cool::thing(vector<string> operate, vector<int> number) {
    
    int size1=operate.size();
    int size2=number.size();
    
    if (size1!=size2-1) {
        return "Error";
    }
    size1=size1-1;
    int value=calculate(operate.at(size1),number.at(0),number.at(1));
    
    string standard=to_string(number.at(0)) + operate.at(size1) + to_string(number.at(1));
    
    
    for (int i=2;i<size2;i++) {
        
        int j=i-2;
        
        value=calculate(operate.at(size1-j-1),value,number.at(i));
        
        standard="(" + standard + ")"+operate.at(size1-j-1)+to_string(number.at(i)); 
        
    }
    if (( operate.at(0)=="+") || (operate.at(0)=="-")) {
        standard="("+standard+")"+"="+to_string(value);
    }
    else {
    standard=standard+"="+to_string(value);
    }
    return standard;
}

int Cool::calculate(string sign,int a,int b) {
    int cal_number;
    
    if (sign=="+"){
        cal_number=a+b;
    }
    
    else if (sign=="-") {
        cal_number=a-b;
    }
    
    else if (sign=="*") {
        cal_number=a*b;
    }
    
    else if (sign=="/") {
        cal_number=a/b;
    }
    
    return cal_number;
}  


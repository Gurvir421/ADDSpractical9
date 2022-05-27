#include <iostream>
#include "Cool.h"

#include <vector>
using namespace std;

int main() { 
     
    string input;
    getline(cin,input);
    
    int size=input.size();
    
    string num="";
    string op="";
    vector<string> operators;
    vector<int> numbers;
    
    for (int i=0;i<size;i++) {
        
        if (isdigit(input[i])) {
            
            num =input[i];
            
                if (isdigit(input[i+1])) {
                    
                    num+=input[i+1];
                    i=i+1;
                }
            numbers.push_back(stoi(num));
        }
        else if ((input[i]==*"+")||(input[i]==*"-")||(input[i]==*"*")||(input[i]==*"/")) {
            op.push_back(input[i]);
            operators.push_back(op);
            op="";
            
        }
    }
    Cool yes;
    cout << yes.thing(operators,numbers) << endl;
    
    return 0;
}
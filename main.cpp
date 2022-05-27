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
    
    int ncheck=0;
    int ocheck=0;
    
    for (int i=0;i<size;i++) {
        
        if (isdigit(input[i])) {
            
            num =input[i];
            
                if (isdigit(input[i+1])) {
                    
                    num+=input[i+1];
                    i=i+1;
                }
            numbers.push_back(stoi(num));
            ncheck=1;
        }
        else if ((input[i]==*"+")||(input[i]==*"-")||(input[i]==*"*")||(input[i]==*"/")) {
            op.push_back(input[i]);
            operators.push_back(op);
            op="";
            ocheck=1;
        }
        if ((ocheck==0)&&(ncheck==1)) {
            cout << "Error" <<endl;
            return 1;
        }
    }
    Cool yes; 
    cout << yes.thing(operators,numbers) << endl;
    
    return 0;
}
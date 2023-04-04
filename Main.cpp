#include<iostream>
#include"bisectionMethodFunctions.cpp"

int main(){
    myFile << setprecision(numberOfDigit) <<fixed;
    myFile.open("output.csv");
    displayAttributes();
    bisectionMethod();
    myFile.close();
    cout<<"Output file generated successfully"<<endl;
    return 0;
}

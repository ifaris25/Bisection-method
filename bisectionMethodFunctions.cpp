#include"global.h"
void displayAttributes(){
    myFile<<"Iteration,XL,XU,XM,Error,f(Xm),Number of significant digit is correct."<<endl;
}

double calculateXm(double xl , double xu){
    return ((xl+xu)/2);

}

double findError(double New , double Old){
    if(Old==NAN){
        return NAN;
    }
    else{
        return (abs(((New-Old)/New)*100));
    }
}

void bisectionMethod(){
    for (int i = 0; i < numberOfIteration; i++){   
        oldMidPoint=newMidPoint;
        newMidPoint=calculateXm(XL,XU);
        double cur_error=findError(newMidPoint,oldMidPoint);
        myFile<<i+1<<","<<XL<<","<<XU<<","<<newMidPoint<<","<<cur_error<<"%"<<","<<f(newMidPoint)<<","<<howManyDigitCorrect(cur_error)<<endl;
        if((f(XL)*f(newMidPoint))<0){
            XU=newMidPoint;
        }
        else{
            XL=newMidPoint;
        }
        
    }

    
}
double howManyDigitCorrect(double error){
    if (isnan(error))
        return NAN;
    else
        return int(2-log10((error/0.5)));
        
    
}

#include<iostream>
using namespace std;


int main(){
    int sum = 0 ;
    int grade[5];
   


    
    for(int i = 0; i <5; i++){
        cout << "Enter grade " << i + 1 << ": ";
          cin>> grade[i];
    }

        int highest = grade[0];
        int lowest = grade[0];

    for(int i = 0; i < 5; i++){

    if(grade[i] > highest){
        highest = grade[i];
    }

    if(grade[i] < lowest){
        lowest = grade[i];
    }

}

    for(int i =0;i<5;i++){
        cout <<  "Grade " << i + 1 << ": ";
        cout <<grade[i]<<endl;

        sum += grade[i];
    }

    
   cout << "\nResults\n";

   
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;


     double average = sum / 5.0;

     cout<< "Average: "<<average <<endl;

    if(average >= 75){
    cout << "PASSED"<<endl;
}
    else{
    cout << "FAILED"<<endl;
    }
     
    return 0;
}

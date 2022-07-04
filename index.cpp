#include <iostream>
#include <iomanip>

using namespace std;


float converter(float a);

int main(){
    float speed;
    converter(speed);

    return 0;
}

float converter(float a){
    float speed = a;
    cin>>speed;
    cout<<fixed<<setprecision(2)<<speed/0.62137<<endl;

    return 0;
}
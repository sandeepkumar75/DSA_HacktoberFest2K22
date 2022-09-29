#include<iostream>
using namespace std;

class Vehcile{
private:
    int noOfGears;
    int fule;
    string engineNo;
public:
    Vehcile(int noOfGears, int fule, string engineNo){
        this->noOfGears = noOfGears;
        this->fule = fule;
        this->engineNo = engineNo;
    }
    void display(){
        cout<<"No of gears:" <<noOfGears<<endl;
        cout<<"Amount of fule : "<<fule<<endl;
        cout<<"Engine no. "<<engineNo<<endl;
    }
};

int main(){
    Vehcile v(5, 20, "ACV458Z");

    v.display();

    return 0;

}

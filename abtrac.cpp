#include<iostream>
using namespace std;

class circle{
private:
    int radius;
    double pi = 3.14;
public:
    circle(int radius){
        this->radius = radius;
    }
    void area(){
        cout<<"Area of circle will be: "<<radius*radius*pi<<endl;
    }
};

int main(){
    circle c(2);
    c.area();

    return 0;

}

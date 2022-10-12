#include<iostream>

using namespace std;

int extended_euclid(int a, int b, int &x, int &y){

    if (b==0){

        x=1;y=0;return a;

    }

    int x1,y1;

    int g = extended_euclid(b,a%b,x1,y1);

    x = y1;

    y = x1 - (a/b)*y1;

    return g;

}

bool LDE(int a,int b,int c,int &x,int &y){

    if (a==0 && b==0){

        if (c==0){

            return true;

        }

        else{

            return false;

        }

    }

    int g,xg,yg;

    g = extended_euclid(abs(a),abs(b),xg,yg);

    if (c%g!=0) return false;

    x=xg*(c/g);

    y = yg*(c/g);

    if (a<0){

        x = x*-1;

    }

    if (b<0){

        y = y*-1;

    }

    return true;

}

int main(){

    int a=-3,b=4,c=7,x,y;

    bool check =LDE(a,b,c,x,y);

    if (check){

        cout<<"x : "<<x<<" y :"<<y;

    }

    else{

        cout<<"No integer solution Found!";

    }

}

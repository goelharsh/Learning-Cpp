#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void setlength(int l);
    void setbreadth(int b);
    int getlength();
    int getbreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};


Rectangle::Rectangle(){
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l, int b){
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
void Rectangle:: setlength(int l){
    length=l;
}
void Rectangle:: setbreadth(int b){
    breadth=b;
}
int Rectangle:: getlength(){
    return length;
}
int Rectangle:: getbreadth(){
    return breadth;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

int Rectangle:: perimeter(){
    return 2*(length+breadth);
}
int Rectangle::area(){
    return length*breadth;
}
bool Rectangle :: isSquare(){
    return length==breadth;
}
Rectangle ::~Rectangle(){
    cout<<"Rectangle Destroyed";
}




class Cuboid :public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
     height=h;
    }
     void setheight(int h){
         height=h;
     }
     int getheight(){
         return height;
     }
     int volume(){
         return getlength()*getbreadth()*height;
     }
};
 
int main(){
    Cuboid c(5);
    cout<<c.volume();
    
}
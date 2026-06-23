#include <iostream>
using namespace std;

class Shape {
protected:
string nameOfShape;
double width, height;
public:
string getName(){
    return nameOfShape;
}
};

class Rectangle : public Shape {
 public:
 Rectangle(string name, double width, double height){

    nameOfShape = name;
    this->width = width;
    this->height = height;
 };


 double getArea(){

 double area = 0;

 area = width*height;
 return area;
 }

};

class Triangle : public Shape {
 
 public:
    Triangle(string name, double width, double height){
    nameOfShape = name;
    this->width = width;
    this->height = height;
    };
    
     double getArea(){
        double ar = 0;
        ar = (width*height)/2;
        return ar;
     }

     
};

int main() {
  Rectangle r1("My rectangle", 2.0, 4.0);
  Triangle t1("My triangle", 2.0, 4.0);
  cout << r1.getName() << " area = " << r1.getArea() ;
  cout << endl;
  cout << t1.getName() << " area = " << t1.getArea() ;
  cout << endl;

  return 1;
}


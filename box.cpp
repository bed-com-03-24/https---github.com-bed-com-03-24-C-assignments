#pragma once
#include "Box.h"

Box::Box() {

length = 0.0;
breadth = 0.03;
height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double Height) {

length = newLength;
breadth = newBreadth;
height = Height;
}

Box::~Box() {
}

double Box::GetVolume() {

return length * breadth * height;
}

void Box::SetLength(double len) {

length = len;
}

void Box::SetBreadth(double bre) {

breadth = bre;
}

void Box::SetHeight(double hei) {

height = hei;
}

// Overload + operator to add two Box objects.
Box Box::operator+(const Box& b) {

Box box;

box.length = this->length + b.length;
box.breadth = this->breadth + b.breadth;
box.height = this->height + b.height;
return box ;
} 

// int main() {

// Box Box1; // Declare Box1 of type Box
// Box Box2; // Declare Box2 of type Box
// Box Box3; // Declare Box3 of type Box
// double volume = 0.0; // Store the volume of a box here
// // box 1 specification

// Box1.SetLength(6);
// Box1.SetBreadth(7) ;
// Box1.SetHeight(5.0);

// // box 2 specification
// Box2.SetLength(12.0) ;
// Box2.SetBreadth(13.8);
// Box2.SetHeight (10.0) ;

// // volume of box 1
// volume = Box1.GetVolume() ;
// cout << "Volume of Box1 :
// << volume <
// // volume of box 2
// volume = Box2.GetVolume() ;
// cout << " Volume of Box2 : "<< volume <<endl;
// // Add two object as follows:
// Box3 = Box1 + Box2;
// // volume of box 3
// volume = Box3.GetVolume() ;
// cout << "Volume of Box3 :<< volume <
// return 0 ;
// }
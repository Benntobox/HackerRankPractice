//
//  main.cpp
//  BoxChallenge
//
//  Created by Benjamin Boyle on 9/21/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
private:
    int l, b, h;
public:
    Box() { l=0; b=0; h=0; }
    Box(int x, int y, int z) { l=x; b=y; h=z; }
    Box(Box const &box) { l=box.l; b=box.b; h=box.h; }
    
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    
    long long CalculateVolume() { long x=l, y=b, z=h; return x*y*z; }
    
    bool operator<(Box& b);
    friend ostream& operator<<(ostream& out, Box b);
    
};

bool Box::operator<(Box& b) {
    if (this->getLength() < b.getLength()) { return true; }
    else if (this->getBreadth() < b.getBreadth() and this->getLength() == b.getLength()) { return true; }
    else if (this->getHeight() < b.getHeight() and this->getLength() == b.getLength() and this->getBreadth() == b.getBreadth()) { return true; }
    else { return false; }
}

ostream& operator<<(ostream& out, Box b) {
    out << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
    return out;
}

int main()
{
    Box temp = Box(1039, 3749, 8473);
    cout << temp << endl;
    cout << temp.CalculateVolume() << endl;
    cout << 1039*3749*8473;
}

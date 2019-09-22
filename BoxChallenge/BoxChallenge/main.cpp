//
//  main.cpp
//  BoxChallenge
//
//  Created by Benjamin Boyle on 9/21/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <stdio.h>

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
    
};



int main()
{
    
}

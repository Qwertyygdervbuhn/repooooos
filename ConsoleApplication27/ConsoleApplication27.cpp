#include <iostream>

using namespace std;


class Class {
private:
    int numerator;  
    int denominator; 

public:
  
    Class() {
        numerator = 0;
        denominator = 1;
    }
   
    Class(int num, int denom) {
        numerator = num;

        if (denom == 0) {
            cout << "Error! denominator = 0!\n";
            denominator = 1; 
        }
        else {
            denominator = denom;
        }
    }
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
   
    Class obj1;
    obj1.display();
 
    Class obj2(3, 4);
    obj2.display();

    Class obj3(5, 0);
    obj3.display();

}


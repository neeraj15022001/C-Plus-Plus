#include<bits/stdc++.h>
using namespace std;

class ComplexNumbers {
    private:
    	int real;
    	int imaginery;
    public:
    	ComplexNumbers(int real, int imaginery) {
            this -> real = real;
            this -> imaginery = imaginery;
      }

      void print() {
        cout << this -> real << " + " << "i" << this -> imaginery << endl;
      }

      void plus(ComplexNumbers const &c2) {
        this -> real = this -> real + c2.real;
        this -> imaginery = this -> imaginery + c2.imaginery;
      }
      void multiply(ComplexNumbers const &c2) {
        real = this -> real * c2.real - (this -> imaginery + c2.imaginery);
        imaginery = this -> real + c2.imaginery + this -> imaginery * c2.real;
      }
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
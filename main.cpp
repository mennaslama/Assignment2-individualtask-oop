#include <iostream>

using namespace std;

class Complex
{
   public:
     double real; //realpart
     double imaginary; //imaginbary part

   public:
   Complex()
   {
     real = 0.0;
     imaginary = 0.0;
   }
     Complex(double real, double imaginary)
   {
       this->real=real;
       this->imaginary=imaginary;
   }

      bool operator == (const Complex &otherComplex) const;
     friend Complex operator + (const Complex &, const Complex &);
     friend Complex operator - (const Complex &, const Complex &);
     friend Complex operator * (const Complex &, const Complex &);
    friend ostream& operator << (ostream &out, const Complex &a);
    friend istream& operator >> (istream &in, const Complex &a);

};



bool operator == (const Complex &a, const Complex &b)
   {
     return (a.real == b.real && a.imaginary == b.imaginary);
   }

     Complex operator + (const Complex &a, const Complex &b)
   {
     Complex add;
     add.real = a.real + b.real;
     add.imaginary= a.imaginary + b.imaginary;
     return add;
    }

     Complex operator - (const Complex &a, const Complex &b)
     {
        Complex substract;
        substract.real = a.real - b.real;
        substract.imaginary= a.imaginary- b.imaginary;
        return substract;
     }

   Complex   operator * (const Complex &a, const Complex &b)
     {
        Complex multi;
         multi.real=(a.real*b.real)- (a.imaginary*b.imaginary);
         multi.imaginary= (a.real*b.imaginary)+(a.imaginary*b.real);
         return multi;
       }


       ostream & operator << (ostream &out, const Complex &a)
       {
         out << a.real << " +" << a.imaginary<< "i";
         return out;
       }
       istream& operator >>(istream& in, Complex &a){
         in >> a.real >> a.imaginary ;
       return in;
}



int main ()
{
    Complex op1, op2,sum, result;
            cout << "\nInput real part for the first num: " << endl;
            cin >> op1.real;
            cout << "Input imaginary part for the first num: " << endl;
            cin >> op1.imaginary;
            cout << "Input real part for the second num: " << endl;
            cin >> op2.real;
            cout << "Input imaginary part for the second num: " << endl;
            cin >> op2.imaginary;
            cout << "\nThe sum is ";
             if(choose==1){
           sum= op1+op2;
            cout << sum;
 };

           // result.print();
            cout << "\nThe subtract is ";
            //result.subtract(op1, op2);
            //result.print();

}

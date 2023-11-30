class Complex {
    double real, imag;
    double mag, theta;
    bool polar;

    public:
    Complex() {real = 0; imag = 0; polar = false;}
    Complex(double r,double i) {real = r; imag = i; polar = false;}
    
};
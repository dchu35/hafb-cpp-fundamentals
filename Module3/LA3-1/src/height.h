#pragma once


class Height
{
    private:
        double inches_;

    public:
        Height() {inches_ = 0;} // make sure to close your statement in the curlys
        Height(double inches) : inches_(inches){}
        ~Height() {}
        // Setter & Getter
        double inches() const {return inches_;}
        void set_inches(double inches) {inches_ = inches;}
        // Other methods
        friend void print_feet(Height h1);

};

#pragma once

class Distance
{
private:
    int feet_;
    float inches_;

public:
    Distance() : feet_(0), inches_(0) {}
    Distance(int feet, float inches) : feet_(feet), inches_(inches) {}
    ~Distance() {};
    
    // Getter & Setter
    int feet() const{return feet_;}
    int set_feet(int feet) {feet_= feet;}

    float inches() const{return inches_;}
    int set_inches(float inches) {inches_= inches;}
    
    // Other Methods
    void ShowDist() const;
    Distance operator + (Distance d1) const;
};


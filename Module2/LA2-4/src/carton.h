#pragma once

// Create your first class

class Carton // Convention states that classes created start with uppercase.
{
    private:   // how you maintain the internal data, cannot be directly accessed.
        double length_;  // convention states that private variables end in underscore.
        double width_;
        double height_;

    public:   // how public sees our class.
        // Static constants : creates it once and that's it...
        static const double kMaxSize;
        static const double kMinLength;
        static const double kMinWidth;
        static const double kMinHeight;

        // Constructor: builds/creates your object, same name as class.
        Carton();
        Carton(double length, double width, double height); 
        ~Carton(); // Deconstructs classes when no longer in scope (no longer needed)
        


        // Getters
        double length();  // should return a length value.
        double width();   // should return a width value.
        double height();  // should return a height value.

        // Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);

        // Other methods
        void ShowInfo();
        void SetMeasurements(double length, double width, double height);

};          // classes must end with a semicolon.

// A lesson about public/private classes and setters/getters.
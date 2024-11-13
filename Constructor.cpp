
#include <iostream>
using namespace std;

// Class to demonstrate constructor and destructor
class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize the box
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Constructor called: Box created with dimensions (" 
             << length << ", " << width << ", " << height << ")" << endl;
    }

    // Destructor to clean up when the object is destroyed
    ~Box() {
        cout << "Destructor called: Box destroyed." << endl;
    }

    // Function to calculate and display the volume of the box
    double volume() {
        return length * width * height;
    }
};

int main() {
    // Creating an object of the class Box
    Box box1(5.0, 3.0, 2.0);
    
    // Display the volume of the box
    cout << "Volume of the box: " << box1.volume() << endl;

    // The destructor will be automatically called when the object goes out of scope
    return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc rectangle.cpp -lstdc++ -lm -o rect

This will create an executable named 'rect'. To run the executable, run this command:

    ./rect

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/

class rectangle {
    private:
        int width = 0;
        int height = 0;
    
    public:
        void set_width(int);
        int get_width() const;
        void set_height(int);
        int get_height() const;
        int calculate_perimeter();
        int calculate_area();
        string draw_rectangle();
};

void rectangle::set_width(int width) {
    this->width = width;
}

int rectangle::get_width() const {
    return this->width;
}

void rectangle::set_height(int height) {
    this->height = height;
}

int rectangle::get_height() const {
    return this->height;
}

int rectangle::calculate_perimeter() {
    return 2*this->width + 2*this->height;
}

int rectangle::calculate_area() {
    return this->width*this->height;
}

string rectangle::draw_rectangle() {
    string rect = "";
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            if (i == 0 || i == this->height-1) {
                rect += "* ";
            } else {
                if (j == 0 || j == this->width-1) {
                    rect += "* ";
                } else {
                    rect += "  ";
                }
            }
        }
        rect += "\n";
    }

    return rect;
}

int main() {
    char cont = 'y';
    vector<rectangle> rectangles;
    int height, width;

    cout << "Rectangle Calculator" << endl << endl;

    do {
        cout << "Height:\t\t";
        cin >> height;

        cout << "Width:\t\t";
        cin >> width;

        rectangle r;
        r.set_height(height);
        r.set_width(width);

        rectangles.push_back(r);

        int perimeter = r.calculate_perimeter();
        int area = r.calculate_area();
        string rect = r.draw_rectangle();

        cout << "Perimeter:\t" << perimeter << endl;
        cout << "Area:\t\t" << area << endl;
        cout << rect << endl;

        cout << endl << "Continue? (y/n): ";
        cin >> cont;
        cout << endl;
    } while (cont == 'y');

    for (rectangle r : rectangles) {
        string rect = r.draw_rectangle();
        cout << rect << endl;
    }

    cout << "Bye!" << endl;

    return 0;
}
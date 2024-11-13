#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    // Konstruktori
    Rectangle(double width, double height);

    // Metodit
    double getArea() const;
    double getCircumference() const;
    void setWidth(double width);
    void setHeight(double height);

private:
    double width;
    double height;
};

#endif

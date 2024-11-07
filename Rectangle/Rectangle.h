#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle(double width, double height);
    double getArea() const;
    double getCircum() const;
    void setWidth (double newWidth);
    void setHeight (double newHeight);

private:
    double width;
    double height;
};

#endif // RECTANGLE_H

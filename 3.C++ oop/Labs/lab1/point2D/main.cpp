#include <iostream>

class Point {
    private:
        int x, y;

    public:
        Point() : x(0), y(0) {}

        void setX(int x) {
            this->x = x;
        }

        void setY(int y) {
            this->y = y;
        }

        void print() const {
            std::cout << "Point (" << x << ", " << y << ")\n";
        }
};

int main() {
    Point p;
    p.setX(5);
    p.setY(10);
    p.print();

    return 0;
}

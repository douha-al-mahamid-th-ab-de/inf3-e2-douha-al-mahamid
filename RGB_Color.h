#ifndef RGB_COLOR_H
#define RGB_COLOR_H

class RGB_Color {
public:
    RGB_Color(int r, int g, int b);
    double luminance();

private:
    int r{0};
    int g{0};
    int b{0};
};

#endif /* RGB_COLOR_H */


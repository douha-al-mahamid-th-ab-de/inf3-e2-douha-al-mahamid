#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "RGB_Color.h"

TEST_SUITE_BEGIN("RGB_Color");
TEST_CASE("intensity of RGB 100,0,0") 
{
    RGB_Color a_RGB_Color{100,0,0};
    CHECK(a_RGB_Color.luminance()==29.9);
}
TEST_CASE("intensity of RGB 9,90,166") 
{
    RGB_Color a_RGB_Color{9,90,166};
    CHECK(a_RGB_Color.luminance()==74.445);
}
TEST_SUITE_END();

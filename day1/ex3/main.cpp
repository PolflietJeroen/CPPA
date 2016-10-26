#include <cstdio>

struct Kilograms{
    long double value;
    constexpr Kilograms(long double d) : value(d){}
    friend constexpr Kilograms operator+(Kilograms&& a, Kilograms&& b);
};

constexpr  Kilograms operator"" _kg(long double const d){
    return Kilograms (d);
}
constexpr  Kilograms operator"" _lb(long double d){
    return Kilograms (d * 0.45359237);
}
constexpr Kilograms operator+(Kilograms&& a, Kilograms&& b){
    return Kilograms(a.value + b.value);
}
int main(){
    auto w = 70.5_kg + 100.0_lb;
    printf( "%f\n",(double)w.value);
}

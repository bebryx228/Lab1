#include <chrono>
#include <iostream>

int shirEuklid( int a , int b , int &x , int &y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    int x1 , y1;
    int c = shirEuklid(b % a , a , x1 , y1);

    x = y1 - (b / a)*x1;
    y = x1;
    return c;
}
int main()
{
    int a , b , c , x , y;
    std::cout << "Введите а и b";
    std::cin >> a >> b ;
    c = shirEuklid(a , b , x ,y);
    std::cout << "Входные данные: " << a << " " << b << std::endl;
    std::cout << "Выходные данные: " << c << " " << x << " " << y << std::endl;
    std::cout << "Резников Герман Евгеньевич 020303-АИСа-о25" << std::endl;
    return 0;
}



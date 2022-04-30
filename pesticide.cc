#include <bits/stdc++.h>
using namespace std;
int main()
{
    double area_field; // area of field
    double area_plant; // avg area of plant
    int no_plant;      // number of plants in area
    int op;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    printf("Enter area of field in acre: ");
    cin >> area_field;
    printf("Enter the avg surface area of plant: \n");
    cin >> area_plant;
    printf("Enter the number of plants: ");
    cin >> no_plant;
    printf("Enter the amount of pesticide used on 1 acre in ml: ");
    double volume;
    cin >> volume;

    area_field = area_field * 4046.86;

    double Volume_final = volume / area_field;

    int Z = area_field * no_plant;

    int A = Z * Volume_final;

    double height;
    double height_change;
    double width;
    double height_final;
    printf("Enter the height of the plant:");
    cin >> height;
    printf("Enter the width of the plant:");

    cin >> width;
    std::cout << "If the height of plant is more or less than avg plant:" << std::endl;
    std::cout << "1.More\n2.Less \n3.Same height" << std::endl;
    cin >> op;
    if (op != 3)
    {
        std::cout << "Enter the change in height" << std::endl;
        cin >> height_change;
    }
    else
    {
        height_final = height;
    }

    switch (op)
    {
    case 1:
        height_final = height + height_change;
        break;
    case 2:
        height_final = height - height_change;

    default:
        break;
    }
    std::cout << "Final Height of plant: " << height_final << "m" << std::endl;

    double area_plant_final = height_final * width;

    double A_final = Z * Volume_final;
    A_final = A_final / 1000;

    std::cout << "The amout of pesticide use for 1 plant is " << A_final << "ml" << std::endl;

    return 0;
}
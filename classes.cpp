#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Fruit
{
private:
    string fruitName;
    double fruitWeight;

public:
    Fruit();
    string getFruitName() { return fruitName; }
    double getFruitWeight() { return fruitWeight; }
    void setFruitName(string);
    void setFruitWeight(double);

};

Fruit::Fruit()
{
    fruitName = "Unknown";
    fruitWeight = -1;
}

void Fruit::setFruitName(string name)
{
    fruitName = name;
    return;
}

void Fruit::setFruitWeight(double weight)
{
    fruitWeight = weight;
    return;
}

int main()
{
    Fruit f;

    cout << f.getFruitName() << endl;
    cout << f.getFruitWeight() << endl;

    f.setFruitName("Apple");
    f.setFruitWeight(20.5);

    cout << endl;

    cout << f.getFruitName() << endl;
    cout << f.getFruitWeight() << endl;

    f.setFruitName("Banana");
    f.setFruitWeight(26.5);

    cout << endl;

    cout << f.getFruitName() << endl;
    cout << f.getFruitWeight() << endl;

    return 0;
}
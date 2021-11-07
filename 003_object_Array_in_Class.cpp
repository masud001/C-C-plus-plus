#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter the item ID of a product 🐱 " << endl;
    cin >> itemId[counter];
    cout << "Enter the item Price of a product 🐱 " << endl;
    cin >> itemPrice[counter];
    counter++;
};

void Shop::displayPrice(void)
{

    cout << "this is display function " << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "item id : " << itemId[i] << endl;
        cout << "product price : " << itemPrice[i] << endl;
    }
};

int main()
{

    Shop m_and_m;
    m_and_m.initCounter();
    m_and_m.setPrice();
    m_and_m.setPrice();
    m_and_m.setPrice();
    m_and_m.displayPrice();

    return 0;
}
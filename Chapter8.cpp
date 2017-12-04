#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

struct CandyBar
{
    char* brand;
    float weight;
    int calories;
};

void showMenu();
void ignore();

template<typename T>
void displayArr(T arr[5]);

void candyBarCaller();
void showCandyBar(CandyBar&);
void fillCandyBar(CandyBar& bar, char* brand = "Millennium Munch", double weight = 2.85, int calories = 350);

void upperCaseCaller();
void upperCase(string&);

void max5Caller();
template<typename T>
T max5(T arr[5]);

void maxNCaller();
template<typename T>
T maxN(T arr[], int len);

int main()
{
    int choice;
    string input;
    showMenu();
    while (cin >> input)
    {
        if (input == "q" || input == "Q")
            break;
        char cinput = input[0];
        if (!(isdigit(cinput)))
        {
            ignore();
            cout << "Please enter a valid input\n";
            showMenu();
            continue;
        }
        choice = cinput - '0';
        switch (choice)
        {
        case 0: candyBarCaller(); showMenu();  break;
        case 1: upperCaseCaller(); showMenu(); break;
        case 2: max5Caller(); showMenu(); break;
        case 3: maxNCaller(); showMenu(); break;
        default: cout << "Please enter a valid input\n"; showMenu(); break;
        }
    }
    return 0;
}


template<typename T>
void displayArr(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
        if (i != len - 1)
            cout << ", ";
    }
}


void ignore()
{
    cin.clear();
    cin.ignore(100, '\n');
}


void showMenu()
{
    cout << "0) CandyBar\n1) upperCase\n2) max5\n3) maxN\nq) Quit\n>";
}


void candyBarCaller()
{
    CandyBar bar;
    fillCandyBar(bar);
    cout << "Default CandyBar: ";
    showCandyBar(bar);
    fillCandyBar(bar, "Generic Brand", 1.5, 200);
    cout << "\nFilled CandyBar: ";
    showCandyBar(bar);
    cout << "\n";
}


void showCandyBar(CandyBar& bar)
{
    cout << "Brand: " << bar.brand << "\n";
    cout << "Weight: " << bar.weight << "\n";
    cout << "Calories: " << bar.calories << "\n";
}


void fillCandyBar(CandyBar& bar, char* brand, double weight, int calories)
{
    bar.brand = brand;
    bar.weight = weight;
    bar.calories = calories;
}


void upperCaseCaller()
{
    string input;
    cout << "Enter a string (q to quit): ";
    ignore();
    while (std::getline(cin, input))
    {
        if (input == "q" || input == "Q")
            break;
        upperCase(input);
        cout << "Enter a string (q to quit): ";
    }
}


void upperCase(string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << (char)toupper(str[i]);
    }
    cout << "\n";
}


void max5Caller()
{
    int iarr[5]{ 1, 2, 3, 4, 3 };
    cout << "Max of ";
    displayArr(iarr, 5);
    cout << ": " << max5(iarr) << "\n";
    double darr[5]{ 5.5, 2.3, 5.4, 1.1, 10.4 };
    cout << "Max of ";
    displayArr(darr, 5);
    cout << ": " << max5(darr) << "\n";
}


template<typename T>
T max5(T arr[5])
{
    T max{};
    for (int i = 0; i < 5; i++)
    {
        max = (arr[i] > max) ? arr[i] : max;
    }
    return max;
}


void maxNCaller()
{
    int iarr[10]{ 1, 2, 3, 4, 3, 9, 8, 2, 7, 3 };
    cout << "Max of ";
    displayArr(iarr, 10);
    cout << ": " << maxN(iarr, 10) << "\n";
    double darr[7]{ 1.5, 2.0, 5.4, 1.1, 1.4, 1.2, 3.5 };
    cout << "Max of ";
    displayArr(darr, 7);
    cout << ": " << maxN(darr, 7) << "\n";
}


template<typename T>
T maxN(T arr[], int len)
{
    T max{};
    for (int i = 0; i < len; i++)
    {
        max = (arr[i] > max) ? arr[i] : max;
    }
    return max;
}
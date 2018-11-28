#include <iostream>

// Arrays
std::string salsaType[5] = {"mild", "medium", "sweet", "hot", "zesty"};
int numOfJars[5];
int count = 0;

// Input Validation for User Prompts
void inputValid()
{
    while (numOfJars[count] < 0) {
        std::cout << "Error! Number of jars sold cannot be less than 0.\n"
                     "Enter the correct number of jars sold: ";
        std::cin >> numOfJars[count];
    }
    count +=1;
}


int main() {

    // Prompts
    std::cout << "Enter the number of jars sold for " << salsaType[0] << ": ";
    std::cin >> numOfJars[0];
    inputValid();

    std::cout << "Enter the number of jars sold for " << salsaType[1] << ": ";
    std::cin >> numOfJars[1];
    inputValid();

    std::cout << "Enter the number of jars sold for " << salsaType[2] << ": ";
    std::cin >> numOfJars[2];
    inputValid();

    std::cout << "Enter the number of jars sold for " << salsaType[3] << ": ";
    std::cin >> numOfJars[3];
    inputValid();

    std::cout << "Enter the number of jars sold for " << salsaType[4] << ": ";
    std::cin >> numOfJars[4];
    inputValid();

    // Sales Report
    std::cout << "Number of jars of mild salsa sold: "
    << numOfJars[0] << std::endl;

    std::cout << "Number of jars of medium salsa sold: "
    << numOfJars[1] << std::endl;

    std::cout << "Number of jars of sweet salsa sold: "
    << numOfJars[2] << std::endl;

    std::cout << "Number of jars of hot salsa sold: "
    << numOfJars[3] << std::endl;

    std::cout << "Number of jars of zesty salsa sold: "
    << numOfJars[4] << std::endl;

    // Total Sales
    std::cout << "Total Sales: " << numOfJars[0] +
                                    numOfJars[1] +
                                    numOfJars[2] +
                                    numOfJars[3] +
                                    numOfJars[4] << std::endl;

    // Highest Selling Salsa
    if (numOfJars[0] > numOfJars[1] &&
        numOfJars[0] > numOfJars[2] &&
        numOfJars[0] > numOfJars[3] &&
        numOfJars[0] > numOfJars[4])
    {
        std::cout << "Highest Selling Salsa: " << salsaType[0] << std::endl;
    }
    else if (numOfJars[1] > numOfJars[0] &&
             numOfJars[1] > numOfJars[2] &&
             numOfJars[1] > numOfJars[3] &&
             numOfJars[1] > numOfJars[4])
    {
        std::cout << "Highest Selling Salsa: " << salsaType[1] << std::endl;
    }
    else if (numOfJars[2] > numOfJars[0] &&
             numOfJars[2] > numOfJars[1] &&
             numOfJars[2] > numOfJars[3] &&
             numOfJars[2] > numOfJars[4])
    {
        std::cout << "Highest Selling Salsa: " << salsaType[2] << std::endl;
    }
    else if (numOfJars[3] > numOfJars[0] &&
             numOfJars[3] > numOfJars[1] &&
             numOfJars[3] > numOfJars[2] &&
             numOfJars[3] > numOfJars[4])
    {
        std::cout << "Highest Selling Salsa: " << salsaType[3] << std::endl;
    }
    else
    {
        std::cout << "Highest Selling Salsa: " << salsaType[4] << std::endl;
    }


    // Lowest Selling Salsa
    if (numOfJars[0] < numOfJars[1] &&
        numOfJars[0] < numOfJars[2] &&
        numOfJars[0] < numOfJars[3] &&
        numOfJars[0] < numOfJars[4])
    {
        std::cout << "Lowest Selling Salsa: " << salsaType[0] << std::endl;
    }
    else if (numOfJars[1] < numOfJars[0] &&
             numOfJars[1] < numOfJars[2] &&
             numOfJars[1] < numOfJars[3] &&
             numOfJars[1] < numOfJars[4])
    {
        std::cout << "Lowest Selling Salsa: " << salsaType[1] << std::endl;
    }
    else if (numOfJars[2] < numOfJars[0] &&
             numOfJars[2] < numOfJars[1] &&
             numOfJars[2] < numOfJars[3] &&
             numOfJars[2] < numOfJars[4])
    {
        std::cout << "Lowest Selling Salsa: " << salsaType[2] << std::endl;
    }
    else if (numOfJars[3] < numOfJars[0] &&
             numOfJars[3] < numOfJars[1] &&
             numOfJars[3] < numOfJars[2] &&
             numOfJars[3] < numOfJars[4])
    {
        std::cout << "Lowest Selling Salsa: " << salsaType[3] << std::endl;
    }
    else
    {
        std::cout << "Lowest Selling Salsa: " << salsaType[4] << std::endl;
    }

    return 0;
}
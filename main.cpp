#include <iostream>

struct accounts{

    int rnum { };
    int anum { };


};


int main() {
    accounts user;
    user.rnum = 838838838;
    user.anum = 123456789;
    int Routnum{ };
    int Accnum{ };
    int choice{ };
    int balance{0};

    std::cout << "***bank app***" << "\n";
    std::cout << "Please login" << "\n";
    std::cout << "Routing number: ";
    std::cin >> Routnum;
    std::cout << "\n" << "Account number: ";
    std::cin >> Accnum;
    if (Routnum != user.rnum || Accnum != user.anum)
        std::cout << "Incorrect details" << "\n";
    else
    {
        std::cout << "Details correct" << "\n";
        std::cout << "Please choose an option" << "\n";
        std::cout << "[1] Balance" << "\n" << "[2] Logout" << "\n";
        std::cin >> choice;

    }
    if (choice == 1)
        std::cout << "\n" << "Your balance is: " << balance;
    else if (choice == 2)
        std::cout << "\n" << "Logging out";
    return 0;

}

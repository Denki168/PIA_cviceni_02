#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

 int main ()
{
    std::cout << "Jmeno: ";
    std::string jmeno;
    std::cin >> jmeno;

    std::cout << "Prijmeni: ";
    std::string prijmeni;
    std::cin >> prijmeni;

    std:: cout << "Jmeno a prijmeni: " << jmeno << " "<< prijmeni << "\n";

    std::cout << "Vek: ";
    int         vek;
    std::cin >> vek;

    if (vek < 18)
    {
        std::cout << "Nesplnen minimalni vekovy limit ( 18 let )\n";
    }
    else if (vek > 60)
    {
        std::cout << "Nesplnen maximalni vekovy limit ( 60 let )\n";
    }
    else
    {
        std::cout << "Vek je " << vek << " let\n";
    }

    std::cout << "Vyska: \n";
    double      vyska;
    std::cin >>  vyska;

    if ( vyska < 100 )
    {
        std::cout << "Moc nizky\n";
    }
    else if ( vyska> 220 )
    {
        std::cout << "Moc vysoky\n";
    }
    else
    {
        std::cout << "Vyska je " << vyska << "\n";
    }

    std::cout << "Zakladni skola  [1]\n";
    std::cout << "Stredni skola   [2]\n";
    std::cout << "Vysoka skola    [3]\n";

    std::cout << "Vzdelani: ";
    int     vzdelani;
    std::cin >> vzdelani;

    if ( vzdelani == 1 )
    {
        std::cout << "Vzdelani je zakladna skola\n";
    }
    else if ( vzdelani == 2 )
    {
        std::cout << "Vzdelani je stredna skola\n";
    }
    else if ( vzdelani == 2 )
    {
        std::cout << "Vzdelani je vysoka skola\n";
    }
    else
    {
        std::cout << "Nezname vzdelani\n";
    }


    return 0;
}

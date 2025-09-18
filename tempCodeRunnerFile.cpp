//semana 5, ex 3
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main () {
    int num, mersenne, i= 0; 
//    mersenne = num;

    cin >> num;

    do {
        mersenne = (pow(2, i) - 1);
        i++;
        cout << mersenne << endl;
    } while (mersenne <= num);

    return 0;
}

/* e se, e me escute aquiKKKKK eu colocasse o mersenne como o num
unico problema q eu teria que usar log eu acho



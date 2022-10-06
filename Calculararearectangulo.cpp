#include <iostream>
// Librería

void resuelveCaso () {
    int l1, l2;
    std::cin >> l1 >> l2;
    int area = l1*l2;
    std::cout << area << '\n';
}
int main () {
    int numCasos;
    std::cin >> numCasos;
    for(int i=1; i<=numCasos; ++i) resuelveCaso();
    return 0;
}
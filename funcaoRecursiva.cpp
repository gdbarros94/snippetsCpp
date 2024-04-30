#include <iostream>

int fatorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * fatorial(n - 1);
        }
    }

int main(){
    int num;
    std::cout << "digite um numero \n";
    std::cin >> num;
    std::cout << "Fatorial de " << num << " é: " << fatorial(num) << std::endl;
    
    return 0;


}

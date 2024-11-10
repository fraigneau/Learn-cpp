#include <iostream>
#include <string>
#include <bitset>

std::string CharEnBinaire(char c) {
    std::string binaire;
    for (int i = 3; i >= 0; i--) {
        binaire += ((c >> i) & 1) ? '1' : '0';
    }
    return binaire;
}

int BinaireEnInt(std::string str) {
    std::bitset<4> bits(str);
    return static_cast<int>(bits.to_ulong());
}

int main() {
    char input[] = "123546";
	int x = 0;

    for (int i = 0; i < strlen(input); i++) {
		int y = BinaireEnInt(CharEnBinaire(input[i])); // recup 
		x = x * 10 + y;
	}
	std::cout << "Le nombre entier correspondant est : " << x << std::endl;
    return 0;
}

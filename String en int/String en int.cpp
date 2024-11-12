#include <iostream>
#include <string>

int main() {
	int x = 0;
	char input[] = "123456";
	if (strlen(input) == 0 && strlen(input) > 6) { return 1; }
    for (int i = 0; i < strlen(input); i++) {
		if ((input[i] & 0x30) != 0x30) {
			std::cout << "Le caractere " << input[i] << " n'est pas un chiffre" << std::endl;
			return 2;
		}
		else {
			x = x * 10 + (input[i] & 0x0F);
		}
    }
	std::cout << "Le nombre entier correspondant est : " << x << std::endl;
    return 0;
}
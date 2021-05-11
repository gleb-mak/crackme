#include <iostream>
#include <string>

int main()
{
	std::string login;
	std::cout << "Login: ";
	std::cin >> login;
	int sum = 0;
	for (int i = 0; i < login.length(); ++i)
	{
		if (login[i] < 'A' || login[i] > 'z')
		{
			std::cout << "incorrect login";
			return 0;
		}
		if (login[i] > 'Z')
		{
			login[i] -= 0x20;
		}
		sum += login[i];
	}
	sum ^= 0x5678;
	sum ^= 0x1234;
	std::string password = std::to_string(sum);
	std::cout << "Password: " << password << "\n";
}

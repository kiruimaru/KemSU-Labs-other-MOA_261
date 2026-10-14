#include <iostream>

int calculateFare(int base_price) {
	int fare = base_price + 150; // Опция: детское кресло
	fare = fare * 2 + 300; // Ливень за окном: тариф х2
	// [МЕСТО ДЛЯ ПОВЫШАЩИХ КОЭФФИЦЕНТОВ]
	return fare;
}
int main(){
	int base_price = 300;
	std::cout << "Базовый тариф поездки: " << base_price << " руб." << std::endl;
	std::cout << "Итоговая цена для пассажира: " << calculateFare(base_price) << " руб." << std::endl;
	std::cout << "[МУЗЫКА В САЛОНЕ] Играет радио Шансон." << std::endl;
	return 0;
}

//radio init

//volume max

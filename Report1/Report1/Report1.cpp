#include <iostream>
using namespace std;

class Bank {
public:
	

};

void SoftBank() {

}


int main() {
	float year;
	//몇년동안
	float startMoney;
	//최초금액
	float money = 0;
	//금액
	long long int endMoney = 0;
	//최종금액
	float interestRate = 0.0355;
	//이자율
	float IITR = 0.154f;
	//이자소득세율
	cout << "매달 넣을 금액을 적어주세요" << endl;
	cin >> startMoney;
	cout << "몇년동안 넣을지 적어주세요" << endl;
	cin >> year;

	for (float i = year * 12; i > 0; i--) {
		money += (startMoney * interestRate * (i *(year / (12 * year))));
	}
	endMoney = (int(money) + (startMoney * year * 12));	
	cout << "비과세 : " << endMoney << "\n";
	endMoney = (int(money * (1 - IITR)) + (startMoney * year * 12));
	cout << "일반세율 : " << endMoney;
}
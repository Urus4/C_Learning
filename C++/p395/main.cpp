#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public :
	TV() { size = 20; }
	TV(int size) { this->size = size; }							// SmartTV의 생성자 --> WideTV의 생성자를 거친 size의 값이 최종적으로 TV의 생성자의 인수로 들어감
	int getSize() { return size; }								
};

class WideTV : public TV {
	bool videoIn;
public:
	WideTV(int size, bool videoTV) : TV(size) {					// SmartTV의 생성자로부터 받은 size값을 그대로 TV의 생성자로 전달
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {		// size 로 받은 값이 WideTV의 생성자로 값 전달
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	SmartTV htv("192.0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;
	cout << "videoIn= " << boolalpha <<htv.getVideoIn()<< endl;	// bool의 값을 0과 1이 아니라, true와 false로 출력해 달라는 뜻
	cout << "IP = " << htv.getIpAddr() << endl;

}
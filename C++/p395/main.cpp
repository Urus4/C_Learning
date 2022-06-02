#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public :
	TV() { size = 20; }
	TV(int size) { this->size = size; }							// SmartTV�� ������ --> WideTV�� �����ڸ� ��ģ size�� ���� ���������� TV�� �������� �μ��� ��
	int getSize() { return size; }								
};

class WideTV : public TV {
	bool videoIn;
public:
	WideTV(int size, bool videoTV) : TV(size) {					// SmartTV�� �����ڷκ��� ���� size���� �״�� TV�� �����ڷ� ����
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {		// size �� ���� ���� WideTV�� �����ڷ� �� ����
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	SmartTV htv("192.0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;
	cout << "videoIn= " << boolalpha <<htv.getVideoIn()<< endl;	// bool�� ���� 0�� 1�� �ƴ϶�, true�� false�� ����� �޶�� ��
	cout << "IP = " << htv.getIpAddr() << endl;

}
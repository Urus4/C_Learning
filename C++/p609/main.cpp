#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	//const char* firstFile = "c:\\temp\\student.txt";
	//const char* secondFile = "c:\\windows\\system.ini";

	fstream fout(argv[1], ios::out | ios::trunc);   // 쓰기 모드로 파일 열기 ( ios::out --> 쓰기모드 , app --> 자동으로 파일 포인터가 파일 끝으로 옮겨짐)
	if (!fout) {									// 열기 실패 검사          ios::trunc --> 파일을 열 때, 파일이 존재하면 파일의 내요을 모두 지워 크기를 0으로 만든다)
		cout << argv[1] << " 열기 오류";
		return 0;
	}

	fstream fin(argv[2], ios::in | ios::binary);	// 읽기 모드로 파일 열기, 바이너리로 읽어와야지 개행문자를 읽어올때 2바이트( 캐리지리턴과, 피드라인)로 읽어오기때문에
													// 소스의 밑에 단에서 1바이트씩 읽어오는 것을 정확히 읽어올 수 있다.
	if (!fin) {							// 열기 실패 검사
		cout << argv[2] << " 열기 오류";
		return 0;
	}

	int c;
	int count = 0;
	while ((c = fin.get()) != EOF) {	// 파일 끝까지 문자 읽기
		fout.put(c);
		count++;							// 읽은 문자 기록
	}
	cout << "file size:" << count;
	fin.close();						// 입력 파일 닫기
	fout.close();						// 출력 파일 닫기
}
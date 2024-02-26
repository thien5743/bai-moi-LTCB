#include <iostream>
using namespace std;
int tinhtong(int so1, int so2) {
	return so1 + so2;
}
int tinhhieu(int so1, int so2) {
	return so1 - so2;
}
int tinhtich(int so1, int so2) {
	return so1 * so2;
}
int tinhthuong(int so1, int so2) {
	return so1 / so2;
}



int main() {
	float so1, so2, ketqua;
	cout << " CHUONG TRINH TINH TONG\n";
	cout << " NHAPSO THU NHAT:";
	cin >> so1;
	cout << "NHAP SO THU HAI:";
	cin >> so2;
	ketqua = tinhtong(so1, so2);
	//suat du lieu 
	cout << so1 << "+" << so2 << "=" << ketqua << endl;
	cout << so1 << "-" << so2 << "=" << ketqua << endl;
	cout << so1 << "*" << so2 << "=" << ketqua << endl;
	if (so2 != 0) {
		ketqua(float) so1 / so2;
		cout << so1 << "/" << so2 << "=" << ketqua << endl;
	}else {
		cout << " khong the chia" << so1 << "cho 0\n";
		return 0;
	}

	


}

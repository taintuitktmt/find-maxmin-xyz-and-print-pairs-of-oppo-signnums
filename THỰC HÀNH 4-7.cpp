//Nhập từ bàn phím 3 số thực x, y, z
//1 - Tìm số lớn nhất trong 3 số x, y, z
//2 - Tìm số bé nhất trong 3 số x, y, z
//3 - Kiểm tra xem cả 3 số có cùng dấu hay ko ?
//4 - In ra các cặp số trái dấu nhau

#include <iostream>
using namespace std;

int main()
{
	float x, y, z;
	cout << "Nhap so thuc x: "; cin >> x;
	cout << "Nhap so thuc y: "; cin >> y;
	cout << "Nhap so thuc z: "; cin >> z;

	cout << "Ket qua 1: So lon nhat la: ";
	if (x > y && x > z) cout << x;
	else if (y > x && y > z) cout << y;
	else cout << z;


	cout << "Ket qua 2: So nho nhat la: ";
	if (x < y && x < z) cout << x;
	else if (y < x && y < z) cout << y;
	else cout << z;

	cout << "Ket qua 3: ";
	if (x > 0 && y > 0 && z > 0 || x < 0 && y < 0 && z < 0) cout << "Ba so cung dau";
	else cout << "Ba so trai dau";

	//Câu 4: áp dụng tính chất: 2 so trái dấu thì tích của chúng bẻ hơn 0

	cout << "Ket qua 4: ";
	bool tontaicaptraidau = false;
	if (x * y < 0)
	{
		cout << "(" << x << "," << y << ")";	//mục đích: đánh dấu đã tìm dc cặp trái dấu hay chưa, nếu ch thì vẫn giữ nguyên giá trị false ban đầu
		tontaicaptraidau = true;
	}
	if (y * z < 0)
	{
		cout << "(" << y << "," << z << ")";
		tontaicaptraidau = true;
	}
	if (x * z < 0)
	{
		cout << "(" << x << "," << z << ")";
		tontaicaptraidau = true;
	}
	if (!tontaicaptraidau) cout << "khong co cap so trai dau";

}
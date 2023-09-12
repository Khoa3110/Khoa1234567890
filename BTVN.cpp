#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {
 int MaSinhVien, Tuoi, Ten, DiaChi;
 printf("\nNhap Ma Sinh Vien Cua Ban la ");
 scanf("\n%d", &MaSinhVien);
  printf("\nNhap Tuoi Cua Ban La  ");
 scanf("\n%d", &Tuoi);
  printf("\nNhap Ten Cua Ban la ");
 scanf("\n%d", &Ten);
  printf("\nNhap Dia Chi Cua Ban la ");
 scanf("\n%d", &DiaChi);
 printf("\nTen la %d, %d tuoi, co ma SV la %d, dia chi la %d", Ten, Tuoi, MaSinhVien, DiaChi);
 printf("\n=============================");
 printf("\n| Ten    %d       | Tuoi %d   | Mã SV  %d   | Ðia chi  %d      |", Ten, Tuoi, MaSinhVien, DiaChi);
 
		
		
		
	return 0;
}


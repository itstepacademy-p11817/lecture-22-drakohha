#include <iostream>
#include <time.h>
#include <stdlib.h>

void fun_massin(int* a, int* size) {
	for (int i = 0; i < *size; i++) {
		a[i] = rand() % 20 - 9 ;
	}

}


void fun_massout(int* a, int* size) {
	std::cout << "\n" << "Vuhodnoi massiv = " << "\n";
	for (int i = 0; i < *size; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
}

void fun_masswork(int* a, int* size, int* summ, int* proiz) {
	*proiz = 1;
	for (int i = 0; i < *size; i++) {
		*summ += a[i];
		*proiz *= a[i];
	}
}

void fun_masswork_2(int* a, int* size, int* kol_1, int* kol_2, int* kol_3) {
	for (int i = 0; i < *size; i++) {
		if (a[i] > 0) {
			*kol_1 = *kol_1+1;
		}
		if (a[i] < 0) {
			*kol_2=*kol_2+1;
		}
		if (a[i] == 0) {
			*kol_3=*kol_3+1;
		}
	}
}

int fun_masswork_3(int* a, int* b, int* size, int* size_2a) {
	int ind = 0;
	int t = 0;
	int* t_1 = NULL;
	t_1 = &t;
	for (int i = 0; i < *size; i++) {
		if (b[0] == a[i]) {
			for (int j = 0; j < *size_2a; j++) {
				if (b[j] == a[i + j]) {
					ind++;
				}
				else {
					ind = 0;
				}
			}
		}
		if (ind == *size_2a) {
			return *t_1 = i;
		}

	}
	return 0;
}

void fun_masswork_4(int *c_1,int  size_3,int* flag_id_1,double* result_1) {
	int a = 0;
	int b = 0;
	int* a_1 = NULL;
	int* b_1 = NULL;
	a_1 = &a;
	b_1 = &b;
	
	if (*flag_id_1 == 1) {
		std::cout << "\n" << "Vedite pervoe 4islo = ";
		std::cin >> *a_1;
		std::cout << "\n" << "Vvedite vtoroe 4islo= ";
		std::cin >> *b_1;
		fun_sl(a_1, b_1, result_1);
	}
	if (*flag_id_1 == 2) {
		std::cout << "\n" << "Vedite pervoe 4islo = ";
		std::cin >> *a_1;
		std::cout << "\n" << "Vvedite vtoroe 4islo= ";
		std::cin >> *b_1;
		fun_vu(a_1, b_1, result_1);
	}
	if (*flag_id_1 == 3) {
		std::cout << "\n" << "Vedite pervoe 4islo = ";
		std::cin >> *a_1;
		std::cout << "\n" << "Vvedite vtoroe 4islo= ";
		std::cin >> *b_1;
		fun_ym(a_1, b_1, result_1);
	}
	if (*flag_id_1 == 4) {
		std::cout << "\n" << "Vedite pervoe 4islo = ";
		std::cin >> *a_1;
		std::cout << "\n" << "Vvedite vtoroe 4islo= ";
		std::cin >> *b_1;
		fun_del(a_1, b_1, result_1);
	}
}

void fun_sl(int* a, int *b,double* result_1) {
	*result_1 = *a + *b;

}
void fun_vu(int* a, int* b, double* result_1) {
	*result_1 = *a - *b;
}

void fun_ym(int* a, int* b, double* result_1) {
	*result_1 = *a * *b;

	 }
void fun_del(int* a, int* b, double* result_1) {
	*result_1 = *a / *b;
}

int main() {
	srand(time(NULL));
	int flag_menu = 0;
	int m[100] = { 0 };
	int size = 0;
	int* m_1 = NULL;
	int* size_1 = NULL;
	int summ = 0;
	int proiz = 0;
	int* summ_1 = NULL;
	int* proiz_1 = NULL;
	int otric = 0;
	int poloh = 0;
	int nulev = 0;
	int* kol_1 = NULL;
	int* kol_2 = NULL;
	int* kol_3 = NULL;
	kol_1 = &poloh;
	kol_2 = &otric;
	kol_3 = &nulev;
	summ_1 = &summ;
	proiz_1 = &proiz;
	size_1 = &size;
	m_1 = &m[0];
	int size_2 = 0;
	int* size_2a = NULL;
	size_2a = &size_2;
	int m_2[100] = { 0 };
	int* ma_2 = NULL;
	ma_2 = &m_2[0];
	int t = 0;
	int* t_1 = NULL;
	t_1 = &t;
	double result = 0;
	
	do {
		std::cout << "\n" << "Vvedite nomer zadani9 1-8 , 0 -vuhod" << "\n";
		std::cin >> flag_menu;

		if (flag_menu == 1) {
			summ = 0;
			proiz = 0;
			std::cout << "\n" << "Zadaca nomer 1" << "\n";
			std::cout << "\n" << "Vvedite razmer massiva : ";
			std::cin >> size;
			fun_massin(m_1, size_1);
			fun_massout(m_1, size_1);
			fun_masswork(m_1, size_1, summ_1, proiz_1);
			std::cout << "\n" << "Symma elementov rafna= " << *summ_1 << "\n" << "Proizvedenie elementov rafno = " << *proiz_1 << "\n";

		}

		if (flag_menu == 2) {
			poloh = 0;
			otric = 0;
			nulev = 0;
			std::cout << "\n" << "Zadaca nomer 2" << "\n";
			std::cout << "\n" << "Vvedite razmer massiva : ";
			std::cin >> size;
			fun_massin(m_1, size_1);
			fun_massout(m_1, size_1);
			fun_masswork_2(m_1, size_1, kol_1, kol_2, kol_3);
			std::cout << "\n" << "V massive koli4estvo polohitelnix = " << poloh << "\n" << "Koli4estvo otricatelnuh = " << otric << "\n" << "Kol nulei = " << nulev << "\n";
		}

		if (flag_menu == 3) {
			std::cout << "\n" << "Zadaca nomer 3" << "\n";
			std::cout << "\n" << "Vvedite razmer massiva : ";
			std::cin >> size;
			fun_massin(m_1, size_1);
			std::cout << "\n" << "Vvedite razmer vtorogo massiva : ";
			std::cin >> size_2;
			fun_massin(ma_2, size_2a);
			fun_massout(m_1, size_1);
			fun_massout(ma_2, size_2a);

			*t_1=fun_masswork_3(m_1, ma_2, size_1, size_2a);
			if (*t_1 > 0) {
				std::cout << "\n" << "Massiv B vhodit v Massiv A po ykazatelu ssulaehimys9 na index elementa massiva A = " << *t_1;
			}
			if (*t_1 == 0) {
				std::cout << "\n" << "Ne vhodit massiv B v massiv A !!!! = " << *t_1;
			}
			

		}
		if (flag_menu == 4) {
			std::cout << "\n" << "Zadaca 4 " << "\n";
			int flag_id = 0;
			int* flag_id_1 = NULL;
			flag_id_1 = &flag_id;
			int c[5] = { 0,1,2,3,4 };
			int* c_1 = NULL;
			c_1 = &c[0];
			int size_3 = 5;
			double* result_1 = NULL;
			result_1 = &result;

			do {
				std::cout << "\n"<<"Tekyhii rezultat = " << result;
				std::cout << "\n" << "1- slohenie " << "\n" << "2-vuchitanue" << "\n" << "3-ymnohenie" << "\n" << "4-delenie" << "\n" << "0-vuhod" << "\n";
				std::cin >> flag_id;
				fun_masswork_4(c_1, size_3, flag_id_1,result_1);
				

			} while (flag_id != 0);
		}

	} while (flag_menu != 0);

}
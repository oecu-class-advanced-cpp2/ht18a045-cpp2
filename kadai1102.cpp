// kadai1102.cpp
#include <iostream>
using namespace std;
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
/* --------------------------------------------------------------- */
/*
* is_prime
*
* �^����ꂽ������ x�ɑ΂��đf�����ǂ������肷��
*/
/* -------------------------------------------------------------- */
bool is_prime(unsigned int x) {
	//�Q����x-1�܂ł̐���x������邩�`�F�b�N����
	//�������ꂽ�瑦false��Ԃ�
	if (x < 2) return false;
	else if (x == 2) return true;
	else if (x % 2 == 0) return false; 

	double sqrtNum = sqrt(x);
	for (int i = 3; i <= sqrtNum; i += 2)
	{
		if (x % i == 0)
		{
			// �f���ł͂Ȃ�
			return false;
		}
	}

	// �f���ł���
	return true;
}
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
*/
/* -------------------------------------------------------------- */

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int num = a;
	int count = 0;//num���f����������1�C���N�������g�i�����j����
	for (int i = 0; i < 100; i++) {
		std::cout << num << std::endl;
		num = num + d;
	};
	return 0;
}

int main() {
	std::cout << is_prime(2) << std::endl;
	std::cout << is_prime(3) << std::endl;
	std::cout << is_prime(4) << std::endl;
	//std::cout << nth_prime(367, 186, 151) << std::endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	cin.get();
	return 0;
}

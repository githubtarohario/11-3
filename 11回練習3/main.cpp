#include<iostream>
using namespace std;

void main() {
	const char* nameData[] = {
	"�s�^�S���X",
	"�A���L���f�X",
	"�G���X�g�e�l�X",
	"���[�N���b�h",
	"�t�B�{�i�b�`",
	"�f�J���g",
	"�t�F���}�[",
	"�p�X�J��",
	"�I�C���[",
	"���v���X",
	"�t�[���G",
	"�K�E�X",
	"�h�E�����K��",
	"�u�[��",
	"���[�}��",
	"�|�A���J��",
	"���b�Z��",
	"�j���[�g��",
	"�e�C���[",
	"�P�v���[",
	"�K�����I",
	"�{�C��",
	"�t�b�N",
	"�z�C�w���X",
	"�x���k�C",
	"���O�����W��",
	"�t�@���f�[",
	"�W���[��",
	"�t�[�R�[",
	"�X�g�[�N�X",
	"�}�N�X�E�F��",
	"�}�b�n",
	"�����g�Q��",
	"�L�����[",
	"���U�t�H�[�h",
	"�A�C���V���^�C��",
	"�W�F�t���[�E�G���@���X�g�E�q���g��",
	"�f�~�X�E�n�T�r�X"
	};
#define NUM 37
	for (int i = 0; i < NUM; i++) {//�}�W�b�N�i���o�[������
		cout << nameData[i] << endl;
	}
#define NAME_MAX		(sizeof(nameData)/sizeof(char*))
	cout << "NAME_MAX=" << NAME_MAX << endl;
	cout << "sizeof(nameData)=" << sizeof(nameData) << endl;
	cout <<  "sizeof(char*)=" << sizeof(char*) << endl;
	for (int i = 0; i < NAME_MAX; i++) {//�}�W�b�N�i���o�[������
		cout << nameData[i] << endl;
	}
	cout << "----------" << endl;
	for (const auto p: nameData) {
		cout << p << endl;
	}



}

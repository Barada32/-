  #pragma once
#define delimetr "************************************************************************************"
//���������� ���������  ���������� ������� 
const int rows = 3;
const int cols = 4;
//const int ROWS = 3;
const int COLS = 4;
//��������� ����������� �������
const int int_length = 10;
const int doub_length = 10;
const int char_length = 10;


//���������� ����������� ������� ���� INT
int int_ar[int_length] = {};
int int_start, int_stop;
int sdvig_pravo = 0;
int sdvig_levo = 0;
//���������� ��� ����������� ������� ���� DOUBLE
double doub_ar[doub_length] = {};
double doub_start, doub_stop;
int sdvig_doub_pravo = 0;
int sdvig_doub_levo = 0;
//���������� ��� ����������� ������� ����  CHAR
char char_ar[char_length] = {};
char char_start, char_stop;
int sdvig_char_pravo = 0;
int sdvig_char_levo = 0;


//���������� ���������� ������� ���� INT
int dm_int_arr[rows][cols];
int dm_int_start = 0, dm_int_stop = 0;
int dm_sdvig_int_pravo = 0;
int dm_sdvig_int_levo = 0;

//���������� ���������� ������� ���� DOUBLE
double dm_doub_arr[rows][cols];
double dm_doub_start = 0, dm_doub_stop = 0;
int dm_sdvig_doub_pravo = 0;
int dm_sdvig_doub_levo = 0;

//���������� ���������� ������� ���� CHAR
char dm_char_arr[rows][cols];
char dm_char_start = 0, dm_char_stop = 0;
int dm_sdvig_char_pravo = 0;
int dm_sdvig_char_levo = 0;



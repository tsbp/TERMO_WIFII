//==============================================================================
/* ����� 6 �� 8 ��������.
// ��������� ����� Terminal Microsoft Windows.
  8,                    // ������ ������� � ��������.
  6,                    // ������ ������� � ��������.
  255,                  // ����� �������� � ������.
// ����������� ������� �������� � �������:
// ������ ���� ��������� ������� ����������� �������.
// ������� ����������� �����-�������.
// ������� ��� ����� ����������� ������� ������ ������,
// ������� ��� - ������ ������.*/
 const unsigned char Font8x6[] =
 {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// 0x00 - ������ ����������.
   0x00, 0x3e, 0x45, 0x51, 0x45, 0x3e,// 0x01 - ���� � �������.
   0x00, 0x3e, 0x6b, 0x6f, 0x6b, 0x3e,// 0x02 - ���� � ������� �����������.
   0xff, 0xc3, 0xdb, 0xdb, 0xc3, 0xff,// 0x03 - ����� (������).
   0x00, 0x18, 0x3c, 0x7e, 0x3c, 0x18,// 0x04 - �����.
   0x00, 0x30, 0x36, 0x7f, 0x36, 0x30,// 0x05 - ������.
   0x00, 0x18, 0x5c, 0x7e, 0x5c, 0x18,// 0x06 - ����.
   0x00, 0x00, 0x18, 0x18, 0x00, 0x00,// 0x07 - ����������� ���� �� ������.
   0xff, 0xff, 0xe7, 0xe7, 0xff, 0xff,// 0x08 - ����������� ���� �� ������ � ��������.
   0x00, 0x3c, 0x24, 0x24, 0x3c, 0x00,// 0x09 - ������������� ���� �� ������.
   0xff, 0xc3, 0xdb, 0xdb, 0xc3, 0xff,// 0x0a - ������������� ���� �� ������ � �������� (������).
   0x00, 0x30, 0x48, 0x4a, 0x36, 0x0e,// 0x0b - ������� ������ (���� �� �������� �����).
   0x00, 0x06, 0x29, 0x79, 0x29, 0x06,// 0x0c - ������� ������ (���� � ������� �����).
   0x00, 0x60, 0x70, 0x3f, 0x02, 0x04,// 0x0d - ���� I.
   0x00, 0x60, 0x7e, 0x0a, 0x35, 0x3f,// 0x0e - ���� II.
   0x00, 0x2a, 0x1c, 0x36, 0x1c, 0x2a,// 0x0f - ������ (���� � ������������� ������).
   0x00, 0x00, 0x7f, 0x3e, 0x1c, 0x08,// 0x10 - ������� ������� ������.
   0x00, 0x08, 0x1c, 0x3e, 0x7f, 0x00,// 0x11 - ������� ������� �����.
   0x00, 0x14, 0x36, 0x7f, 0x36, 0x14,// 0x12 - ������ ������� �����-����.
   0x00, 0x00, 0x5f, 0x00, 0x5f, 0x00,// 0x13 - ��� ��������������� �����.
   0x00, 0x06, 0x09, 0x7f, 0x01, 0x7f,// 0x14 - ������ "��".
   0x00, 0x22, 0x4d, 0x55, 0x59, 0x22,// 0x15 - ������ ���������.
   0x00, 0x60, 0x60, 0x60, 0x60, 0x00,// 0x16 - ������� �������������.
   0x00, 0x14, 0xb6, 0xff, 0xb6, 0x14,// 0x17 - ������ ������� �����-���� � ��������������.
   0x00, 0x04, 0x06, 0x7f, 0x06, 0x04,// 0x18 - ������ ������� �����.
   0x00, 0x10, 0x30, 0x7f, 0x30, 0x10,// 0x19 - ������ ������� ����.
   0x00, 0x08, 0x08, 0x3e, 0x1c, 0x08,// 0x1a - ������ ������� ������.
   0x00, 0x08, 0x1c, 0x3e, 0x08, 0x08,// 0x1b - ������ ������� �����.
   0x00, 0x78, 0x40, 0x40, 0x40, 0x40,// 0x1c - ������ �������.
   0x00, 0x08, 0x3e, 0x08, 0x3e, 0x08,// 0x1d - ������ ������� �����-������.
   0x00, 0x30, 0x3c, 0x3f, 0x3c, 0x30,// 0x1e - ������� ������� �����.
   0x00, 0x03, 0x0f, 0x3f, 0x0f, 0x03,// 0x1f - ������� ������� ����.
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// 0x20 - ������ (������ ����������).
   0x00, 0x00, 0x06, 0x5f, 0x06, 0x00,// 0x21 - ��������������� ����.
   0x00, 0x07, 0x03, 0x00, 0x07, 0x03,// 0x22 - ������� �������.
   0x00, 0x24, 0x7e, 0x24, 0x7e, 0x24,// 0x23 - �������.
   0x00, 0x24, 0x2b, 0x6a, 0x12, 0x00,// 0x24 - ������.
   0x00, 0x63, 0x13, 0x08, 0x64, 0x63,// 0x25 - �������.
   0x00, 0x36, 0x49, 0x56, 0x20, 0x50,// 0x26 - ���������.
   0x00, 0x00, 0x07, 0x03, 0x00, 0x00,// 0x27 - ��������.
   0x00, 0x00, 0x3e, 0x41, 0x00, 0x00,// 0x28 - ����������� ������.
   0x00, 0x00, 0x41, 0x3e, 0x00, 0x00,// 0x29 - ����������� ������.
   0x00, 0x08, 0x3e, 0x1c, 0x3e, 0x08,// 0x2a - ��������� (���������).
   0x00, 0x08, 0x08, 0x3e, 0x08, 0x08,// 0x2b - ����.
   0x00, 0x00, 0xe0, 0x60, 0x00, 0x00,// 0x2c - �������.
   0x00, 0x08, 0x08, 0x08, 0x08, 0x08,// 0x2d - ����.
   0x00, 0x00, 0x60, 0x60, 0x00, 0x00,// 0x2e - �����.
   0x00, 0x20, 0x10, 0x08, 0x04, 0x02,// 0x2f - ���� �����-������� ('/').
   0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e,// 0x30 - '0'.
   0x00, 0x00, 0x42, 0x7f, 0x40, 0x00,// 0x31 - '1'.
   0x00, 0x62, 0x51, 0x49, 0x49, 0x46,// 0x32 - '2'.
   0x00, 0x22, 0x49, 0x49, 0x49, 0x36,// 0x33 - '3'.
   0x00, 0x18, 0x14, 0x12, 0x7f, 0x10,// 0x34 - '4'.
   0x00, 0x2f, 0x49, 0x49, 0x49, 0x31,// 0x35 - '5'.
   0x00, 0x3c, 0x4a, 0x49, 0x49, 0x30,// 0x36 - '6'.
   0x00, 0x01, 0x71, 0x09, 0x05, 0x03,// 0x37 - '7'.
   0x00, 0x36, 0x49, 0x49, 0x49, 0x36,// 0x38 - '8'.
   0x00, 0x06, 0x49, 0x49, 0x29, 0x1e,// 0x39 - '9'.
   0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00,// 0x3a - ���������.
   0x00, 0x00, 0xec, 0x6c, 0x00, 0x00,// 0x3b - ����� � �������.
   0x00, 0x08, 0x14, 0x22, 0x41, 0x00,// 0x3c - ������.
   0x00, 0x24, 0x24, 0x24, 0x24, 0x24,// 0x3d - �����.
   0x00, 0x00, 0x41, 0x22, 0x14, 0x08,// 0x3e - ������.
   0x00, 0x02, 0x01, 0x59, 0x09, 0x06,// 0x3f - �������������� ����.
   0x00, 0x3e, 0x41, 0x5d, 0x55, 0x1e,// 0x40 - "������" ('@').
   0x00, 0x7e, 0x11, 0x11, 0x11, 0x7e,// 0x41 - 'A'.
   0x00, 0x7f, 0x49, 0x49, 0x49, 0x36,// 0x42 - 'B'.
   0x00, 0x3e, 0x41, 0x41, 0x41, 0x22,// 0x43 - 'C'.
   0x00, 0x7f, 0x41, 0x41, 0x41, 0x3e,// 0x44 - 'D'.
   0x00, 0x7f, 0x49, 0x49, 0x49, 0x41,// 0x45 - 'E'.
   0x00, 0x7f, 0x09, 0x09, 0x09, 0x01,// 0x46 - 'F'.
   0x00, 0x3e, 0x41, 0x49, 0x49, 0x7a,// 0x47 - 'G'.
   0x00, 0x7f, 0x08, 0x08, 0x08, 0x7f,// 0x48 - 'H'.
   0x00, 0x00, 0x41, 0x7f, 0x41, 0x00,// 0x49 - 'I'.
   0x00, 0x30, 0x40, 0x40, 0x40, 0x3f,// 0x4a - 'J'.
   0x00, 0x7f, 0x08, 0x14, 0x22, 0x41,// 0x4b - 'K'.
   0x00, 0x7f, 0x40, 0x40, 0x40, 0x40,// 0x4c - 'L'.
   0x00, 0x7f, 0x02, 0x04, 0x02, 0x7f,// 0x4d - 'M'.
   0x00, 0x7f, 0x02, 0x04, 0x08, 0x7f,// 0x4e - 'N'.
   0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e,// 0x4f - 'O'.
   0x00, 0x7f, 0x09, 0x09, 0x09, 0x06,// 0x50 - 'P'.
   0x00, 0x3e, 0x41, 0x51, 0x21, 0x5e,// 0x51 - 'Q'.
   0x00, 0x7f, 0x09, 0x09, 0x19, 0x66,// 0x52 - 'R'.
   0x00, 0x26, 0x49, 0x49, 0x49, 0x32,// 0x53 - 'S'.
   0x00, 0x01, 0x01, 0x7f, 0x01, 0x01,// 0x54 - 'T'.
   0x00, 0x3f, 0x40, 0x40, 0x40, 0x3f,// 0x55 - 'U'.
   0x00, 0x1f, 0x20, 0x40, 0x20, 0x1f,// 0x56 - 'V'.
   0x00, 0x3f, 0x40, 0x3c, 0x40, 0x3f,// 0x57 - 'W'.
   0x00, 0x63, 0x14, 0x08, 0x14, 0x63,// 0x58 - 'X'.
   0x00, 0x07, 0x08, 0x70, 0x08, 0x07,// 0x59 - 'Y'.
   0x00, 0x71, 0x49, 0x45, 0x43, 0x00,// 0x5a - 'Z'.
   0x00, 0x00, 0x7f, 0x41, 0x41, 0x00,// 0x5b - '['.
   0x00, 0x02, 0x04, 0x08, 0x10, 0x20,// 0x5c - '\'.
   0x00, 0x00, 0x41, 0x41, 0x7f, 0x00,// 0x5d - ']'.

//������ ����� �� ������     0x00, 0x04, 0x02, 0x01, 0x02, 0x04,// 0x5e - '^'.
0x00, 0x06, 0x09, 0x09, 0x06, 0x00,// 0xb7 - ��������� ������ ������.

   0x80, 0x80, 0x80, 0x80, 0x80, 0x80,// 0x5f - '_'.
   0x00, 0x00, 0x03, 0x07, 0x00, 0x00,// 0x60 - �������� ��������.
   0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// 0x61 - 'a'.
   0x00, 0x7f, 0x44, 0x44, 0x44, 0x38,// 0x62 - 'b'.
   0x00, 0x38, 0x44, 0x44, 0x44, 0x28,// 0x63 - 'c'.
   0x00, 0x38, 0x44, 0x44, 0x44, 0x7f,// 0x64 - 'd'.
   0x00, 0x38, 0x54, 0x54, 0x54, 0x08,// 0x65 - 'e'.
   0x00, 0x08, 0x7e, 0x09, 0x09, 0x00,// 0x66 - 'f'.
   0x00, 0x18, 0xa4, 0xa4, 0xa4, 0x7c,// 0x67 - 'g'.
   0x00, 0x7f, 0x04, 0x04, 0x78, 0x00,// 0x68 - 'h'.
   0x00, 0x00, 0x00, 0x7d, 0x40, 0x00,// 0x69 - 'i'.
   0x00, 0x40, 0x80, 0x84, 0x7d, 0x00,// 0x6a - 'j'.
   0x00, 0x7f, 0x10, 0x28, 0x44, 0x00,// 0x6b - 'k'.
   0x00, 0x00, 0x00, 0x7f, 0x40, 0x00,// 0x6c - 'l'.
   0x00, 0x7c, 0x04, 0x18, 0x04, 0x78,// 0x6d - 'm'.
   0x00, 0x7c, 0x04, 0x04, 0x78, 0x00,// 0x6e - 'n'.
   0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// 0x6f - 'o'.
   0x00, 0xfc, 0x44, 0x44, 0x44, 0x38,// 0x70 - 'p'.
   0x00, 0x38, 0x44, 0x44, 0x44, 0xfc,// 0x71 - 'q'.
   0x00, 0x44, 0x78, 0x44, 0x04, 0x08,// 0x72 - 'r'.
   0x00, 0x08, 0x54, 0x54, 0x54, 0x20,// 0x73 - 's'.
   0x00, 0x04, 0x3e, 0x44, 0x24, 0x00,// 0x74 - 't'.
   0x00, 0x3c, 0x40, 0x20, 0x7c, 0x00,// 0x75 - 'u'.
   0x00, 0x1c, 0x20, 0x40, 0x20, 0x1c,// 0x76 - 'v'.
   0x00, 0x3c, 0x60, 0x30, 0x60, 0x3c,// 0x77 - 'w'.
   0x00, 0x6c, 0x10, 0x10, 0x6c, 0x00,// 0x78 - 'x'.
   0x00, 0x9c, 0xa0, 0x60, 0x3c, 0x00,// 0x79 - 'y'.
   0x00, 0x64, 0x54, 0x54, 0x4c, 0x00,// 0x7a - 'z'.
   0x00, 0x08, 0x3e, 0x41, 0x41, 0x00,// 0x7b - '{'.
   0x00, 0x00, 0x00, 0x77, 0x00, 0x00,// 0x7c - '|'.
   0x00, 0x00, 0x41, 0x41, 0x3e, 0x08,// 0x7d - '}'.
   0x00, 0x02, 0x01, 0x02, 0x01, 0x00,// 0x7e - '~'.
	 0x00, 0x3c, 0x26, 0x23, 0x26, 0x3c,// 0x7f - "�����".
   0x44, 0x11, 0x44, 0x11, 0x44, 0x11,// 0x80 - ����� �� ����� �����������.
   0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55,// 0x81 - ����� �� ����� ������.
   0xbb, 0xee, 0xbb, 0xee, 0xbb, 0xee,// 0x82 - ����� �� ��������.
   0x00, 0x00, 0x00, 0xff, 0x00, 0x00,// 0x83 - ������� ����� ������������� - ������������ �����.
   0x08, 0x08, 0x08, 0xff, 0x00, 0x00,// 0x84 - ������������� - ������������ ����� � ������� �� ������ �����.
   0x0a, 0x0a, 0x0a, 0xff, 0x00, 0x00,// 0x85 - ������������� - ������������ ����� � ������� ������� �� ������ �����.
   0x08, 0xff, 0x00, 0xff, 0x00, 0x00,// 0x86 - ������������� - ������� ������������ ����� � ������� �� ������ �����.
   0x08, 0xf8, 0x08, 0xf8, 0x00, 0x00,// 0x87 - ������������� - ������� ������ ���� � ������� ������������ ������.
   0x0a, 0x0a, 0x0a, 0xfe, 0x00, 0x00,// 0x88 - ������������� - ������� ������ ���� � ������� �������������� ������.
   0x0a, 0xfb, 0x00, 0xff, 0x00, 0x00,// 0x89 - ������������� - ������� ������������ ����� � ������� ������� �� ������ �����.
   0x00, 0xff, 0x00, 0xff, 0x00, 0x00,// 0x8a - ������������� - ������� ������������ �����.
   0x0a, 0xfa, 0x02, 0xfe, 0x00, 0x00,// 0x8b - ������������� - ������� ������� ������ ����.
   0x0a, 0x0b, 0x08, 0x0f, 0x00, 0x00,// 0x8c - ������������� - ������� ������ ������ ����.
   0x08, 0x0f, 0x08, 0x0f, 0x00, 0x00,// 0x8d - ������������� - ������ ������ ���� � ������� ������������ ������.
   0x0a, 0x0a, 0x0a, 0x0f, 0x00, 0x00,// 0x8e - ������������� - ������ ������ ���� � ������� �������������� ������.
   0x08, 0x08, 0x08, 0xf8, 0x00, 0x00,// 0x8f - ������������� - ������� ������ ����.
   0x00, 0x00, 0x00, 0x0f, 0x08, 0x08,// 0x90 - ������������� - ������ ����� ����.
   0x08, 0x08, 0x08, 0x0f, 0x08, 0x08,// 0x91 - ������������� - �������������� ����� � ������� �� ������ �����.
   0x08, 0x08, 0x08, 0xf8, 0x08, 0x08,// 0x92 - ������������� - �������������� ����� � ������� �� ������ ����.
   0x00, 0x00, 0x00, 0xff, 0x08, 0x08,// 0x93 - ������������� - ������������ ����� � ������� �� ������ ������.
   0x08, 0x08, 0x08, 0x08, 0x08, 0x08,// 0x94 - ������������� - �������������� ����� �� ������.
   0x08, 0x08, 0x08, 0xff, 0x08, 0x08,// 0x95 - ������������� - �����������.
   0x00, 0x00, 0x00, 0xff, 0x0a, 0x0a,// 0x96 - ������������� - ������������ ����� � ������� ������� �� ������ ������.
   0x00, 0xff, 0x00, 0xff, 0x08, 0x08,// 0x97 - ������������� - ������� ������������ ����� � ������� �� ������ ������.
   0x00, 0x0f, 0x08, 0x0b, 0x0a, 0x0a,// 0x98 - ������������� - ������� ������ ����� ����.
   0x00, 0xfe, 0x02, 0xfa, 0x0a, 0x0a,// 0x99 - ������������� - ������� ������� ����� ����.
   0x0a, 0x0b, 0x08, 0x0b, 0x0a, 0x0a,// 0x9a - ������������� - ������� �������������� ����� � ������� ������� �� ������ �����.
   0x0a, 0xfa, 0x02, 0xfa, 0x0a, 0x0a,// 0x9b - ������������� - ������� �������������� ����� � ������� ������� �� ������ ����.
   0x00, 0xff, 0x00, 0xfb, 0x0a, 0x0a,// 0x9c - ������������� - ������� ������������ ����� � ������� ������� �� ������ ������.
   0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,// 0x9d - ������������� - ������� �������������� ����� �� ������.
   0x0a, 0xfb, 0x00, 0xfb, 0x0a, 0x0a,// 0x9e - ������������� - ������� �����������.
   0x0a, 0x0a, 0x0a, 0x0b, 0x0a, 0x0a,// 0x9f - ������������� - ������� �������������� ����� � ������� �� ������ �����.
   0x08, 0x0f, 0x08, 0x0f, 0x08, 0x08,// 0xa0 - ������������� - �������������� ����� � ������� ������� �� ������ �����.
   0x0a, 0x0a, 0x0a, 0xfa, 0x0a, 0x0a,// 0xa1 - ������������� - ������� �������������� ����� � ������� �� ������ ����.
   0x08, 0xf8, 0x08, 0xf8, 0x08, 0x08,// 0xa2 - ������������� - �������������� ����� � ������� ������� �� ������ ����.
   0x00, 0x0f, 0x08, 0x0f, 0x08, 0x08,// 0xa3 - ������������� - ������ ����� ����, ������� ������������ �����.
   0x00, 0x00, 0x00, 0x0f, 0x0a, 0x0a,// 0xa4 - ������������� - ������ ����� ����, ������� �������������� �����.
   0x00, 0x00, 0x00, 0xfe, 0x0a, 0x0a,// 0xa5 - ������������� - ������� ����� ����, ������� �������������� �����.
   0x00, 0xf8, 0x08, 0xf8, 0x08, 0x08,// 0xa6 - ������������� - ������� ����� ����, ������� ������������ �����.
   0x08, 0xff, 0x08, 0xff, 0x08, 0x08,// 0xa7 - ������������� - ������� ������������ ����� �� ������ � �������� ������ � �����.
   0x00, 0x7e, 0x4b, 0x4a, 0x4b, 0x42,// 0xa8 - '�'.
   0x0a, 0x0a, 0x0a, 0xff, 0x0a, 0x0a,// 0xa9 - ������������� - ������� �������������� ����� �� ������ � �������� ����� � ����.
   0x08, 0x08, 0x08, 0x0f, 0x00, 0x00,// 0xaa - ������������� - ������ ������ ����.
   0x00, 0x00, 0x00, 0xf8, 0x08, 0x08,// 0xab - ������������� - ������� ����� ����.
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff,// 0xac - ������������� - ����������� ����������.
   0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,// 0xad - ������������� - ����������� ������ �������� ����������.
   0xff, 0xff, 0xff, 0x00, 0x00, 0x00,// 0xae - ������������� - ����������� ����� �������� ����������.
   0x00, 0x00, 0x00, 0xff, 0xff, 0xff,// 0xaf - ������������� - ����������� ������ �������� ����������.
   0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f,// 0xb0 - ������������� - ����������� ������� �������� ����������.
   0x00, 0x3e, 0x49, 0x49, 0x41, 0x22,// 0xb1 - ���������� '�'.
   0x00, 0x38, 0x54, 0x54, 0x44, 0x28,// 0xb2 - ���������� '�'.
   0x00, 0x01, 0x40, 0x7e, 0x40, 0x01,// 0xb3 - 'I' � ����� ������� ������.
   0x00, 0x00, 0x01, 0x7c, 0x41, 0x00,// 0xb4 - 'i' � ����� ������� ������.
   0x00, 0x27, 0x48, 0x4b, 0x48, 0x3f,// 0xb5 - 'Y' � ������� ������ ('~').
   0x00, 0x9d, 0xa2, 0x62, 0x3d, 0x00,// 0xb6 - 'y' � ������� ������ ('~').
   0x00, 0x06, 0x09, 0x09, 0x06, 0x00,// 0xb7 - ��������� ������ ������.
   0x00, 0x38, 0x55, 0x54, 0x55, 0x08,// 0xb8 - '�'.
   0x00, 0x00, 0x18, 0x18, 0x00, 0x00,// 0xb9 - ������� ����������� ���� �� ������.
   0x00, 0x00, 0x08, 0x00, 0x00, 0x00,// 0xba - ��������� ����������� ���� �� ������.
   0x00, 0x30, 0x40, 0x3e, 0x02, 0x02,// 0xbb - ������ ����� �����������.
   0x7f, 0x06, 0x18, 0x7f, 0x13, 0x13,// 0xbc - '�'.
   0x2a, 0x3e, 0x14, 0x14, 0x3e, 0x2a,// 0xbd - "������".
   0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00,// 0xbe - ����������� ������� �� ������.
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// 0xbf - ������ ����������.
   0x00, 0x7e, 0x11, 0x11, 0x11, 0x7e,// 0xc0 - '�'.
   0x00, 0x7f, 0x49, 0x49, 0x49, 0x31,// 0xc1 - '�'.
   0x00, 0x7f, 0x49, 0x49, 0x49, 0x36,// 0xc2 - '�'.
   0x00, 0x7f, 0x01, 0x01, 0x01, 0x01,// 0xc3 - '�'.
   0xc0, 0x7e, 0x41, 0x41, 0x7f, 0xc0,// 0xc4 - '�'.
   0x00, 0x7f, 0x49, 0x49, 0x49, 0x41,// 0xc5 - '�'.
   0x00, 0x77, 0x08, 0x7f, 0x08, 0x77,// 0xc6 - '�'.
   0x22, 0x49, 0x49, 0x49, 0x36, 0x00,// 0xc7 - '�'.
   0x00, 0x7f, 0x20, 0x10, 0x08, 0x7f,// 0xc8 - '�'.
   0x00, 0x7e, 0x21, 0x11, 0x09, 0x7e,// 0xc9 - '�'.
   0x00, 0x7f, 0x08, 0x14, 0x22, 0x41,// 0xca - '�'.
   0x00, 0x40, 0x7e, 0x01, 0x01, 0x7f,// 0xcb - '�'.
   0x00, 0x7f, 0x02, 0x04, 0x02, 0x7f,// 0xcc - '�'.
   0x00, 0x7f, 0x08, 0x08, 0x08, 0x7f,// 0xcd - '�'.
   0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e,// 0xce - '�'.
   0x00, 0x7f, 0x01, 0x01, 0x01, 0x7f,// 0xcf - '�'.
   0x00, 0x7f, 0x09, 0x09, 0x09, 0x06,// 0xd0 - '�'.
   0x00, 0x3e, 0x41, 0x41, 0x41, 0x22,// 0xd1 - '�'.
   0x00, 0x01, 0x01, 0x7f, 0x01, 0x01,// 0xd2 - '�'.
   0x00, 0x27, 0x48, 0x48, 0x48, 0x3f,// 0xd3 - '�'.
   0x00, 0x0e, 0x11, 0x7f, 0x11, 0x0e,// 0xd4 - '�'.
   0x00, 0x63, 0x14, 0x08, 0x14, 0x63,// 0xd5 - '�'.
   0x00, 0x7f, 0x40, 0x40, 0x7f, 0xc0,// 0xd6 - '�'.
   0x00, 0x07, 0x08, 0x08, 0x08, 0x7f,// 0xd7 - '�'.
   0x00, 0x7f, 0x40, 0x7f, 0x40, 0x7f,// 0xd8 - '�'.
   0x00, 0x7f, 0x40, 0x7f, 0x40, 0xff,// 0xd9 - '�'.
   0x03, 0x01, 0x7f, 0x48, 0x48, 0x30,// 0xda - '�'.
   0x00, 0x7f, 0x48, 0x48, 0x30, 0x7f,// 0xdb - '�'.
   0x00, 0x7f, 0x48, 0x48, 0x48, 0x30,// 0xdc - '�'.
   0x00, 0x22, 0x41, 0x49, 0x49, 0x3e,// 0xdd - '�'.
   0x00, 0x7f, 0x08, 0x3e, 0x41, 0x3e,// 0xde - '�'.
   0x00, 0x66, 0x19, 0x09, 0x09, 0x7f,// 0xdf - '�'.
   0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// 0xe0 - '�'.
   0x00, 0x3c, 0x4a, 0x4a, 0x4a, 0x31,// 0xe1 - '�'.
   0x00, 0x7c, 0x54, 0x54, 0x54, 0x28,// 0xe2 - '�'.
   0x00, 0x7c, 0x04, 0x04, 0x0c, 0x00,// 0xe3 - '�'.
   0xc0, 0x78, 0x44, 0x44, 0x7c, 0xc0,// 0xe4 - '�'.
   0x00, 0x38, 0x54, 0x54, 0x54, 0x08,// 0xe5 - '�'.
   0x00, 0x6c, 0x10, 0x7c, 0x10, 0x6c,// 0xe6 - '�'.
   0x00, 0x28, 0x44, 0x54, 0x54, 0x28,// 0xe7 - '�'.
   0x00, 0x7c, 0x20, 0x10, 0x08, 0x7c,// 0xe8 - '�'.
   0x00, 0x7c, 0x20, 0x12, 0x0a, 0x7c,// 0xe9 - '�'.
   0x00, 0x7c, 0x10, 0x28, 0x44, 0x00,// 0xea - '�'.
   0x40, 0x38, 0x04, 0x04, 0x7c, 0x00,// 0xeb - '�'.
   0x00, 0x7c, 0x08, 0x10, 0x08, 0x7c,// 0xec - '�'.
   0x00, 0x7c, 0x10, 0x10, 0x10, 0x7c,// 0xed - '�'.
   0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// 0xee - '�'.
   0x00, 0x7c, 0x04, 0x04, 0x04, 0x7c,// 0xef - '�'.
   0x00, 0xfc, 0x44, 0x44, 0x44, 0x38,// 0xf0 - '�'.
   0x00, 0x38, 0x44, 0x44, 0x44, 0x28,// 0xf1 - '�'.
   0x00, 0x04, 0x04, 0x7c, 0x04, 0x04,// 0xf2 - '�'.
   0x00, 0x9c, 0xa0, 0x60, 0x3c, 0x00,// 0xf3 - '�'.
   0x00, 0x18, 0x24, 0x7c, 0x24, 0x18,// 0xf4 - '�'.
   0x00, 0x6c, 0x10, 0x10, 0x6c, 0x00,// 0xf5 - '�'.
   0x00, 0x7c, 0x40, 0x40, 0x7c, 0xc0,// 0xf6 - '�'.
   0x00, 0x0c, 0x10, 0x10, 0x10, 0x7c,// 0xf7 - '�'.
   0x00, 0x7c, 0x40, 0x7c, 0x40, 0x7c,// 0xf8 - '�'.
   0x00, 0x7c, 0x40, 0x7c, 0x40, 0xfc,// 0xf9 - '�'.
   0x0c, 0x04, 0x7c, 0x50, 0x50, 0x20,// 0xfa - '�'.
   0x00, 0x7c, 0x50, 0x50, 0x20, 0x7c,// 0xfb - '�'.
   0x00, 0x7c, 0x50, 0x50, 0x50, 0x20,// 0xfc - '�'.
   0x00, 0x28, 0x44, 0x54, 0x54, 0x38,// 0xfd - '�'.
   0x00, 0x7c, 0x10, 0x38, 0x44, 0x38,// 0xfe - '�'.
   0x00, 0x48, 0x34, 0x14, 0x14, 0x7c// 0xff - '�'.
 };

const unsigned char digit_16x24[] = {
0x00, 0xFA, 0xFB, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFC, 0xFE, 0xFE, 0x00,  // 0
0x00, 0xFF, 0xF7, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xFF, 0xF7, 0x00,
0x00, 0x0F, 0x6F, 0x7F, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x1F, 0x3F, 0x3F, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,  // 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xF7, 0xF7, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00,

0x00, 0x02, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFC, 0xFE, 0xFE, 0x00,  // 2
0x00, 0xF0, 0xF0, 0xE8, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x0B, 0x07, 0x07, 0x00,
0x00, 0x0F, 0x6F, 0x7F, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00,

0x00, 0x02, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFC, 0xFE, 0xFE, 0x00,  // 3
0x00, 0x00, 0x08, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xFF, 0xF7, 0x00,
0x00, 0x20, 0x60, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x1F, 0x3F, 0x3F, 0x00,

0x00, 0xFE, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFE, 0x00,  // 4
0x00, 0x07, 0x07, 0x0B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xF7, 0xF7, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00,

0x00, 0xFA, 0xFB, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,  // 5
0x00, 0x07, 0x07, 0x0B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xE8, 0xF0, 0xF0, 0x00,
0x00, 0x20, 0x60, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x1F, 0x3F, 0x3F, 0x00,

0x00, 0xFA, 0xFB, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,  // 6
0x00, 0xFF, 0xF7, 0xEB, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xE8, 0xF0, 0xF0, 0x00,
0x00, 0x0F, 0x6F, 0x7F, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x1F, 0x3F, 0x3F, 0x00,

0x00, 0xFA, 0xFB, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFC, 0xFE, 0xFE, 0x00,  // 7
0x00, 0x07, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xFF, 0xF7, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0x3F, 0x00,

0x00, 0xFA, 0xFB, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFC, 0xFE, 0xFE, 0x00,  // 8
0x00, 0xFF, 0xF7, 0xEB, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xFF, 0xF7, 0x00,
0x00, 0x0F, 0x6F, 0x7F, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x1F, 0x3F, 0x3F, 0x00,

0x00, 0xFA, 0xFB, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFC, 0xFE, 0xFE, 0x00,  // 9
0x00, 0x07, 0x07, 0x0B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xFF, 0xF7, 0x00,
0x00, 0x20, 0x60, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x1F, 0x3F, 0x3F, 0x00,

0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xF8, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // :
0x00, 0x00, 0x00, 0x00, 0xC3, 0xE7, 0xE7, 0xE7, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x1F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, // �
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0xFF, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0x00, // �
0x00, 0xFF, 0xEF, 0xD7, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xD7, 0xEF, 0xFF, 0x00,
0x00, 0xFF, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0xFF, 0x00,

0x00, 0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFA, 0xFC, 0xF8, 0x00, // �
0x00, 0xFF, 0xEF, 0xD7, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x17, 0x0F, 0x07, 0x00,
0x00, 0xFF, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0xFF, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0x00, // �
0x00, 0x07, 0x0F, 0x17, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x10, 0xEF, 0xEF, 0xFF, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0xFF, 0x00,

0x00, 0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0x00, // �
0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00,
0x00, 0xFF, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x7F, 0xFF, 0x00,

0x00, 0xF8, 0xFC, 0xFA, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x7A, 0x7C, 0x78, 0x00, // �
0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0x3F, 0x5F, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x5E, 0x3E, 0x1E, 0x00,

0x00, 0x00, 0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFA, 0xFC, 0xF8, // �
0x00, 0x00, 0xFF, 0xFB, 0xF5, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0xF5, 0xFB, 0xF1,
0x00, 0x00, 0x7F, 0xBF, 0xDF, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x5F, 0x3F, 0x1F,

0x00, 0x00, 0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, // �
0x00, 0x00, 0xFF, 0xFB, 0xF5, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0xF4, 0xF8, 0xF0,
0x00, 0x00, 0x7F, 0xBF, 0xDF, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x5F, 0x3F, 0x1F,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

};

const unsigned char GOST_16x32 [] = {
0x00, 0xC0, 0xF0, 0xF0, 0x38, 0x38, 0x18, 0x18, 0x18, 0x38, 0x38, 0xF0, 0xF0, 0xE0, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
0x00, 0x07, 0x0F, 0x1F, 0x3C, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3C, 0x1E, 0x0F, 0x07, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x03, 0x01, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00,

0x00, 0xE0, 0xF0, 0x70, 0x38, 0x38, 0x18, 0x18, 0x38, 0x38, 0x70, 0xF0, 0xE0, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xFD, 0x7F, 0x1F, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x38, 0x3E, 0x3F, 0x3F, 0x3B, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, 0x00,

0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x98, 0xF8, 0xF8, 0x78, 0x38, 0x00, 0x00,
0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xFC, 0xDE, 0xCF, 0xC7, 0xC1, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0xFF, 0xFE, 0x00, 0x00,
0x00, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x1F, 0x0F, 0x03, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xF8, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xE0, 0xFC, 0xFF, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xF0, 0xFE, 0xFF, 0xCF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0xFF, 0xFE, 0xC0, 0xC0, 0xC0, 0x00,
0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1F, 0x3F, 0x3F, 0x01, 0x01, 0x01, 0x00,

0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0xFF, 0xFE, 0x00, 0x00,
0x00, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x1F, 0x0F, 0x07, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x78, 0x38, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00,
0x00, 0xF0, 0xFC, 0xFF, 0xCF, 0xC3, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF, 0xFF, 0x00, 0x00,
0x00, 0x07, 0x0F, 0x1E, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x1F, 0x0F, 0x00, 0x00,

0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x78, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFF, 0x3F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3F, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x80, 0xE0, 0xF0, 0x78, 0x38, 0x38, 0x18, 0x18, 0x38, 0x38, 0x70, 0xF0, 0xE0, 0x80, 0x00,
0x00, 0x0F, 0xBF, 0xFF, 0xF0, 0xE0, 0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xF0, 0xFF, 0x3F, 0x0F, 0x00,
0xFC, 0xFF, 0xFF, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0xFF, 0xFE, 0xFC,
0x03, 0x07, 0x0F, 0x1E, 0x1C, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x1E, 0x0F, 0x07, 0x01,

0x00, 0xE0, 0xF0, 0xF8, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x38, 0x78, 0xF0, 0xE0, 0x00, 0x00,
0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
0x00, 0x00, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x87, 0xE7, 0xFF, 0x7F, 0x1F, 0x00, 0x00,
0x00, 0x00, 0x00, 0x10, 0x38, 0x38, 0x1C, 0x1E, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1E, 0x3F, 0x3F, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0xF8, 0xF8, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0x07, 0x07, 0x07, 0x3F, 0x7F, 0x7F, 0x3F, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

};

const unsigned char Times_16x24[] = {
  0x00,0x00,0xC0,0xF0,0xF8,0xF8,0x0C,0x04,0x04,0x0C,0xF8,0xF8,0xF0,0xC0,0x00,0x00,
  0x00,0xFE,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
  0x00,0x01,0x07,0x1F,0x3F,0x3F,0x60,0x40,0x40,0x60,0x3F,0x3F,0x1F,0x07,0x01,0x00,

  0x00,0x00,0x00,0x20,0x30,0x30,0xF8,0xF8,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x40,0x40,0x60,0x7F,0x7F,0x7F,0x7F,0x60,0x40,0x40,0x00,0x00,0x00,

  0x00,0x00,0xE0,0x70,0x38,0x38,0x3C,0x3C,0x7C,0xFC,0xFC,0xF8,0xF0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x3F,0x1F,0x0F,0x03,0x00,0x00,
  0x00,0x40,0x60,0x70,0x78,0x7C,0x7E,0x7B,0x79,0x78,0x78,0x78,0x78,0x7C,0x06,0x00,

  0x00,0x00,0x20,0x30,0x18,0x08,0x0C,0x0C,0x0C,0x1C,0xFC,0xF8,0xF8,0x70,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0C,0x0E,0x1F,0x7F,0xFE,0xFC,0xF8,0xF0,0x00,
  0x00,0x18,0x3C,0x7C,0x78,0x70,0x60,0x60,0x60,0x20,0x30,0x1F,0x1F,0x07,0x03,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0xF0,0xF8,0xFC,0xFC,0x00,0x00,0x00,
  0x00,0xC0,0xA0,0x90,0x88,0x86,0x81,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x00,
  0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x7F,0x7F,0x7F,0x7F,0x03,0x03,0x00,

  0x00,0x00,0x00,0xC0,0x38,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x1C,0x04,0x00,
  0x00,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x1E,0x1E,0x3E,0x3C,0x7C,0xF8,0xF0,0xE0,0x00,
  0x00,0x30,0x38,0x78,0x78,0x70,0x60,0x60,0x40,0x40,0x40,0x20,0x20,0x1F,0x07,0x00,

  0x00,0x00,0x00,0x00,0xC0,0xE0,0xE0,0x70,0x38,0x18,0x18,0x0C,0x0C,0x04,0x04,0x00,
  0x00,0xF0,0xFE,0xFF,0xFF,0x1F,0x07,0x04,0x04,0x0C,0x1C,0xFC,0xF8,0xF0,0xE0,0x00,
  0x00,0x03,0x0F,0x1F,0x3F,0x38,0x60,0x40,0x40,0x40,0x60,0x3F,0x3F,0x1F,0x07,0x00,

  0x00,0xC0,0x7C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0xFC,0xFC,0x1C,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0x3F,0x07,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x7E,0x0F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0xE0,0xF0,0xF8,0xF8,0x8C,0x04,0x04,0x04,0x04,0x04,0x1C,0xF8,0xF0,0xE0,0x00,
  0x00,0x01,0xC7,0xE7,0x6F,0x3F,0x1E,0x3E,0x7C,0xFC,0xFC,0xFE,0xF7,0xE3,0x81,0x00,
  0x00,0x0F,0x1F,0x3F,0x30,0x60,0x40,0x40,0x40,0x40,0x61,0x3F,0x3F,0x1F,0x07,0x00,

  0x00,0xC0,0xF0,0xF8,0xF8,0x0C,0x04,0x04,0x04,0x0C,0x38,0xF8,0xF0,0xE0,0x80,0x00,
  0x00,0x07,0x1F,0x3F,0x3F,0x78,0x60,0x40,0x40,0x40,0xC0,0xFF,0xFF,0xFF,0x3F,0x00,
  0x00,0x40,0x40,0x60,0x60,0x20,0x30,0x38,0x18,0x0E,0x0F,0x07,0x03,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 10 " "
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


  0x38,0x44,0x82,0x82,0x44,0x38,0x80,0x80,0x40,0x40,0x40,0x40,0x80,0x00,0x80,0xC0,
  0x00,0xE0,0xF8,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0F,0x01,// 11 gr C
  0x00,0x03,0x0F,0x18,0x10,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x08,0x04,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xF8,0xF8,0xC0,0xC0,0xC0,// 12 "+"
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,// 13 "-"
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// 14 ","
  0x07,0x0F,0x8F,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


};
const unsigned char courier_10x16[] = {
  0xF0,0xFC,0x0C,0x06,0x06,0x06,0x0C,0xFC,0xF0,0x00,
  0x07,0x1F,0x18,0x30,0x30,0x30,0x18,0x1F,0x07,0x00,

  0x00,0x0C,0x0C,0x0C,0xFE,0xFE,0x00,0x00,0x00,0x00,
  0x00,0x30,0x30,0x30,0x3F,0x3F,0x30,0x30,0x30,0x00,

  0x18,0x1C,0x0E,0x06,0x06,0x86,0xCE,0x7C,0x38,0x00,
  0x30,0x38,0x3C,0x36,0x33,0x31,0x30,0x30,0x30,0x00,

  0x00,0x0C,0x0C,0x06,0xC6,0xC6,0xC6,0xEE,0xFC,0x38,
  0x18,0x38,0x30,0x30,0x30,0x30,0x30,0x39,0x1F,0x0F,

  0x00,0x00,0x80,0xE0,0x70,0x1C,0x0E,0xFE,0xFE,0x00,
  0x00,0x07,0x07,0x06,0x06,0x36,0x36,0x3F,0x3F,0x36,

  0x00,0x00,0xFE,0xFE,0x66,0x66,0x66,0xE6,0xC6,0x80,
  0x00,0x18,0x18,0x30,0x30,0x30,0x30,0x38,0x1F,0x0F,

  0x00,0xE0,0xF8,0x9C,0xCC,0xCE,0xC6,0xC6,0x86,0x06,
  0x00,0x07,0x1F,0x19,0x30,0x30,0x30,0x39,0x1F,0x0F,

  0x00,0x0E,0x0E,0x06,0x06,0x06,0x06,0xE6,0xFE,0x1E,
  0x00,0x00,0x00,0x00,0x00,0x38,0x3F,0x07,0x00,0x00,

  0x00,0x38,0xFC,0xEE,0xC6,0xC6,0xC6,0xEE,0xFC,0x38,
  0x00,0x0F,0x1F,0x39,0x30,0x30,0x30,0x39,0x1F,0x0F,

  0x00,0x78,0xFC,0xCE,0x86,0x86,0x86,0xCC,0xFC,0xF0,
  0x00,0x30,0x30,0x31,0x31,0x39,0x19,0x1C,0x0F,0x03,

  0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
};


const unsigned char icons [] = {
0xFF, 0x7F, 0x1F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x01, 0x01, 0x80, 0xF8, 0xF0, 0xE0, 0xC0, 0x81, 0x01, 0x03, 0x03, 0x07, 0x0F, 0x1F, 0x7F, 0xFF,
0xC3, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x83,
0xFF, 0xFE, 0xF8, 0xF0, 0xE3, 0xC7, 0xCF, 0x8F, 0x9F, 0x18, 0x00, 0x00, 0x00, 0x11, 0x1F, 0x9F, 0x8F, 0xC7, 0xC3, 0xE0, 0xF0, 0xF8, 0xFE, 0xFF,

0xFF, 0x7F, 0x1F, 0x0F, 0x07, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x0F, 0x1F, 0x7F, 0xFF,
0xC3, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x83,
0xFF, 0xFE, 0xF8, 0xF0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0xFE, 0xFF,

0x80, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xFE, 0xFE, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0x80,
0x01, 0x03, 0x07, 0x3F, 0xFC, 0xF8, 0xF0, 0xE0, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0xE0, 0xF0, 0xF8, 0xFC, 0x3F, 0x07, 0x03, 0x01,
0x00, 0x00, 0x00, 0x00, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x00, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x7C, 0x7E, 0x7F, 0x7F, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC,
0x00, 0xC0, 0xF0, 0xFC, 0xFE, 0xFE, 0x3F, 0x1F, 0x4F, 0xEF, 0xEF, 0xEF, 0xEF, 0xE7, 0xF2, 0xF8, 0xFC, 0xFE, 0x7F, 0x7F, 0x3F, 0x1F, 0x07, 0x01,
0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0xF8, 0xF0, 0xE0, 0xE0, 0xE1, 0xE1, 0xF1, 0xF1, 0xFD, 0xFD, 0x7E, 0x3E, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,

0xFF, 0x87, 0x03, 0x39, 0x39, 0x39, 0x39, 0x3C, 0x3C, 0x3C, 0x38, 0x79, 0xF9, 0x79, 0x79, 0x79, 0x39, 0x01, 0x83, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x02, 0x00, 0x38, 0x7F, 0x30, 0x00, 0x03, 0x03, 0x00, 0xF9, 0xFD, 0x7D, 0x19, 0xC3, 0xFF,
0xFF, 0xFF, 0xC0, 0x80, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF9, 0xFD, 0xFC, 0xFE, 0xFF, 0xFF,

0x00, 0xC0, 0xF0, 0x38, 0x18, 0x1C, 0xCE, 0xC7, 0xE3, 0x63, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0xE3, 0xC7, 0x0E, 0x1C, 0x18, 0x38, 0xF0, 0xC0, 0x00,
0x00, 0xF7, 0xFF, 0x1C, 0x0C, 0xCC, 0xCC, 0x8C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x61, 0x63, 0x63, 0x33, 0x38, 0xFF, 0xF7, 0x00,
0x00, 0x00, 0x03, 0x1F, 0x1E, 0x30, 0x30, 0x77, 0xC7, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0xCC, 0xFE, 0x78, 0x30, 0x30, 0x1E, 0x1F, 0x03, 0x00, 0x00,

0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0x60, 0x70, 0xB0, 0xB0, 0x70, 0x60, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00,
0x00, 0x06, 0x07, 0x03, 0x39, 0x39, 0x9C, 0x0E, 0xC6, 0xF8, 0x7E, 0x67, 0x67, 0x7E, 0xF8, 0xC6, 0x0E, 0x9C, 0x39, 0x33, 0x03, 0x07, 0x06, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x0C, 0x1E, 0x1E, 0x0C, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0x60, 0xB0, 0xB0, 0xB0, 0xB0, 0x60, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00,
0x00, 0x06, 0x07, 0x03, 0x39, 0x39, 0x9C, 0xCE, 0x00, 0xCF, 0x9F, 0x99, 0x99, 0xF9, 0xF3, 0x08, 0xCE, 0x9C, 0x39, 0x33, 0x03, 0x07, 0x06, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x0D, 0x1D, 0x1D, 0x0D, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

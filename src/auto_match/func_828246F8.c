typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


void fn_828246F8(int param_1,int *param_2,int *param_3)

{
  uint in_r11;
  int iVar1;
  
  do {
    if (0x30 < in_r11) {
      if (((in_r11 != 0x40) && (in_r11 != 0x84)) && (in_r11 != 0x100)) {
        return;
      }
code_r0x82824718:
      iVar1 = param_2[4];
code_r0x8282471c:
      *param_3 = iVar1;
      return;
    }
    if (in_r11 == 0x30) {
code_r0x8282472c:
      iVar1 = param_2[7];
      goto code_r0x8282471c;
    }
    if ((in_r11 == 2) || (in_r11 == 4)) goto code_r0x82824718;
    if (in_r11 != 8) {
      if (in_r11 != 0x10) {
        return;
      }
      goto code_r0x8282472c;
    }
    param_2 = (int *)(**(int **)(param_1 + 0x388) + *param_2 * 0x20);
    in_r11 = param_2[2];
  } while( true );
}


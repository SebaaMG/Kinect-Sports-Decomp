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


void fn_82AF54D8(undefined8 param_1,uint param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int *in_r11;
  byte in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return;
    }
    puVar1 = (uint *)*in_r11;
    uVar3 = 0;
    if ((*puVar1 & 0x1fff) != 0) {
      puVar2 = puVar1 + 6;
      do {
        if (*puVar2 == param_2) {
          puVar1[uVar3 + 6] = param_3;
          *param_4 = in_r11[1];
          in_r11[1] = *(int *)(param_3 + 0x20);
          *(int **)(param_3 + 0x20) = in_r11;
          break;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < (*puVar1 & 0x1fff));
    }
    if (uVar3 == (*puVar1 & 0x1fff)) {
      param_4 = in_r11 + 1;
    }
    in_r11 = (int *)*param_4;
    in_cr6 = (in_r11 == (int *)0x0) << 1;
  } while( true );
}


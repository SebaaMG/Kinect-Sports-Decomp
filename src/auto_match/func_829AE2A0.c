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


void fn_829AE2A0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 != 0) {
    *(int *)(param_2 + 0x30) = param_3;
  }
  if (param_5 != 0) {
    puVar1 = (undefined2 *)(param_5 + -2);
    puVar2 = (undefined2 *)(param_2 + 0x32);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (param_4 == 0) {
      param_4 = 1;
    }
  }
  *(short *)(param_2 + 0x16) = (short)param_4;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  return;
}


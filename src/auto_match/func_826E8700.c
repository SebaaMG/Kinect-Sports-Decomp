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
extern int fn_826E7800();


void fn_826E8700(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 4);
      *(undefined1 *)(iVar2 + 0x15) = 0;
      if (*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) < 1) {
        fn_826E7800(iVar2,1);
      }
      uVar1 = *(undefined1 *)(*(int *)(iVar2 + 0x3c) + *(int *)(iVar2 + 0x2c));
      *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
      *(undefined1 *)(uVar3 + param_2) = uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return;
}


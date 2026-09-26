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
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_826A9318(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  lVar2 = param_1 - 0x14;
  if ((param_1 & 0xffffffff) == 0) {
    lVar2 = 0;
  }
  lVar3 = lVar2;
  if (lVar2 == -0x14) {
    lVar3 = 0;
  }
  if ((*(uint *)((int)lVar3 + 0x18) >> 1 & 1) != 0) {
    piVar1 = *(int **)(*(int *)((int)lVar2 + 0x10) + 0xc);
    if (piVar1 != (int *)0x0) {
      uStack00000020 = param_3;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      uStack00000048 = param_8;
      (**(code **)(*piVar1 + 4))(piVar1,0x33,param_2,&stack0x00000020);
    }
  }
  return;
}


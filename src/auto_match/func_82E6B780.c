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
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E6B780(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(*param_1 + 0x100);
  uVar3 = 0;
  uVar1 = (int)uVar2 / (int)param_4;
  trapWord(6,param_4,0);
  trapWord(5,param_4 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),
           0xffff);
  uVar2 = uVar1;
  while (1 < uVar2) {
    uVar3 = uVar3 + 1;
    uVar2 = uVar1 >> (uVar3 & 0x3f);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_5,0,0x70);
}


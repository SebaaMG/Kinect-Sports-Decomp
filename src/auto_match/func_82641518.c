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
extern int fn_82645110();


uint * fn_82641518(int param_1,uint *param_2,longlong param_3,uint *param_4,ulonglong param_5,
                    ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  
  while( true ) {
    trapWord(6,param_6,0);
    uVar4 = (*(int *)(param_1 + 0x34) - (int)param_2 >> 2) - 1;
    iVar1 = (int)uVar4 / (int)param_6;
    trapWord(5,param_6 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)) - 1),
             0xffff);
    if (0 < iVar1) {
      uVar3 = (longlong)iVar1 * (longlong)(int)param_6;
      if ((param_5 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
        uVar3 = param_5;
      }
      param_5 = param_5 - uVar3;
      param_2 = param_2 + 1;
      *param_2 = (uint)((uVar3 - 1 & 0xffffffff) << 0x10) | (uint)param_3;
      uVar5 = uVar3;
      uVar2 = uVar3 & 0xffffffff;
      while (uVar2 != 0) {
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
        *param_2 = *param_4;
        uVar5 = uVar5 - 1;
        uVar2 = uVar5;
      }
      param_3 = uVar3 + param_3;
    }
    if ((param_5 & 0xffffffff) == 0) break;
    *(uint **)(param_1 + 0x30) = param_2;
    fn_82645110(param_1);
    param_2 = *(uint **)(param_1 + 0x30);
  }
  return param_2;
}


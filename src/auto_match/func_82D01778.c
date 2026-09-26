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


void fn_82D01778(int param_1,int *param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 != (int *)0x0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 4);
    do {
      uVar3 = (ulonglong)(uint)param_2[2];
      uVar2 = (longlong)param_2[3] * (longlong)(int)uVar1 + uVar3;
      if (uVar3 < (uVar2 & 0xffffffff)) {
        do {
          (*param_3)(uVar3,uVar1,0,param_4,param_5);
          uVar1 = (ulonglong)*(uint *)(param_1 + 4);
          uVar3 = uVar1 + uVar3;
        } while ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff));
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)0x0);
  }
  return;
}


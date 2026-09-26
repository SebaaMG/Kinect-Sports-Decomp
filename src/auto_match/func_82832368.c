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
extern unsigned int *auStack_20;
extern int fn_8233EB88();
extern int fn_82360E28();


void fn_82832368(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_20 [8];
  
  uVar1 = (int)(param_1[1] - *param_1) >> 2;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_8233EB88(auStack_20,param_1,(param_2 & 0x3fffffff) * 4 + (ulonglong)*param_1);
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    fn_82360E28(param_1,param_2 - (longlong)(int)uVar1);
    uVar4 = param_2 - (longlong)((int)(param_1[1] - *param_1) >> 2);
    if (uVar4 != 0) {
      puVar3 = (undefined4 *)(param_1[1] - 4);
      uVar2 = uVar4 & 0xffffffff;
      while (uVar2 != 0) {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
        uVar4 = uVar4 - 1;
        uVar2 = uVar4;
      }
    }
    param_1[1] = (int)((param_2 - (longlong)((int)(param_1[1] - *param_1) >> 2) & 0xffffffff) << 2)
                 + param_1[1];
  }
  return;
}


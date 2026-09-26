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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_10;


longlong fn_83085B40(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                      ulonglong param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong auStack_10 [2];
  
  auStack_10[0] = CONCAT44(param_5,(int)param_6) & 0x7fffffffffffffff;
  *(ulonglong *)(param_4 * 8 + param_1) = auStack_10[0];
  if (0 < (int)param_6) {
    param_3 = param_5 * 0x10 + param_3;
    uVar3 = param_6;
    do {
      uVar3 = uVar3 - 1;
      puVar1 = (undefined4 *)((int)auStack_10 + in_r0 & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      param_3 = param_3 + 0x10;
    } while (uVar3 != 0);
  }
  return (param_6 & 0x7fffffff) * 2 + -2;
}


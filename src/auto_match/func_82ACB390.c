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
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82F68CC0();


void fn_82ACB390(undefined4 *param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = (param_2 & 0xffffffff) >> 2 & 0x3ffffffc;
  uVar5 = uVar4 + 4;
  uVar1 = (param_2 & 0xffffffff) >> 4;
  if ((uint)param_1[3] < uVar5) {
    uVar2 = fn_82ABE9F0(*param_1,uVar5 * 4 & 0xfffffffc,0);
    fn_82F68CC0(uVar2,param_1[2],param_1[3] << 2);
    fn_82AC6808(*param_1,param_1[2],param_1[3] << 2,0);
    param_1[2] = (int)uVar2;
    param_1[3] = (int)uVar5;
  }
  if ((uint)param_1[4] < uVar1) {
    param_1[4] = (int)uVar1;
  }
  lVar3 = 0;
  lVar6 = 4;
  do {
    if ((param_2 & 0xf & (ulonglong)(uint)(1 << ((uint)lVar3 & 0x3f))) != 0) {
      *(undefined4 *)((int)((uVar4 + lVar3 & 0xffffffff) << 2) + param_1[2]) = param_3;
    }
    lVar3 = lVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}


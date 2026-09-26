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
extern int fn_8265CA60();
extern int fn_82F64840();
extern unsigned int lbl_82025404;


undefined4 * fn_828BAA10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  param_1[6] = 4;
  *param_1 = &lbl_82025404;
  iVar1 = param_2[4];
  iVar4 = iVar1 + 1;
  uVar2 = iVar1 + 1U & 0x7fffffff;
  if (0x7fffffff < iVar1 + 1U) {
    uVar2 = 0xffffffff;
  }
  uVar3 = fn_8265CA60(uVar2);
  param_1[5] = (int)uVar3;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  fn_82F64840(uVar3,iVar4,param_2,iVar1);
  *(undefined2 *)(iVar4 * 2 + param_1[5] + -2) = 0;
  param_1[4] = iVar4;
  return param_1;
}


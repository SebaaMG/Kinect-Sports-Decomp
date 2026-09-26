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
extern int fn_82F68CC0();
extern unsigned int lbl_82025404;


undefined4 * fn_828BA1C0(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  param_1[6] = 0;
  *param_1 = &lbl_82025404;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = *param_2;
  *(undefined8 *)(param_1 + 4) = param_2[1];
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if (uVar3 - 1 < 7) {
    if (uVar3 == 2) {
      param_1[6] = 2;
    }
    else if (uVar3 == 3) {
      param_1[6] = 3;
    }
    else if (uVar3 == 4) {
      param_1[6] = 4;
    }
    else if (uVar3 == 5) {
      param_1[6] = 5;
    }
    else if (uVar3 == 6) {
      param_1[6] = 6;
    }
    else if (uVar3 == 1) {
      param_1[6] = 1;
    }
    else {
      param_1[6] = 7;
    }
  }
  else {
    param_1[6] = 0;
  }
  if (param_1[6] == 4) {
    uVar3 = param_1[4];
    if ((uVar3 != 0) && (*(int *)((int)param_2 + 0xc) != 0)) {
      lVar1 = ((ulonglong)uVar3 & 0x7fffffff) << 1;
      if (0x7fffffff < uVar3) {
        lVar1 = -1;
      }
      uVar2 = fn_8265CA60(lVar1);
      param_1[5] = (int)uVar2;
      fn_82F64840(uVar2,(ulonglong)(uint)param_1[4],*(undefined4 *)((int)param_2 + 0xc),
                        (ulonglong)(uint)param_1[4] - 1);
      *(undefined2 *)(param_1[4] * 2 + param_1[5] + -2) = 0;
      return param_1;
    }
  }
  else {
    if (param_1[6] != 6) {
      return param_1;
    }
    if ((param_1[4] != 0) && (*(int *)((int)param_2 + 0xc) != 0)) {
      uVar2 = fn_8265CA60();
      param_1[5] = (int)uVar2;
      fn_82F68CC0(uVar2,*(undefined4 *)((int)param_2 + 0xc),param_1[4]);
      return param_1;
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  return param_1;
}


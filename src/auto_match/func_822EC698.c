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
extern int fn_8223B688();
extern int fn_822DD2E8();


void fn_822EC698(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  if (((ulonglong)uVar3 <= (param_2 & 0xffffffff)) ||
     (bVar2 = true, (param_2 & 0xffffffff) < (ulonglong)*param_1)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *param_1;
    if (uVar3 == param_1[2]) {
      fn_822DD2E8(param_1,1);
    }
    uVar3 = param_1[1];
    if (uVar3 == 0) goto LAB_822ec74c;
    param_2 = (longlong)((int)((int)param_2 - uVar1) / 0x1c) * 0x1c + (ulonglong)*param_1;
  }
  else {
    if (uVar3 == param_1[2]) {
      fn_822DD2E8(param_1,1);
    }
    uVar3 = param_1[1];
    if (uVar3 == 0) goto LAB_822ec74c;
  }
  fn_8223B688(uVar3,param_2);
LAB_822ec74c:
  param_1[1] = param_1[1] + 0x1c;
  return;
}


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
extern int fn_82A52830();
extern int fn_82A6CA88();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8 fn_82A6CF00(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = 0;
  if ((*(int *)(param_1[2] + 0x2c0) != 0) &&
     ((uint)(param_1[7] + param_1[8]) < (uint)(param_1[6] + param_1[5]))) {
    fn_82A6CA88();
    if (param_2 == 0) {
      iVar1 = param_1[8] * 8 + param_1[0xc];
    }
    else {
      iVar1 = 0;
    }
    if (param_3 <= (uint)(param_1[10] + iVar1)) {
      return 0;
    }
  }
  if (param_1[0x13] == 0) {
    if ((code *)*param_1 == (code *)0x0) {
      return 0xffffffff80040004;
    }
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar2 = (*(code *)*param_1)(param_1[1],&uStack_60);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82A52830(param_1[2],&uStack_60);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((((uint)param_1[10] < 0x18) && (*(int *)(param_1[2] + 0x2c0) != 0)) &&
       ((uint)(param_1[8] + param_1[7]) < (uint)(param_1[6] + param_1[5]))) {
      fn_82A6CA88(param_1);
    }
  }
  if (param_2 == 0) {
    iVar1 = param_1[8] * 8 + param_1[0xc];
  }
  else {
    iVar1 = 0;
  }
  if (param_3 <= (uint)(param_1[10] + iVar1)) {
    return uVar2;
  }
  if (param_1[0x13] != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (param_2 == 1) {
      return uVar2;
    }
  }
  return 0xffffffff80040004;
}


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
extern unsigned int *auStack_40;
extern int fn_82CE1A58();
extern int fn_82CE1B40();


void fn_828ED508(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 auStack_40 [16];
  
  if (4 < (param_5 & 0xffffffff)) {
    param_5 = 4;
  }
  if (param_1[2] == 0) {
    auStack_40[0] = 0;
    if ((param_5 & 0xffffffff) == 0) {
      fn_82CE1A58();
    }
    else {
      fn_82CE1B40(param_2,param_3,param_4,param_5,0,0,0,0);
    }
    (**(code **)(*param_1 + 0x54))(param_1,auStack_40[0]);
    if (param_1[4] != 0) {
      piVar2 = param_1 + 4;
      lVar3 = 7;
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if ((param_5 & 0xffffffff) == 0) {
        iVar1 = fn_82CE1A58(param_2,param_3,param_4,param_1[0xcc] & 0xffff,
                                  param_1[0x10d] & 0xffff,param_1 + 0xc,param_1 + 0xcd,auStack_40);
      }
      else {
        iVar1 = fn_82CE1B40(param_2,param_3,param_4,param_5,param_1[0xcc] & 0xffff,
                                param_1[0x10d] & 0xffff,param_1 + 0xc,param_1 + 0xcd);
      }
      if (iVar1 == 0x3e5) {
        *(undefined1 *)(param_1 + 0x10e) = 0;
        param_1[2] = 1;
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        (**(code **)(*param_1 + 0x58))(param_1);
      }
    }
  }
  return;
}


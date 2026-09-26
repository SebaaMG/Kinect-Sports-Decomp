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


void fn_82DD4940(int *param_1,undefined2 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 uVar7;
  
  *(char *)(param_2 + 4) = (char)*param_1;
  *(char *)((int)param_2 + 9) = (char)param_1[1];
  uVar6 = param_1[0xb] & 0xffff;
  uVar7 = (undefined2)param_1[0xb];
  if (1 < *param_1) {
    uVar1 = param_1[0xf] & 0xffff;
    cVar2 = uVar6 < uVar1;
    uVar3 = (short)param_1[0xf];
    if ((bool)cVar2) {
      uVar6 = uVar1;
      uVar3 = uVar7;
    }
    uVar7 = (undefined2)uVar6;
    if (2 < *param_1) {
      uVar5 = (undefined2)param_1[0x13];
      uVar4 = uVar5;
      if (uVar6 < (param_1[0x13] & 0xffffU)) {
        cVar2 = cVar2 + '\x01';
        uVar4 = uVar7;
        uVar7 = uVar5;
      }
      uVar5 = uVar4;
      if (cVar2 == '\x01') {
        uVar5 = uVar3;
        uVar3 = uVar4;
      }
      param_2[2] = uVar5;
    }
    param_2[1] = uVar3;
  }
  *param_2 = uVar7;
  uVar6 = param_1[0x3b] & 0xffff;
  uVar7 = (undefined2)param_1[0x3b];
  if (1 < param_1[1]) {
    uVar1 = param_1[0x3f] & 0xffff;
    cVar2 = uVar6 < uVar1;
    uVar3 = (short)param_1[0x3f];
    if ((bool)cVar2) {
      uVar6 = uVar1;
      uVar3 = uVar7;
    }
    uVar7 = (undefined2)uVar6;
    if (2 < param_1[1]) {
      uVar5 = (undefined2)param_1[0x43];
      uVar4 = uVar5;
      if (uVar6 < (param_1[0x43] & 0xffffU)) {
        cVar2 = cVar2 + '\x01';
        uVar4 = uVar7;
        uVar7 = uVar5;
      }
      uVar5 = uVar4;
      if (cVar2 == '\x01') {
        uVar5 = uVar3;
        uVar3 = uVar4;
      }
      param_2[*param_1 + 2] = uVar5;
    }
    param_2[*param_1 + 1] = uVar3;
  }
  param_2[*param_1] = uVar7;
  return;
}


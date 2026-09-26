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
extern unsigned int *auStack_3c;
extern int fn_82A2E6A8();
extern int fn_82A2F1D0();
extern unsigned int uStack_40;


undefined8 fn_82A30910(int param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uStack_40;
  uint auStack_3c [15];
  
  uStack_40 = *(uint *)(param_2 + 0x24);
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x14);
  if ((uVar3 != 0) && (uStack_40 == 0xffffffff)) {
    uVar2 = fn_82A2E6A8(param_1,param_2,uVar3 - 1,&uStack_40,auStack_3c,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(uint *)(param_2 + 0x24) = uStack_40;
  }
  uVar1 = (param_3 - uVar3 & 0xffffffff) >> 0xc;
  uVar2 = fn_82A2F1D0(param_1,uVar1,*(byte *)(param_2 + 0x35) >> 2 & 1,uStack_40,
                        0xffffffffffffffff,auStack_3c,&uStack_40);
  if (-1 < (int)uVar2) {
    *(int *)(param_2 + 0x14) = (int)param_3;
    *(uint *)(param_2 + 0x24) = uStack_40;
    if ((uVar3 == 0) &&
       (*(uint *)(param_2 + 0x20) = auStack_3c[0],
       (((ulonglong)uStack_40 - (ulonglong)auStack_3c[0]) + 1 & 0xffffffff) == uVar1)) {
      *(int *)(param_2 + 0x2c) = (int)param_3;
      *(uint *)(param_2 + 0x30) = auStack_3c[0];
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    if ((*(byte *)(param_2 + 0x35) & 4) == 0) {
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x10;
    }
    else {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


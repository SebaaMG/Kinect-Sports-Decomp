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
extern int fn_82BFDD90();
extern int fn_82BFDF48();


ulonglong fn_82BFE530(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x40) != 0x4c665175)) {
    return 0xffffffff80070057;
  }
  puVar1 = *(uint **)(param_1 + 0x4c);
  if ((puVar1 == (uint *)0x0) || (uVar2 = *puVar1, (uVar2 & 8) == 0)) {
    uVar3 = fn_82BFDD90(param_1,auStack_20);
  }
  else {
    uVar3 = fn_82BFDF48(param_1,auStack_20,puVar1[2],puVar1[6],uVar2 >> 5 & 1,puVar1[4],
                          uVar2 >> 7 & 1);
  }
  uVar4 = 0;
  if ((uVar3 & 0xffffffff) != 0) {
    if ((uVar3 & 0xffffffff) == 0x102) {
      return 0xffffffff80310002;
    }
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
    uVar4 = uVar3;
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = auStack_20[0];
  }
  return uVar4;
}


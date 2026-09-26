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
extern unsigned int *auStack_50;
extern int fn_82907DE8();
extern int fn_82964760();


undefined8
fn_829080F8(int param_1,ulonglong param_2,undefined8 param_3,uint param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 auStack_50 [20];
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    auStack_50[0] = 0;
    if (param_4 < *(uint *)(*(int *)(param_1 + 8) + 4)) {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + param_4 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      uVar2 = 0xffffffff80004005;
    }
    else {
      uVar3 = fn_82964760();
      if (uVar3 < *(uint *)(*(int *)(param_1 + 8) + 4)) {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 == 0) {
        uVar2 = 0xffffffff8007000e;
      }
      else {
        uVar1 = *(uint *)(iVar4 + 4);
        *(uint *)(iVar4 + 4) = uVar1 | 0x40;
        if ((uVar1 & 0x10) != 0) {
          if ((uVar1 & 0x80) == 0) {
            if (((uVar1 & 0x200) != 0) &&
               ((*(uint *)(*(int *)(param_1 + 8) + 0x70) & 0x200000) != 0)) {
              *(uint *)(iVar4 + 4) = uVar1 | 0x440;
            }
            if (((*(uint *)(iVar4 + 4) & 0x200) == 0) &&
               ((*(uint *)(*(int *)(param_1 + 8) + 0x70) & 0x100000) != 0)) {
              *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 0x100400;
            }
          }
        }
        uVar2 = fn_82907DE8(param_1,param_2,param_3,uVar3,param_5,param_6,param_7,auStack_50);
      }
    }
  }
  return uVar2;
}


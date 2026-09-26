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
extern int fn_82EEDD00();
extern int fn_82F41CE0();


longlong fn_82EEE390(int param_1,short param_2,ulonglong param_3,short param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int aiStack_50 [20];
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((param_2 == -1) || ((param_3 & 0xffffffff) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    uVar5 = 0;
    if (uVar1 != 0) {
      while( true ) {
        aiStack_50[0] = 0;
        lVar2 = fn_82EEDD00(param_1,uVar5,aiStack_50);
        iVar4 = aiStack_50[0];
        if (lVar2 < 0) {
          return lVar2;
        }
        if (aiStack_50[0] == 0) break;
        if ((((param_2 == *(short *)(aiStack_50[0] + 0x14)) &&
             (param_4 == *(short *)(aiStack_50[0] + 0x40))) &&
            ((((iVar3 = fn_82F41CE0(param_3,*(undefined4 *)(aiStack_50[0] + 0x18)), iVar3 != 0
               || ((*(int *)(iVar4 + 0x20) != 0 &&
                   (iVar3 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x20)), iVar3 != 0)))) ||
              ((*(int *)(iVar4 + 0x28) != 0 &&
               (iVar3 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x28)), iVar3 != 0)))) ||
             (((*(int *)(iVar4 + 0x30) != 0 &&
               (iVar3 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x30)), iVar3 != 0)) ||
              ((*(int *)(iVar4 + 0x38) != 0 &&
               (iVar4 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x38)), iVar4 != 0)))))))) ||
           (uVar5 = uVar5 + 1, (ulonglong)uVar1 <= (uVar5 & 0xffffffff))) goto LAB_82eee4c0;
      }
      lVar2 = -0x3ff2c945;
LAB_82eee4c0:
      if ((int)lVar2 < 0) {
        return lVar2;
      }
      if ((uVar5 & 0xffffffff) < (ulonglong)uVar1) {
        return lVar2;
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}


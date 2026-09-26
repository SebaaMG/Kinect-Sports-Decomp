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
extern int fn_82ED5948();
extern int fn_82ED5AA0();
extern int fn_82ED5C68();
extern int fn_82F00638();
extern unsigned int iStack_7c;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int uStack_80;
extern unsigned int uStack_82;
extern unsigned int uStack_84;
extern unsigned int uStack_90;


void fn_82EDAED0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined4 uStack_80;
  int iStack_7c;
  
  iVar1 = *(int *)(param_1 + 0x55c);
  iVar2 = *(int *)(param_1 + 0x554);
  uVar3 = *(uint *)(param_1 + 0x550);
  uVar4 = *(uint *)(param_1 + 0x548);
  if ((((*(int *)(param_1 + 0x7820) != 0) || (*(int *)(param_1 + 0x7824) != 0)) ||
      (((*(int *)(param_1 + 0x77a0) != 0 || (*(int *)(param_1 + 0x77a4) != 0)) &&
       ((*(int *)(param_1 + 0x4ab0) != *(int *)(*(int *)(param_1 + 0x4aa8) + 4) ||
        (*(int *)(param_1 + 0x4ab4) != *(int *)(*(int *)(param_1 + 0x4aa8) + 8))))))) ||
     (*(int *)(param_1 + 0x4b0c) != 0)) {
    if ((*(int *)(param_1 + 0x84c) == 0) || (*(longlong *)(param_1 + 0x2e0) == 1)) {
      uVar8 = *(undefined4 *)(param_1 + 0x310);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x1c) + (ulonglong)*(uint *)(param_1 + 0x578);
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x578);
      fn_82ED5AA0(param_1,uVar8,uVar9,uVar6,*(undefined4 *)(param_1 + 0x4a94),
                        *(undefined4 *)(param_1 + 0x4a98),*(undefined4 *)(param_1 + 0x4a9c));
    }
    else if ((*(int *)(param_1 + 0xaf0) == 2) || (*(int *)(param_1 + 0xaf0) == 4)) {
      uVar8 = *(undefined4 *)(param_1 + 0x4a94);
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x4a98);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x4a9c);
      fn_82ED5AA0(param_1,uVar8,uVar9,uVar6);
    }
    else {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x578);
      uVar9 = *(uint *)(param_1 + 0x1e80) + uVar7;
      uVar6 = *(uint *)(param_1 + 0x1e84) + uVar7;
      uVar8 = *(undefined4 *)(param_1 + 0x1e88);
      fn_82ED5AA0(param_1,uVar8,uVar9,uVar6,*(undefined4 *)(param_1 + 0x310),
                        *(uint *)(param_1 + 0x18) + uVar7,*(uint *)(param_1 + 0x1c) + uVar7);
    }
    if ((*(int *)(param_1 + 0x7820) != 0) || (*(int *)(param_1 + 0x7824) != 0)) {
      fn_82F00638(param_1,uVar8,uVar9,uVar6,(longlong)(int)uVar4 * (longlong)(int)uVar3,
                      (longlong)iVar2 * (longlong)iVar1);
    }
    if (((*(int *)(param_1 + 0x77a0) == 0) && (*(int *)(param_1 + 0x77a4) == 0)) ||
       ((*(int *)(param_1 + 0x4ab0) == *(int *)(*(int *)(param_1 + 0x4aa8) + 4) &&
        (*(int *)(param_1 + 0x4ab4) == *(int *)(*(int *)(param_1 + 0x4aa8) + 8))))) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4aa8) + 0x10);
      if (((iVar1 == 0x56555949) || (iVar1 == 0x30323449)) || (iVar1 == 0x31313450)) {
        fn_82ED5948(param_1,*(int *)(param_1 + 0x4aa8),*(undefined4 *)(param_1 + 0x4afc),0,0,
                          *(undefined4 *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x550),uVar8);
      }
      else {
        fn_82ED5948(param_1,param_1 + 0x1fc4,*(undefined4 *)(param_1 + 0x4afc),0,0,
                          *(undefined4 *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x550),uVar8);
      }
    }
    else {
      fn_82ED5C68(param_1,uVar8,uVar9,uVar6,*(undefined4 *)(param_1 + 0x4b04));
      iVar1 = *(int *)(param_1 + 0x4afc);
      fn_82ED5948(param_1,param_1 + 0x4ad4,iVar1,0,0,*(undefined4 *)(iVar1 + 4),
                        *(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 0x4b04));
    }
    return;
  }
  iStack_88 = *(int *)(param_1 + 0x56c);
  iStack_8c = *(int *)(param_1 + 0x564);
  uStack_84 = 1;
  iVar1 = *(int *)(param_1 + 0x4afc);
  uStack_90 = 0x28;
  uVar5 = iStack_8c * iStack_88 * 3;
  uStack_80 = 0x56555949;
  uStack_82 = 0xc;
  iStack_7c = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  uVar6 = (ulonglong)((int)*(uint *)(iVar1 + 4) >> 0x1f);
  uVar6 = (*(uint *)(iVar1 + 4) ^ uVar6) - uVar6;
  uVar9 = (ulonglong)uVar4;
  if ((int)uVar6 <= (int)uVar4) {
    uVar9 = uVar6;
  }
  uVar7 = (ulonglong)((int)*(uint *)(iVar1 + 8) >> 0x1f);
  uVar7 = (*(uint *)(iVar1 + 8) ^ uVar7) - uVar7;
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar7 <= (int)uVar3) {
    uVar6 = uVar7;
  }
  if ((((*(int *)(param_1 + 0x84c) != 0) && (*(longlong *)(param_1 + 0x2e0) != 1)) &&
      (*(int *)(param_1 + 0xaf0) != 2)) && (*(int *)(param_1 + 0xaf0) != 4)) {
    fn_82ED5948(param_1,&uStack_90,iVar1,0x20,0x20,uVar9,uVar6,*(undefined4 *)(param_1 + 0x14)
                     );
    return;
  }
  fn_82ED5948(param_1,&uStack_90,iVar1,0x20,0x20,uVar9,uVar6,
                    (ulonglong)*(uint *)(param_1 + 0x4a94) - (ulonglong)*(uint *)(param_1 + 0x574));
  return;
}


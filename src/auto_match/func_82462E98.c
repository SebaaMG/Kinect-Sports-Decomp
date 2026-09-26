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
extern unsigned int fStack_18;
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern int fn_82F4EFF8();
extern unsigned int lbl_821CC160;


void fn_82462E98(int param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  int in_r0;
  int iVar7;
  char cVar8;
  undefined8 uVar6;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float afStack_20 [2];
  float fStack_18;
  
  iVar7 = fn_82F4EBC0(0);
  if (iVar7 != 0) {
    fn_82F4EBC0(0);
    cVar8 = fn_82F4EFF8();
    if (cVar8 == '\0') {
      iVar7 = *(int *)(param_1 + 0x248);
      if (iVar7 == 0) {
        return;
      }
      bVar1 = *(int *)(iVar7 + 0x48) == 9;
      *(undefined4 *)(iVar7 + 0x4c) = 9;
      uVar10 = lbl_821CC160;
    }
    else {
      uVar6 = fn_82F4EBC0(0);
      fn_82F4EEC0(afStack_20,uVar6);
      fVar2 = *(float *)(param_1 + 0x1d0);
      bVar1 = false;
      bVar5 = false;
      puVar3 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar9 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar9;
      puVar4[3] = uVar11;
      uVar10 = lbl_821CC160;
      if (afStack_20[0] <= fVar2) {
        if (*(float *)(param_1 + 0x1c0) <= afStack_20[0]) {
          bVar1 = true;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x248);
          if (iVar7 != 0) {
            *(undefined4 *)(iVar7 + 0x4c) = 4;
            if (*(int *)(iVar7 + 0x48) != 4) {
              *(undefined4 *)(iVar7 + 0x80) = uVar10;
            }
            *(undefined4 *)(*(int *)(param_1 + 0x248) + 0x50) = uVar10;
          }
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x248);
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x4c) = 3;
          if (*(int *)(iVar7 + 0x48) != 3) {
            *(undefined4 *)(iVar7 + 0x80) = uVar10;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x248) + 0x50) = uVar10;
        }
        bVar5 = true;
      }
      if (fStack_18 <= *(float *)(param_1 + 0x1d8)) {
        if (*(float *)(param_1 + 0x1c8) <= fStack_18) {
          return;
        }
        if (bVar1) {
          iVar7 = *(int *)(param_1 + 0x248);
          if (iVar7 == 0) {
            return;
          }
          uVar9 = 1;
          bVar1 = *(int *)(iVar7 + 0x48) == 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x248);
          if (iVar7 == 0) {
            return;
          }
          if (bVar5) {
            uVar9 = 5;
            bVar1 = *(int *)(iVar7 + 0x48) == 5;
          }
          else {
            uVar9 = 6;
            bVar1 = *(int *)(iVar7 + 0x48) == 6;
          }
        }
      }
      else if (bVar1) {
        iVar7 = *(int *)(param_1 + 0x248);
        if (iVar7 == 0) {
          return;
        }
        uVar9 = 2;
        bVar1 = *(int *)(iVar7 + 0x48) == 2;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x248);
        if (iVar7 == 0) {
          return;
        }
        if (bVar5) {
          uVar9 = 7;
          bVar1 = *(int *)(iVar7 + 0x48) == 7;
        }
        else {
          uVar9 = 8;
          bVar1 = *(int *)(iVar7 + 0x48) == 8;
        }
      }
      *(undefined4 *)(iVar7 + 0x4c) = uVar9;
    }
    if (!bVar1) {
      *(undefined4 *)(iVar7 + 0x80) = uVar10;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x248) + 0x50) = uVar10;
  }
  return;
}


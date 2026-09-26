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
extern unsigned int *auStack_470;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4b0;
extern int fn_8265C990();
extern int fn_82A3FF60();
extern int fn_82A42808();
extern int fn_82A4F4E0();
extern int fn_82F68CC0();
extern unsigned int uStack_4ac;


ulonglong fn_82A40CF0(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  short *psVar3;
  ulonglong uVar4;
  short *psVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int aiStack_4c0 [4];
  undefined1 auStack_4b0 [4];
  undefined4 uStack_4ac;
  short *psStack_4a8;
  short *psStack_4a4;
  undefined1 auStack_4a0 [48];
  undefined1 auStack_470 [1136];
  
  puVar7 = (undefined4 *)(param_1 + 0xb0);
  uVar1 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar1 = fn_82A42808(puVar7);
  }
  aiStack_4c0[0] = 0;
  if ((-1 < (int)uVar1) &&
     (uVar1 = (**(code **)(*(int *)*puVar7 + 0x10))((int *)*puVar7,aiStack_4c0),
     -1 < (longlong)uVar1)) {
    if (*(int *)(param_1 + 0x98) == aiStack_4c0[0]) {
      return uVar1;
    }
    *(int *)(param_1 + 0x98) = aiStack_4c0[0];
    if (*(int *)(param_1 + 0x9c) != 0) {
      fn_82A4F4E0();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x98) * 0x42c;
    if (0x3d5d00 < (ulonglong)*(uint *)(param_1 + 0x98)) {
      lVar2 = -1;
    }
    lVar2 = fn_82A3FF60(0xffffffff83219d50,lVar2,0x20970001,0);
    *(int *)(param_1 + 0x9c) = (int)lVar2;
    uVar8 = 0;
    uVar1 = -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar10 = 0;
      do {
        if ((int)uVar1 < 0) goto LAB_82a40f60;
        uVar1 = (**(code **)(*(int *)*puVar7 + 0x14))((int *)*puVar7,uVar8,auStack_4b0);
        if (-1 < (longlong)uVar1) {
          *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar10 + 0x400) = uStack_4ac;
          fn_82F68CC0(*(int *)(param_1 + 0x9c) + iVar10 + 0x404,auStack_4a0,0x28);
          uVar4 = 0x100;
          psVar5 = (short *)(*(int *)(param_1 + 0x9c) + iVar10);
          psVar3 = psStack_4a8;
          do {
            if (*psVar3 == 0) break;
            *psVar5 = *psVar3;
            uVar4 = uVar4 - 1;
            psVar5 = psVar5 + 1;
            psVar3 = psVar3 + 1;
          } while (uVar4 != 0);
          if ((uVar4 & 0xffffffff) == 0) {
            psVar5 = psVar5 + -1;
          }
          *psVar5 = 0;
          uVar4 = 0x100;
          psVar5 = (short *)(*(int *)(param_1 + 0x9c) + iVar10 + 0x200);
          psVar3 = psStack_4a4;
          do {
            if (*psVar3 == 0) break;
            *psVar5 = *psVar3;
            uVar4 = uVar4 - 1;
            psVar5 = psVar5 + 1;
            psVar3 = psVar3 + 1;
          } while (uVar4 != 0);
          if ((uVar4 & 0xffffffff) == 0) {
            psVar5 = psVar5 + -1;
          }
          *psVar5 = 0;
          fn_8265C990(psStack_4a8,0x20970000);
          fn_8265C990(psStack_4a4,0x20970000);
        }
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + 0x42c;
      } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x98));
    }
    if (-1 < (int)uVar1) {
      uVar9 = 1;
      if (*(uint *)(param_1 + 0x98) < 2) {
        return uVar1;
      }
      iVar10 = *(int *)(param_1 + 0x9c);
      iVar6 = 0x42c;
      do {
        if ((*(uint *)(iVar6 + iVar10 + 0x400) & 8) != 0) {
          fn_82F68CC0(auStack_470,iVar10,0x42c);
          fn_82F68CC0(iVar10,uVar9 * 0x42c + iVar10,0x42c);
          fn_82F68CC0(*(int *)(param_1 + 0x9c) + uVar9 * 0x42c,auStack_470,0x42c);
          return uVar1;
        }
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x42c;
      } while (uVar9 < *(uint *)(param_1 + 0x98));
      return uVar1;
    }
  }
LAB_82a40f60:
  if (*(int *)(param_1 + 0x9c) != 0) {
    fn_82A4F4E0();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  return uVar1;
}


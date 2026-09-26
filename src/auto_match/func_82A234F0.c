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
extern unsigned int *auStack_70;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1DDC0();
extern int fn_82A1E228();
extern int fn_82A1FBD8();
extern int fn_82A207C8();
extern int fn_82A21110();
extern int fn_82A21458();
extern int fn_82A21B98();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219C28;


int fn_82A234F0(int param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  int iVar5;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong auStack_70 [14];
  
  RtlEnterCriticalSection();
  uVar8 = 0;
  do {
    iVar9 = *(int *)(param_1 + 0x20);
    if (iVar9 != 0) {
      iVar10 = iVar9 << 2;
      do {
        iVar10 = iVar10 + -4;
        iVar9 = iVar9 + -1;
        iVar5 = fn_82A21B98(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10),param_3,param_4);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar5 + 0x19) = param_2;
          fn_82A1E228(auStack_70);
          uVar2 = lbl_8315D2F0;
          *(undefined1 *)(iVar5 + 0x1a) = 1;
          *(int *)(iVar5 + 0x10) = (int)(auStack_70[0] / 10000000) - (int)uVar2;
          fn_82A1FBD8(param_1,iVar5);
          fn_82A21458();
          *(undefined4 *)(param_1 + 0x38) = 1;
          goto LAB_82a236b0;
        }
      } while (iVar9 != 0);
    }
    uVar7 = *(uint *)(param_1 + 0x24);
    if ((uVar7 <= *(uint *)(param_1 + 0x20)) && (uVar11 = uVar7 + 8, uVar7 < uVar11)) {
      lVar3 = fn_8265C940(uVar11 * 4,lbl_8315D2EC);
      if (lVar3 == 0) break;
      fn_82A1DDC0(lVar3,*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) << 2);
      fn_8265C990(*(undefined4 *)(param_1 + 0x1c),lbl_8315D2EC);
      *(int *)(param_1 + 0x1c) = (int)lVar3;
      *(uint *)(param_1 + 0x24) = uVar11;
    }
    uVar4 = fn_8265C940(0x1000,lbl_8315D2EC);
    if ((uVar4 & 0xffffffff) == 0) break;
    uVar6 = fn_82A207C8(uVar4,0x1000,0x24,1);
    *(undefined4 *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x1c)) = uVar6;
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = (int)lVar3;
    if (lVar3 != 0) {
      iVar9 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        puVar1 = *(undefined2 **)(*(int *)(param_1 + 0x1c) + iVar9);
        iVar9 = iVar9 + 4;
        *puVar1 = (short)uVar7;
        puVar1[1] = (short)*(undefined4 *)(param_1 + 0x20);
        uVar7 = uVar11;
      } while (uVar11 < *(uint *)(param_1 + 0x20));
    }
    RtlLeaveCriticalSection(param_1);
    *(undefined4 *)(param_1 + 0x38) = 1;
    fn_82A21110(param_1,lbl_83219C28);
    RtlEnterCriticalSection(param_1);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar5 = 0;
LAB_82a236b0:
  RtlLeaveCriticalSection(param_1);
  return iVar5;
}


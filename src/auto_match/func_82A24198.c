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
extern unsigned int *auStack_130;
extern int fn_8265C990();
extern int fn_82A1DDC0();
extern int fn_82A23EE8();
extern unsigned int iStack_140;
extern unsigned int lbl_8315D2EC;
extern unsigned int *lbl_83219C90;
extern unsigned int lbl_83219C9C;


undefined8 fn_82A24198(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_140;
  undefined1 auStack_130 [304];
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if ((int **)lbl_83219C90 != &lbl_83219C90) {
    do {
      piVar4 = lbl_83219C90;
      uVar3 = lbl_8315D2EC;
      uVar6 = (ulonglong)lbl_83219C9C;
      if (uVar6 < *(ushort *)(lbl_83219C90[2] + 8)) {
        iVar7 = lbl_83219C90[2];
        puVar2 = (uint *)((int)((uVar6 - *(ushort *)(iVar7 + 0xc) & 0xffffffff) << 2) +
                          (uint)*(ushort *)(iVar7 + 4) + iVar7);
        lbl_83219C9C = lbl_83219C9C + 1;
        iStack_140 = *(byte *)((int)puVar2 + 1) - 1;
        puVar8 = (undefined4 *)
                 ((uint)*(byte *)((int)((uVar6 - *(ushort *)(iVar7 + 0xc) & 0xffffffff) << 2) +
                                  (uint)*(ushort *)(iVar7 + 4) + iVar7) *
                  (*(uint *)(iVar7 + 4) & 0xffff) + iVar7 + 0x14);
        iVar7 = (*puVar2 & 0xffff) + iVar7 + 1;
        goto LAB_82a24284;
      }
      lbl_83219C9C = 0;
      iVar7 = *lbl_83219C90;
      piVar1 = (int *)lbl_83219C90[1];
      *piVar1 = iVar7;
      *(int **)(iVar7 + 4) = piVar1;
      fn_8265C990(piVar4,uVar3);
    } while ((int **)lbl_83219C90 != &lbl_83219C90);
  }
  puVar8 = (undefined4 *)0x0;
  iVar7 = iStack_140;
LAB_82a24284:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  if (puVar8 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    if (iStack_140 + 1U < 0x105) {
      fn_82A1DDC0(auStack_130,iVar7,iStack_140);
      auStack_130[iStack_140] = 0;
      fn_82A23EE8(*puVar8,auStack_130);
    }
    uVar5 = 1;
  }
  return uVar5;
}


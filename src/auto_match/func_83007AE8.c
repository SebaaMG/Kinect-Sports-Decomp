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
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FAB9C0();
extern int fn_83006458();
extern int fn_83006FF8();
extern int fn_83007088();
extern int fn_83007488();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_48;
extern unsigned int uStack_51;


undefined8 fn_83007AE8(int *param_1,int *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 uStack_51;
  int iStack_50;
  int iStack_4c;
  undefined1 uStack_48;
  
  uVar7 = (**(code **)(*param_1 + 0x128))();
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  if (param_4 != '\0') {
    return uVar7;
  }
  iVar5 = *(int *)*param_2;
  *param_2 = (int)((int *)*param_2 + 1);
  if (iVar5 != 0) {
    piVar8 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4);
    if (piVar8 == (int *)0x0) {
      return 2;
    }
    uVar7 = (**(code **)(*piVar8 + 100))(piVar8,param_1[3]);
    (**(code **)(*piVar8 + 8))(piVar8);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  iVar5 = *(int *)*param_2;
  *param_2 = (int)((int *)*param_2 + 1);
  if ((iVar5 != 0) &&
     (piVar8 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar8 != (int *)0x0)) {
    uVar7 = (**(code **)(*piVar8 + 100))(piVar8,param_1[3]);
    (**(code **)(*piVar8 + 8))(piVar8);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  pcVar6 = (char *)*param_2;
  cVar1 = *pcVar6;
  *param_2 = (int)(pcVar6 + 1);
  cVar2 = pcVar6[1];
  *param_2 = (int)(pcVar6 + 2);
  cVar3 = pcVar6[2];
  iStack_50 = (int)(cVar1 >> 7);
  iStack_4c = (int)cVar1;
  lVar13 = CONCAT44(iStack_50,iStack_4c);
  *param_2 = (int)(pcVar6 + 3);
  cVar1 = pcVar6[3];
  *param_2 = (int)(pcVar6 + 4);
  iStack_50 = (int)(cVar1 >> 7);
  iStack_4c = (int)cVar1;
  param_1[0xd] = (int)(float)lVar13;
  param_1[0xe] = (int)(float)CONCAT44(iStack_50,iStack_4c);
  *(byte *)((int)param_1 + 0x3d) =
       ((cVar3 != '\0') << 1 | cVar2 != '\0') << 3 | *(byte *)((int)param_1 + 0x3d) & 0xe7;
  if (((((int)uVar7 == 1) &&
       (uVar7 = (**(code **)(*param_1 + 0x124))(param_1,param_2,param_3), (int)uVar7 == 1)) &&
      (uVar7 = (**(code **)(*param_1 + 300))(param_1,param_2,param_3), (int)uVar7 == 1)) &&
     (uVar7 = (**(code **)(*param_1 + 0x130))(param_1,param_2,param_3), (int)uVar7 == 1)) {
    uVar12 = 0;
    bVar4 = *(byte *)*param_2;
    *param_2 = (int)((byte *)*param_2 + 1);
    *(byte *)((int)param_1 + 0x3e) = (bVar4 & 0x1f) << 1 | *(byte *)((int)param_1 + 0x3e) & 0xc1;
    uVar11 = (uint)*(ushort *)*param_2;
    *param_2 = (int)((ushort *)*param_2 + 1);
    if (uVar11 != 0) {
      do {
        iVar5 = *param_2;
        puVar9 = &uStack_51;
        puVar10 = (undefined1 *)(iVar5 + -1);
        lVar13 = 9;
        do {
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar10;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        *param_2 = iVar5 + 9;
        if ((((U64)(iStack_4c) >> 0) & 0xFF) == '\0') {
          uVar7 = fn_83006FF8(param_1,iStack_50);
        }
        else {
          uVar7 = fn_83007088(param_1,CONCAT31((((U64)(iStack_4c) >> 8) & 0xFFFFFF),uStack_48),iStack_50);
        }
        if ((int)uVar7 != 1) {
          return uVar7;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
    uVar7 = fn_83006458(param_1,param_2,param_3);
    if ((int)uVar7 == 1) {
      uVar7 = fn_83007488(param_1,param_2,param_3);
    }
  }
  return uVar7;
}


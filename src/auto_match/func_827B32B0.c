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
extern int fn_827B0328();
extern int fn_827B0990();
extern int fn_827B0C90();
extern int fn_827B1020();
extern int fn_827B13A0();
extern int fn_827B1968();
extern int fn_827B1B68();
extern int fn_827B1BE8();
extern int fn_827B1D10();
extern int fn_827B1DA0();
extern int fn_827B1E58();
extern int fn_827B1F18();
extern int fn_827B20F0();
extern int fn_827B28D0();
extern int fn_827B30B8();
extern int fn_827B3250();
extern unsigned int iStack_88;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_827B32B0(int param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  ushort *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  
  puVar15 = (undefined4 *)(param_1 + 8);
  uStack_8e = 0;
  uVar1 = **(uint **)(param_1 + 8);
  uStack_90 = (undefined2)*(undefined4 *)(param_1 + 0x70);
  uStack_8c = uVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_827B28D0();
  }
  fn_827B0328(param_1,&uStack_a0,&uStack_9c,&uStack_98,&uStack_94);
  fn_827B1D10(puVar15,uStack_a0);
  fn_827B1D10(puVar15,uStack_9c);
  fn_827B1D10(puVar15,uStack_98);
  fn_827B1D10(puVar15,uStack_94);
  fn_827B1B68(puVar15,*(undefined4 *)(param_1 + 0x28));
  bVar2 = false;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar9 = 0;
    do {
      uVar13 = 0;
      uVar5 = 1;
      puVar10 = (uint *)(*(int *)((uVar9 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x34)) +
                        (uVar9 & 0x3f) * 8);
      if (1 < puVar10[1]) {
        do {
          uVar13 = uVar13 + 1;
          if ((*(ushort *)
                (*(int *)((*puVar10 + uVar5 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                ((*puVar10 + uVar5) * 4 & 0xfc)) & 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < puVar10[1]);
      }
      psVar7 = (short *)(*(int *)((*puVar10 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                        (*puVar10 & 0x3f) * 4);
      lVar16 = (longlong)((int)*psVar7 >> 1);
      lVar11 = (longlong)psVar7[1];
      fn_827B1D10(puVar15,lVar16);
      fn_827B1D10(puVar15,lVar11);
      uVar5 = *(uint *)*puVar15;
      fn_827B1BE8(puVar15,(uVar13 & 0x7fffffff) << 1);
      uVar14 = 1;
      if (1 < puVar10[1]) {
        do {
          uVar6 = *puVar10 + uVar14;
          puVar8 = (ushort *)
                   (*(int *)((uVar6 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                   (uVar6 & 0x3f) * 4);
          iVar4 = (int)(short)*puVar8 >> 1;
          if ((*puVar8 & 1) == 0) {
            lVar17 = (longlong)iVar4;
            lVar12 = (longlong)(short)puVar8[1];
            if (iVar4 == (int)lVar16) {
              fn_827B1E58(puVar15,lVar12 - lVar11);
            }
            else if ((int)(short)puVar8[1] == (int)lVar11) {
              fn_827B1DA0();
            }
            else {
              fn_827B1F18(puVar15,lVar17 - lVar16,lVar12 - lVar11);
            }
          }
          else {
            uVar14 = uVar14 + 1;
            uVar6 = *puVar10 + uVar14;
            psVar7 = (short *)(*(int *)((uVar6 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                              (uVar6 & 0x3f) * 4);
            lVar12 = (longlong)psVar7[1];
            lVar17 = (longlong)((int)*psVar7 >> 1);
            fn_827B20F0(puVar15,iVar4 - lVar16,(short)puVar8[1] - lVar11,lVar17 - iVar4,
                          lVar12 - (short)puVar8[1]);
          }
          uVar14 = uVar14 + 1;
          lVar11 = lVar12;
          lVar16 = lVar17;
        } while (uVar14 < puVar10[1]);
      }
      if (param_2 != '\0') {
        iStack_88 = param_1;
        uVar3 = fn_827B0990(param_1,uVar5);
        uStack_84 = (undefined4)uVar3;
        iVar18 = param_1 + 0x10;
        uStack_80 = uVar5;
        iVar4 = fn_827B30B8(iVar18,&iStack_88);
        if (iVar4 == 0) {
          fn_827B1020(iVar18,iVar18,&iStack_88,uVar3);
          bVar2 = true;
        }
        else {
          if (uVar5 < *(uint *)*puVar15) {
            *(uint *)*puVar15 = uVar5;
          }
          fn_827B1BE8(puVar15,*(int *)(iVar4 + 8) << 1 | 1);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((param_2 != '\0') && (!bVar2)) {
    iStack_88 = param_1;
    uVar3 = fn_827B13A0(param_1,uVar1);
    uStack_84 = (undefined4)uVar3;
    iVar18 = param_1 + 0x14;
    uStack_80 = uVar1;
    iVar4 = fn_827B3250(iVar18,&iStack_88);
    if (iVar4 == 0) {
      fn_827B1020(iVar18,iVar18,&iStack_88,uVar3);
    }
    else {
      if (uVar1 < *(uint *)*puVar15) {
        *(uint *)*puVar15 = uVar1;
      }
      uStack_8c = *(uint *)(iVar4 + 8);
    }
  }
  *(uint *)(param_1 + 0x74) = (*(int *)*puVar15 - uVar1) + *(int *)(param_1 + 0x74);
  fn_827B0C90(puVar15,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x70));
  fn_827B0C90(puVar15,(ulonglong)*(uint *)(param_1 + 0x78) + 4,*(undefined4 *)(param_1 + 0x74));
  fn_827B1968(param_1 + 0x4c,&uStack_90);
  return;
}


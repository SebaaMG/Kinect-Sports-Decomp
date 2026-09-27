extern int *piRam83276538;
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
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern int fn_8225AF70();
extern int fn_8225AF90();
extern int fn_8225C590();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229F148();
extern int fn_8229F208();
extern int fn_8251FE10();
extern int fn_82522ED8();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern int fn_828EA610();
extern int fn_82F64840();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832767C8;
extern unsigned int lbl_8327F894;
extern unsigned int lbl_83283E40;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;
extern U64 storeWordConditionalIndexed();


void fn_8225B108(void)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  char cVar7;
  int iVar6;
  uint uVar9;
  ulonglong uVar8;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  char in_RESERVE;
  byte bVar15;
  undefined4 auStack_280 [4];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  char *pcStack_268;
  undefined1 auStack_260 [496];

  if (piRam83276538 == (int *)0x0) {
    iVar5 = fn_8265C9E0(0x14);
    if (iVar5 == 0) {
      piRam83276538 = (int *)0x0;
    }
    else {
      piRam83276538 = (int *)fn_8229F148();
    }
  }
  piVar4 = piRam83276538;
  if (piRam83276538[1] == 0) {
    iVar5 = *piRam83276538;
    fVar3 = (float)piRam83276538[4] + lbl_8327F894;
    piRam83276538[4] = (int)fVar3;
    if ((iVar5 == 1) && (lbl_821916FC <= fVar3)) {
      fn_8229F208(piVar4,1);
    }
  }
  else if ((piRam83276538[1] == 1) && (*piRam83276538 == 0)) {
    uStack_270 = 0;
    uStack_26c = 0;
    if (piRam83276538[1] != 0) {
      piRam83276538[1] = 0;
      piVar4[4] = lbl_821CC160;
      fn_82273CD8(&uStack_270,4);
      pcStack_268 = "appear";
      fn_82672C20(piVar4[2],0xffffffff821ab71c,&uStack_270,1);
    }
    fn_82273C88(&uStack_270);
  }
  iVar5 = fn_8225AF70(0xffffffff831d0968);
  if (iVar5 < 1) {
    if (piRam83276538 == (int *)0x0) {
      iVar5 = fn_8265C9E0(0x14);
      if (iVar5 == 0) {
        piRam83276538 = (int *)0x0;
      }
      else {
        piRam83276538 = (int *)fn_8229F148();
      }
    }
    *piRam83276538 = 1;
  }
  else {
    if (piRam83276538 == (int *)0x0) {
      iVar5 = fn_8265C9E0(0x14);
      if (iVar5 == 0) {
        piRam83276538 = (int *)0x0;
      }
      else {
        piRam83276538 = (int *)fn_8229F148();
      }
    }
    *piRam83276538 = 0;
  }
  iVar5 = fn_8225C590();
  uVar12 = 0;
  uVar9 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
  bVar15 = (uVar9 == 0) << 1;
  if (0 < (int)uVar9) {
    iVar11 = 0;
    do {
      if (uVar12 < uVar9) {
        iVar13 = *(int *)(*(int *)(iVar5 + 0x10) + iVar11);
      }
      else {
        iVar13 = 0;
      }
      if (iVar13 != 0) {
        if (*(int *)(iVar13 + 0x114) == 0) {
LAB_8225b338:
          bVar14 = false;
        }
        else {
          uVar8 = (ulonglong)lbl_832767C8;
          do {
            puVar10 = (uint *)(uVar8 + 0xa0);
            uVar9 = *puVar10;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)uVar9,0,uVar8 + 0xa0);
              *puVar10 = uVar2;
              bVar15 = 2;
            }
          } while (!(bool)(bVar15 >> 1 & 1));
          if ((((0 < (int)uVar9) || (*(int *)(iVar13 + 0x110) == 0)) ||
              (cVar7 = fn_828EA610(iVar13), cVar7 != '\0')) ||
             (bVar14 = true, *(char *)(iVar13 + 0xd8) != '\0')) goto LAB_8225b338;
        }
        if (bVar14) {
          fn_8225AF90(iVar13);
        }
        bVar14 = *(int *)(iVar13 + 0x118) == 0;
        bVar15 = bVar14 << 1;
        if (!bVar14) {
          uVar8 = (ulonglong)lbl_832767C8;
          do {
            puVar10 = (uint *)(uVar8 + 0xa0);
            uVar9 = *puVar10;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)uVar9,0,uVar8 + 0xa0);
              *puVar10 = uVar2;
              bVar15 = 2;
            }
          } while (!(bool)(bVar15 >> 1));
          if (((int)uVar9 < 1) && (*(int *)(iVar13 + 0x110) != 0)) {
            cVar7 = fn_828EA610(iVar13);
            bVar15 = (cVar7 == '\0') << 1;
            if ((cVar7 == '\0') &&
               (bVar14 = *(char *)(iVar13 + 0xd8) == '\0', bVar15 = bVar14 << 1, bVar14)) {
              fn_82F64840(auStack_260,0x104,0xffffffff831d0a6c,0x103);
              auStack_280[0] = lbl_83283E40;
              uVar1 = *(undefined4 *)(iVar13 + 0x10c);
              iVar6 = fn_8251FE10(auStack_280,auStack_260,uVar1,0,iVar13);
              bVar15 = (iVar6 == 0) << 1;
              if (iVar6 == 0) {
                fn_82522ED8(uVar1);
              }
              *(undefined4 *)(iVar13 + 0x118) = 0;
              *(undefined4 *)(iVar13 + 0x10c) = 0;
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 4;
      uVar9 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x10) >> 2;
    } while ((int)uVar12 < (int)uVar9);
  }
  return;
}

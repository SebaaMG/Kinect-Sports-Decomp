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
extern int fn_823AB470();
extern int fn_823AB478();
extern int fn_825123E8();
extern int fn_825126F0();
extern int fn_82521A10();
extern int fn_82521B20();
extern int fn_825580C0();
extern int fn_82593B00();
extern int fn_82593BC8();
extern int fn_828EA600();
extern int fn_828EA610();
extern int fn_828EB518();
extern int fn_82A1C0C8();
extern int fn_82AB8588();
extern unsigned int lbl_83265984;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;
extern unsigned int lbl_8326C2A8;
extern unsigned int lbl_832767C8;
extern unsigned int lbl_8327F678;
extern unsigned int lbl_8329618C;
extern unsigned int uRam832659d8;
extern unsigned int uStack_90;


void fn_825935B0(void)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar6;
  ulonglong uVar5;
  char cVar9;
  int iVar7;
  int iVar8;
  int iVar10;
  int *piVar11;
  bool bVar12;
  int *piVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uStack_90;
  
  if (lbl_8329618C == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar10 == 0) || (lbl_8329618C == 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(lbl_8329618C + 4);
  }
  uVar14 = 0;
  piVar13 = &lbl_8326B4C8;
  do {
    iVar6 = fn_828EB518(uVar14);
    if ((iVar6 != 0) && (uVar17 = 0, lbl_832659AC != 0)) {
      piVar11 = &lbl_83265988;
      do {
        if (*piVar11 == iVar6) {
          bVar12 = true;
          goto LAB_82593664;
        }
        uVar17 = uVar17 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar17 < lbl_832659AC);
    }
    bVar12 = false;
    uVar17 = uStack_90;
LAB_82593664:
    uStack_90 = uVar17;
    if (bVar12) {
LAB_825936b4:
      bVar4 = true;
    }
    else {
      uStack_90 = 0;
      if (lbl_832659AC != 0) {
        puVar16 = &lbl_83265988;
        do {
          uVar5 = fn_823AB478(*puVar16);
          if ((uVar5 & 0xffffffff) == (uVar14 & 0xffffffff)) {
            bVar12 = true;
            goto LAB_825936a8;
          }
          uStack_90 = uStack_90 + 1;
          puVar16 = puVar16 + 1;
        } while (uStack_90 < lbl_832659AC);
      }
      bVar12 = false;
      uStack_90 = uVar17;
LAB_825936a8:
      bVar4 = false;
      if (bVar12) goto LAB_825936b4;
    }
    bVar12 = (int)uVar14 == lbl_8326C2A8;
    if (lbl_832659D4 == '\0') goto LAB_82593730;
    if (iVar6 == 0) {
LAB_82593710:
      bVar15 = 0;
    }
    else {
      cVar9 = fn_828EA610(iVar6);
      if (cVar9 != '\0') goto LAB_82593710;
      iVar7 = fn_823AB470(iVar6);
      if (iVar7 != 2) {
        cVar9 = fn_82593B00(iVar10);
        if (cVar9 != '\0') goto LAB_82593710;
      }
LAB_82593730:
      bVar15 = 1;
    }
    bVar15 = bVar12 & bVar15;
    if (bVar15 != 0) {
      lbl_8326C2A8 = -1;
    }
    if (lbl_83265988 == iVar6) {
LAB_825937b4:
      bVar12 = false;
    }
    else {
      if (lbl_8326B4D8 == 0) {
        iVar7 = *piVar13;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) goto LAB_825937b4;
      iVar7 = fn_825580C0(uVar14,0x1010);
      if (iVar7 == 0) goto LAB_825937b4;
      if (lbl_8327F678 == 0) {
        cVar9 = '\0';
      }
      else {
        cVar9 = **(char **)(lbl_8327F678 + 0xd48);
      }
      bVar12 = true;
      if (cVar9 == '\0') goto LAB_825937b4;
    }
    if (((bVar12) || (bVar15 != 0)) && (iVar6 != 0)) {
      cVar9 = fn_828EA610(iVar6);
      if ((cVar9 != '\0') && (lbl_832659CD != '\0')) {
        iVar7 = fn_823AB478(lbl_83265988);
        iVar8 = fn_82AB8588(iVar6);
        if (iVar8 != iVar7) {
          if (bVar15 == 0) {
            fn_82A1C0C8(4,0x80002);
            lbl_832659D4 = '\x01';
            lbl_8326C2A8 = (int)uVar14;
          }
          bVar12 = false;
          bVar15 = 0;
        }
      }
    }
    bVar2 = iVar6 == 0;
    if (iVar6 != 0) {
      uVar17 = 0;
      if (lbl_832659AC != 0) {
        piVar11 = &lbl_83265988;
        do {
          if ((*piVar11 != 0) && (*piVar11 != iVar6)) {
            iVar7 = fn_823AB478();
            iVar8 = fn_823AB478(iVar6);
            if (iVar7 == iVar8) {
              bVar2 = true;
              goto LAB_8259389c;
            }
          }
          uVar17 = uVar17 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar17 < lbl_832659AC);
      }
      bVar2 = false;
    }
LAB_8259389c:
    if (bVar4) {
LAB_825938c4:
      bVar12 = false;
    }
    else {
      if ((!bVar12) && (bVar15 == 0)) goto LAB_825938c4;
      bVar12 = true;
    }
    if (bVar4) {
      bVar3 = true;
      if (!bVar2) goto LAB_825938e0;
    }
    else {
LAB_825938e0:
      bVar3 = false;
    }
    if (bVar12) {
      fn_82593BC8(uVar14,iVar6,bVar15);
    }
    else if (bVar3) {
      if (uStack_90 == 0) {
        fn_825123E8();
        uRam832659d8 = 1;
        fn_82521B20(lbl_832767C8);
      }
      else {
        if (lbl_832659CD != '\0') {
          uVar5 = (ulonglong)lbl_832659AC;
          if (uVar5 != 0) {
            puVar16 = (undefined4 *)(&lbl_83265984 + lbl_832659AC * 4);
            do {
              puVar1 = (undefined4 *)*puVar16;
              cVar9 = fn_828EA600(puVar1);
              if (cVar9 != '\0') {
                (**(code **)*puVar1)(puVar1);
                puVar16[5] = puVar1;
                *puVar16 = 0;
                lbl_832659AC = lbl_832659AC - 1;
              }
              uVar5 = uVar5 - 1;
              puVar16 = puVar16 + -1;
            } while (uVar5 != 0);
          }
        }
        cVar9 = fn_828EA610(lbl_83265988);
        if (cVar9 == '\0') {
          fn_825126F0(uStack_90,0);
        }
        else {
          fn_825123E8();
        }
      }
    }
    if ((((bVar4) && (iVar6 != 0)) && (*(char *)(uStack_90 + 0x83265998) != '\0')) &&
       (*(char *)(iVar6 + 0xd8) == '\0')) {
      if ((iVar10 == 0) || (**(char **)(iVar10 + 0xd48) == '\0')) {
        cVar9 = fn_828EA610(iVar6);
        if (cVar9 == '\0') {
          fn_82521A10(lbl_832767C8,iVar6,0);
        }
        *(undefined1 *)(uStack_90 + 0x83265998) = 0;
      }
      else {
        fn_825123E8();
      }
    }
    uVar14 = uVar14 + 1;
    piVar13 = piVar13 + 1;
    if (3 < (uVar14 & 0xffffffff)) {
      return;
    }
  } while( true );
}


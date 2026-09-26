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
extern int fn_829D37C8();
extern int fn_829D76B8();
extern int fn_82A1DDC0();
extern int fn_82A1F2F8();
extern int fn_82F691F0();
extern unsigned int iStack_6c;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


void fn_829D8F08(int *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_60;
  
  iVar12 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar12);
  iVar9 = lbl_832179FC;
  if (*(char *)(lbl_832179FC + 0x24974) == '\0') {
    pcVar10 = (char *)(lbl_832179FC + 0x24976);
    if (*pcVar10 != '\0') {
      *param_1 = 7;
      *pcVar10 = '\0';
      goto LAB_829d92b4;
    }
    piVar14 = (int *)(lbl_832179FC + 0x950);
    lVar13 = 2;
    do {
      if (*piVar14 != 0) {
        iVar6 = piVar14[0x16];
        if (iVar6 == 1) {
          uVar11 = 0;
          piVar8 = (int *)(iVar9 + 0x8bc);
          goto LAB_829d8ff0;
        }
        if (1 < iVar6) {
          if (iVar6 < 4) {
            uVar7 = 0xffffffff80004004;
          }
          else {
            if (iVar6 != 4) goto LAB_829d9088;
            uVar7 = 0xffffffff83010008;
          }
          fn_829D76B8(piVar14,0,uVar7);
        }
      }
LAB_829d9088:
      iVar6 = lbl_832179FC;
      lVar13 = lVar13 + -1;
      piVar14 = piVar14 + 0x18;
    } while (lVar13 != 0);
    bVar3 = false;
    piVar14 = (int *)0x0;
    piVar8 = (int *)0x0;
    if (param_1[7] != 0) {
      uVar11 = 0;
      piVar8 = (int *)(iVar9 + 0x8bc);
      do {
        if (*piVar8 == param_1[7]) {
          piVar8 = (int *)(uVar11 * 0x58 + iVar9 + 0x8a0);
          goto LAB_829d90d4;
        }
        uVar11 = uVar11 + 1;
        piVar8 = piVar8 + 0x16;
      } while (uVar11 < 2);
      piVar8 = (int *)0x0;
LAB_829d90d4:
      if ((piVar8 != (int *)0x0) &&
         (iVar5 = fn_82A1F2F8(), (uint)(iVar5 - param_1[0x16]) < *(uint *)(iVar6 + 0x8f044))) {
        bVar3 = true;
        piVar14 = piVar8;
      }
    }
    if (!bVar3) {
      uVar11 = 0;
      piVar4 = (int *)(iVar9 + 0x8a0);
      do {
        piVar14 = piVar4;
        if ((*piVar14 != 0) && (piVar14 != piVar8)) {
          iVar6 = piVar14[0x13] * 0x150 + iVar9;
          if ((*(int *)(iVar6 + 0x208) != 2) ||
             (bVar2 = true, piVar14[7] != *(int *)(iVar6 + 0x204))) {
            bVar2 = false;
          }
          if (bVar2) {
            iVar6 = fn_82A1F2F8();
            param_1[0x16] = iVar6;
            bVar3 = true;
            break;
          }
          fn_829D76B8(piVar14,0,0xffffffff83010008);
        }
        uVar11 = uVar11 + 1;
        piVar4 = piVar14 + 0x16;
      } while (uVar11 < 2);
    }
    if ((!bVar3) && (piVar8 != (int *)0x0)) {
      bVar3 = true;
      piVar14 = piVar8;
    }
    if (bVar3) {
      *param_1 = *piVar14;
      param_1[5] = piVar14[4];
      param_1[2] = piVar14[1];
      param_1[1] = piVar14[2];
      param_1[0x10] = 0;
      param_1[7] = piVar14[7];
      param_1[6] = -1;
      param_1[4] = piVar14[9];
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(piVar14 + 10);
      param_1[0xc] = piVar14[0xc];
      param_1[0x17] = piVar14[0xe];
      param_1[0x15] = piVar14[0xd];
      param_1[3] = piVar14[0x13];
      param_1[0x40] = 0;
      param_1[8] = piVar14[8];
      if (piVar14[0x10] != 2) {
        param_1[0x1a] = 1;
      }
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      fn_82A1DDC0(param_1 + 0x1f,param_1[4] * 0x11fb0 + iVar9 + 0x12938,0x84);
      goto LAB_829d92b4;
    }
    cVar1 = *(char *)(iVar9 + 0x24975);
    param_1[1] = 0;
    if (cVar1 == '\0') {
      *param_1 = 0;
      goto LAB_829d92b4;
    }
    iVar9 = 3;
  }
  else {
    iVar9 = 5;
  }
  *param_1 = iVar9;
LAB_829d92b4:
  RtlLeaveCriticalSection(iVar12);
  return;
  while( true ) {
    uVar11 = uVar11 + 1;
    piVar8 = piVar8 + 0x16;
    if (1 < uVar11) break;
LAB_829d8ff0:
    if (*piVar8 == piVar14[7]) {
      iVar9 = uVar11 * 0x58 + iVar9 + 0x8a0;
      goto LAB_829d9010;
    }
  }
  iVar9 = 0;
LAB_829d9010:
  if (iVar9 == 0) {
    fn_829D76B8(piVar14,0,0xffffffff800700aa);
  }
  else if (piVar14[5] != 0) {
    uStack_70 = 1;
    uStack_60 = 0;
    iStack_6c = piVar14[7];
    fn_829D37C8(piVar14[5],piVar14[6],&uStack_70);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(piVar14,0,0x60);
}


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
extern unsigned int lbl_821606D0;
extern unsigned int lbl_821606D8;
extern unsigned int lbl_821606E0;
extern unsigned int lbl_821606E8;
extern unsigned int lbl_821606F0;
extern unsigned int lbl_821606F8;
extern unsigned int lbl_82160700;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EFE384(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int in_r8;
  int in_r9;
  undefined2 *puVar8;
  int in_r10;
  int iVar9;
  double *pdVar10;
  undefined1 uVar13;
  int iVar11;
  double *pdVar12;
  byte in_cr6;
  longlong in_CTR;
  longlong lVar14;
  double dVar15;
  double dStack_48;
  double adStack_40 [4];
  double dStack_20;
  double dStack_18;
  double dStack_10;
  double dStack_8;
  
  while( true ) {
    if ((bool)(in_cr6 >> 3 & 1)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0xff;
      if (in_r10 < 0x100) {
        uVar13 = (undefined1)in_r10;
      }
    }
    *(undefined1 *)(in_r9 + in_r10) = uVar13;
    in_r10 = in_r10 + 1;
    in_CTR = in_CTR + -1;
    if (in_CTR == 0) break;
    in_r9 = *(int *)(in_r8 + -0x1c50);
    in_cr6 = (in_r10 < 0) << 3;
  }
  iVar11 = 0;
  puVar8 = (undefined2 *)0x8324dbae;
  lVar14 = 0x400;
  do {
    iVar9 = 0x7f;
    if (iVar11 < 0x80) {
      iVar9 = iVar11;
    }
    iVar11 = iVar11 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = (short)iVar9;
    dVar7 = lbl_82160700;
    dVar6 = lbl_821606F8;
    dVar5 = lbl_821606F0;
    dVar4 = lbl_821606E8;
    dVar3 = lbl_821606E0;
    dVar2 = lbl_821606D8;
    dVar1 = lbl_821606D0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  pdVar10 = &dStack_48;
  pdVar12 = (double *)0x8324d9a8;
  adStack_40[0] = lbl_821606F8;
  adStack_40[1] = lbl_821606F0;
  lVar14 = 8;
  adStack_40[2] = lbl_82160700;
  adStack_40[3] = lbl_821606E8;
  dStack_20 = lbl_821606F8;
  dStack_18 = lbl_821606E0;
  dStack_10 = lbl_821606D8;
  dStack_8 = lbl_821606D0;
  do {
    pdVar10 = pdVar10 + 1;
    dVar15 = *pdVar10;
    pdVar12[1] = dVar15 * dVar6;
    pdVar12[2] = dVar15 * dVar5;
    pdVar12[3] = dVar15 * dVar7;
    pdVar12[4] = dVar15 * dVar4;
    pdVar12[5] = dVar15 * dVar6;
    pdVar12[6] = dVar15 * dVar3;
    pdVar12[7] = dVar15 * dVar2;
    pdVar12 = pdVar12 + 8;
    *pdVar12 = dVar15 * dVar1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}


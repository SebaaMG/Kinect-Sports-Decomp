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
extern unsigned int *auStack_10e4;
extern unsigned int *auStack_110c;
extern unsigned int *auStack_1110;
extern unsigned int *auStack_1118;
extern unsigned int *auStack_1120;
extern unsigned int *auStack_1128;
extern unsigned int *auStack_1130;
extern unsigned int *auStack_8e4;
extern unsigned int *auStack_e4;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226D2A8();
extern int fn_82270B70();
extern int fn_82272938();
extern int fn_82273920();
extern int fn_82279C58();
extern int fn_8227A8B8();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_8265C9E0();
extern int fn_8266F660();
extern int fn_82F622A8();
extern int fn_82F69148();
extern unsigned int iStack_1108;
extern unsigned int iStack_1114;
extern unsigned int iStack_111c;
extern unsigned int lbl_8326B394;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


ulonglong fn_8226D388(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar6;
  int *piVar4;
  undefined4 *puVar5;
  int iVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 auStack_1130 [8];
  undefined1 auStack_1128 [8];
  undefined1 auStack_1120 [4];
  int iStack_111c;
  undefined1 auStack_1118 [4];
  int iStack_1114;
  undefined1 auStack_1110 [4];
  undefined1 auStack_110c [4];
  int iStack_1108;
  undefined1 auStack_10e4 [2048];
  undefined1 auStack_8e4 [2048];
  undefined1 auStack_e4 [128];
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  
  piVar3 = (int *)fn_82270B70();
  bVar12 = true;
  iVar1 = piVar3[0x27];
  piVar3[0x27] = 1;
  fn_8226D2A8(auStack_110c);
  if (piVar3[0x2b] != 0) {
    bVar12 = *(int *)(*(int *)(piVar3[0x2a] + 4) + 0x30) == 0;
  }
  iVar2 = param_1[1];
  iVar8 = *param_1;
  iVar10 = 0;
  iVar11 = 0;
  if ((iVar2 != 0) && (cVar6 = fn_8223AAC0(iVar2), cVar6 != '\0')) {
    iVar10 = iVar8;
    iVar11 = iVar2;
  }
  if (iStack_1108 != 0) {
    fn_822315A0();
  }
  iVar2 = param_1[9];
  fn_82F69148(auStack_10e4,param_1 + 10,0x800);
  fn_82F69148(auStack_8e4,param_1 + 0x20a,0x800);
  iVar8 = 0;
  lVar13 = 0x80;
  do {
    auStack_e4[iVar8] = *(undefined1 *)((int)(param_1 + 0x40a) + iVar8);
    iVar8 = iVar8 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (iVar10 != 0) {
    iVar8 = piVar3[0x13];
    *(int *)(iVar10 + 0xf0) = iVar8;
    if (iVar8 != 0) {
      fn_8227A8B8(iVar10);
    }
    piVar4 = (int *)fn_82279C58(auStack_1120,iVar10);
    iVar8 = *piVar4;
    if (iStack_111c != 0) {
      fn_822315A0(iStack_111c);
    }
    if (iVar8 != 0) {
      puVar5 = (undefined4 *)fn_82279C58(auStack_1118,iVar10);
      fn_8266F660(*puVar5,0);
      if (iStack_1114 != 0) {
        fn_822315A0();
      }
    }
  }
  uVar9 = 0;
  uVar7 = (ulonglong)(uint)piVar3[0x35] + 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  piVar3[0x35] = (int)uVar7;
  if (iVar2 != 0) {
    fn_82520158(param_1 + 0x40a,auStack_1130,0);
    uVar9 = fn_8251F720(piVar3 + 0x38,0);
    uStack_5c = (uint)uVar9;
  }
  iVar8 = piVar3[0x2a];
  iVar10 = *(int *)(iVar8 + 4);
  piVar4 = (int *)fn_8265C9E0(0x10c0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(auStack_1128);
  }
  *piVar4 = iVar8;
  piVar4[1] = iVar10;
  if (piVar4 + 2 != (int *)0x0) {
    fn_82273920(piVar4 + 2,auStack_1110);
    uVar9 = (ulonglong)uStack_5c;
    uVar7 = uVar7 & 0xffffffff;
  }
  if (piVar3[0x2b] != 0xf4fe8) {
    piVar3[0x2b] = piVar3[0x2b] + 1;
    *(int **)(iVar8 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (bVar12) {
      if (((uVar9 & 0xffffffff) == 0) || (iVar2 == 0)) {
        if (*piVar3 != 0) {
          if (piVar3[0x36] != 0) {
            piVar3[0x36] = 0;
            *(undefined4 *)(*piVar3 + 0x1a4) = lbl_8326B394;
          }
          piVar3[0x37] = 0;
        }
      }
      else {
        fn_82272938(piVar3,uVar9,uVar7);
      }
    }
    piVar3[0x27] = iVar1;
    if (iVar11 != 0) {
      fn_822315A0();
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff8219852c);
}


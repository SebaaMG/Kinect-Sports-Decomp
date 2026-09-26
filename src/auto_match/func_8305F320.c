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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_f0;
extern int fn_8305E0F8();
extern int fn_8305E3E8();
extern int fn_8305EB60();
extern int fn_8305EC98();
extern int fn_8305F258();
extern int fn_8305F778();
extern int fn_83060570();
extern int fn_83066788();
extern int fn_83066C10();
extern unsigned int lbl_8217E6BC;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


void fn_8305F320(undefined8 param_1,undefined ***param_2,undefined8 param_3,undefined ***param_4,
                  undefined ***param_5)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar11;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  int iVar20;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined **ppuStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_a0;
  
  uStack_d4 = 0;
  ppuStack_e0 = &lbl_8217E6BC;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_b4 = 0;
  uStack_d0 = 0;
  uStack_b0 = 0;
  if (((param_4 != (undefined ***)0x0) && (param_4 == param_2)) ||
     ((pppuVar19 = param_2, param_5 != (undefined ***)0x0 && (param_5 == param_2)))) {
    fn_8305E0F8(&ppuStack_e0,param_2[10]);
    fn_8305EC98(&ppuStack_e0,param_2);
    pppuVar19 = &ppuStack_e0;
  }
  lVar14 = 0;
  lVar13 = 0;
  if (param_4 != (undefined ***)0x0) {
    fn_8305EB60(param_4,ZEXT48(pppuVar19[0xc]) + 2);
  }
  if (param_5 != (undefined ***)0x0) {
    fn_8305EB60(param_5,ZEXT48(pppuVar19[0xc]) + 2);
  }
  ppuVar2 = pppuVar19[0xc];
  if (0 < (int)ppuVar2) {
    iVar16 = 0;
    iVar15 = 0;
    iVar17 = 0;
    ppuVar18 = (undefined **)0x1;
    do {
      iVar4 = *(int *)((int)pppuVar19[0xb] + iVar17);
      iVar8 = -1;
      iVar9 = -1;
      iVar10 = -1;
      fn_8305F778(pppuVar19[10],iVar4,auStack_110);
      fn_8305F778(pppuVar19[10],pppuVar19[0xb][-(uint)(ppuVar2 != ppuVar18) & (uint)ppuVar18],
                   auStack_f0);
      iVar6 = fn_83066788(param_1,param_3,auStack_110);
      cVar11 = fn_83066C10(param_1,param_3,auStack_110,auStack_f0,auStack_100);
      iVar7 = iVar4;
      if (cVar11 == '\0') {
        iVar5 = -1;
        iVar20 = iVar4;
        if ((iVar6 == 2) || ((iVar6 != 1 && (iVar7 = -1, iVar20 = -1, iVar6 == 0))))
        goto LAB_8305f4d8;
      }
      else if (iVar6 == 1) {
        iVar8 = -2;
        iVar9 = -2;
      }
      else {
        iVar5 = -2;
        iVar20 = -2;
LAB_8305f4d8:
        iVar10 = iVar5;
        iVar7 = iVar20;
        iVar9 = iVar4;
      }
      if (param_4 != (undefined ***)0x0) {
        ppuVar2 = param_2[10];
        ppuVar3 = param_4[10];
        if (iVar7 != -1) {
          if (iVar7 == -2) {
            puVar12 = auStack_100;
LAB_8305f51c:
            iVar7 = fn_83060570(ppuVar3,puVar12);
          }
          else if (ppuVar2 != ppuVar3) {
            puVar12 = auStack_110;
            goto LAB_8305f51c;
          }
          lVar14 = lVar14 + 1;
          *(int *)((int)param_4[0xb] + iVar15) = iVar7;
          iVar15 = iVar15 + 4;
        }
        if (iVar8 != -1) {
          if (iVar8 == -2) {
            puVar12 = auStack_100;
LAB_8305f558:
            iVar8 = fn_83060570(param_4[10],puVar12);
          }
          else if (ppuVar2 != ppuVar3) {
            puVar12 = auStack_110;
            goto LAB_8305f558;
          }
          lVar14 = lVar14 + 1;
          *(int *)((int)param_4[0xb] + iVar15) = iVar8;
          iVar15 = iVar15 + 4;
        }
      }
      if (param_5 != (undefined ***)0x0) {
        ppuVar2 = param_2[10];
        ppuVar3 = param_5[10];
        if (iVar9 != -1) {
          if (iVar9 == -2) {
            puVar12 = auStack_100;
LAB_8305f5b4:
            iVar9 = fn_83060570(ppuVar3,puVar12);
          }
          else if (ppuVar2 != ppuVar3) {
            puVar12 = auStack_110;
            goto LAB_8305f5b4;
          }
          lVar13 = lVar13 + 1;
          *(int *)((int)param_5[0xb] + iVar16) = iVar9;
          iVar16 = iVar16 + 4;
        }
        if (iVar10 != -1) {
          if (iVar10 == -2) {
            puVar12 = auStack_100;
LAB_8305f5f0:
            iVar10 = fn_83060570(param_5[10],puVar12);
          }
          else if (ppuVar2 != ppuVar3) {
            puVar12 = auStack_110;
            goto LAB_8305f5f0;
          }
          lVar13 = lVar13 + 1;
          *(int *)((int)param_5[0xb] + iVar16) = iVar10;
          iVar16 = iVar16 + 4;
        }
      }
      ppuVar2 = pppuVar19[0xc];
      iVar17 = iVar17 + 4;
      bVar1 = (int)ppuVar18 < (int)ppuVar2;
      ppuVar18 = (undefined **)((int)ppuVar18 + 1);
    } while (bVar1);
  }
  if (param_4 != (undefined ***)0x0) {
    fn_8305E3E8(param_4,lVar14);
  }
  if (param_5 != (undefined ***)0x0) {
    fn_8305E3E8(param_5,lVar13);
  }
  fn_8305F258(&ppuStack_e0);
  return;
}


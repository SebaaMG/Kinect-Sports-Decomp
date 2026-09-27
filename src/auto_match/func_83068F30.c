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
extern unsigned int *auStack_d0;
extern int fn_82809CB0();
extern int fn_82F65FE0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern int fn_8305D680();
extern int fn_8305D6A0();
extern int fn_8305D6B8();
extern int fn_83065B90();
extern int fn_83065BA8();
extern int fn_83066690();
extern int fn_830666A8();
extern int fn_83066810();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_83068F30(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_d0 [1];
  
  piVar3 = (int *)fn_82F6A53C();
  uVar1 = piVar3[2];
  iVar10 = -1;
  uVar9 = 0xffffffffffffffff;
  iVar4 = fn_83065B90(uVar1 << 4);
  iVar14 = iVar4;
  for (iVar5 = *piVar3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    fn_8305D6B8(iVar5 + 0x10,iVar14);
    *(int *)(iVar14 + 0xc) = iVar5 + 0x10;
    iVar14 = iVar14 + 0x10;
  }
  uVar8 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  uVar11 = 0;
  dVar17 = (double)lbl_8200133C;
  dVar18 = (double)lbl_82002AE0;
  dVar20 = (double)lbl_821AAD20;
  do {
    if ((uVar11 & 0xffffffff) == 0) {
      uVar7 = 0xffffffff83068b78;
LAB_83069000:
      fn_82F65FE0(iVar4,uVar1,0x10,uVar7);
    }
    else {
      if ((uVar11 & 0xffffffff) == 1) {
        uVar7 = 0xffffffff83068ba8;
        goto LAB_83069000;
      }
      if ((uVar11 & 0xffffffff) < 3) {
        uVar7 = 0xffffffff83068bd8;
        goto LAB_83069000;
      }
    }
    uVar2 = *(undefined4 *)(uVar8 * 0x10 + iVar4 + 0xc);
    lVar12 = -1;
    lVar13 = 0;
    dVar19 = (double)*(float *)((int)((((ulonglong)uVar8 & 0x3fffffff) * 4 + uVar11 & 0xffffffff) <<
                                     2) + iVar4);
    dVar16 = dVar17;
    dVar22 = dVar17;
    iVar5 = fn_8305D680(uVar2);
    if (0 < iVar5) {
      do {
        iVar5 = fn_8305D6A0(uVar2,lVar13);
        dVar21 = (double)*(float *)(iVar5 + (int)((uVar11 & 0xffffffff) << 2));
        dVar15 = (double)fn_82809CB0((double)(float)(dVar21 - dVar19));
        if (((int)lVar12 == -1) || (dVar15 < dVar16)) {
          lVar12 = lVar13;
          dVar16 = dVar15;
          dVar22 = dVar21;
        }
        lVar13 = lVar13 + 1;
        iVar5 = fn_8305D680(uVar2);
      } while ((int)lVar13 < iVar5);
    }
    dVar16 = dVar18;
    dVar19 = dVar20;
    dVar15 = dVar20;
    if ((((uVar11 & 0xffffffff) == 0) ||
        (dVar16 = dVar20, dVar19 = dVar18, (uVar11 & 0xffffffff) == 1)) ||
       (dVar19 = dVar20, dVar15 = dVar18, (uVar11 & 0xffffffff) < 3)) {
      fn_83066690(dVar16,dVar19,dVar15,-dVar22,auStack_d0);
    }
    iVar14 = 0;
    for (iVar5 = *piVar3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      iVar6 = fn_83066810((double)*param_3,auStack_d0,iVar5 + 0x10);
      if ((iVar6 != 1) && (iVar6 != 2)) {
        iVar14 = iVar14 + 1;
      }
    }
    if (((int)uVar9 == -1) || (iVar14 < iVar10)) {
      fn_830666A8(param_4,auStack_d0);
      uVar9 = uVar11;
      iVar10 = iVar14;
    }
    uVar11 = uVar11 + 1;
    if (2 < (int)uVar11) {
      fn_83065BA8(iVar4);
      fn_82F6A588(1);
      return;
    }
  } while( true );
}


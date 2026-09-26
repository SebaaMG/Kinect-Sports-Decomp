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
extern int fn_82AA66A8();
extern int fn_82B18218();
extern int fn_82B1F310();
extern int fn_82B25E80();
extern int fn_82B44B88();
extern int fn_82B8AC10();
extern int fn_82B8F1B0();
extern int fn_82B8F328();


void fn_82B26E08(int param_1,uint param_2,uint param_3,undefined8 param_4,int param_5,
                  ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  byte abStack_70 [112];
  
  if (((((*(uint *)(param_2 + 0x4c) & 0x7ffff) != 0) || ((*(uint *)(param_2 + 0x4c) & 0x80000) != 0)
       ) || ((*(uint *)(param_2 + 0x44) & 0xfffffff) != 1)) &&
     ((uVar10 = *(uint *)(param_1 + 4), (uVar10 & 1) == 0 && (uVar10 != 0)))) {
    do {
      if ((param_6 & 0xffffffff) == 0) {
        uVar2 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff;
        uVar8 = uVar10;
        if ((*(uint *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(uVar10 + 0x28)) &
            1 << ((uint)uVar2 & 0x1f)) != 0) {
          do {
            if ((*(uint *)(uVar8 + 0x30) & 0x80000) != 0) break;
            uVar8 = *(uint *)(uVar8 + 0x34);
          } while (uVar8 != 0);
          if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(*(undefined4 *)(*(int *)(uVar10 & 0xfffff000) + 0x94),0x12c0);
          }
          uVar7 = uVar10;
          if (uVar8 == param_3) goto LAB_82b26eec;
        }
      }
      else if ((ulonglong)*(uint *)(uVar10 + 0x2c) == (param_6 & 0xffffffff)) {
        uVar7 = *(uint *)(uVar10 + 0x50);
LAB_82b26eec:
        if ((*(uint *)(uVar7 + 0x4c) & 0x7ffff) == 0) {
          *(uint *)(uVar7 + 0x4c) =
               *(uint *)(param_2 + 0x4c) & 0x7ffff | *(uint *)(uVar7 + 0x4c) & 0xfff80000;
        }
        if ((*(uint *)(uVar7 + 0x4c) & 0x80000) == 0) {
          *(uint *)(uVar7 + 0x4c) =
               *(uint *)(param_2 + 0x4c) & 0x80000 | *(uint *)(uVar7 + 0x4c) & 0xfff7ffff;
        }
        uVar8 = ((*(uint *)(param_2 + 0x44) & 0xfffffff) + (*(uint *)(uVar7 + 0x44) & 0xfffffff)) -
                1;
        if (0xfffffff < uVar8) {
          uVar8 = 0xfffffff;
        }
        *(uint *)(uVar7 + 0x44) = uVar8 & 0xfffffff | *(uint *)(uVar7 + 0x44) & 0xf0000000;
      }
      uVar10 = *(uint *)((uVar10 & 0xfffffffe) + 4);
    } while (((uVar10 & 1) == 0) && (uVar10 != 0));
  }
  fn_82B8AC10(param_1,param_4,0,1);
  iVar1 = *(int *)(param_5 + 8);
  bVar3 = false;
  do {
    if (iVar1 == 0) {
LAB_82b26fd8:
      uVar10 = 0;
      puVar11 = (uint *)(*(int *)(param_3 + 0x74) + 0x10);
      if (*(int *)(*(int *)(param_3 + 0x74) + 0x10) != 0) {
        for (; puVar11 != (uint *)0x0; puVar11 = (uint *)puVar11[1]) {
          uVar7 = *puVar11;
          uVar8 = *(uint *)(uVar7 + 0x30);
          if (((uVar8 >> 0x16 & 1) == 0) && ((uVar8 >> 0x14 & 1) != 0)) {
            if ((param_6 & 0xffffffff) == 0) {
              *(uint *)(uVar7 + 0x30) = uVar8 & 0xffefffff;
            }
            else {
              uVar7 = *(uint *)(uVar7 + 0x50);
            }
            if ((*(uint *)(uVar7 + 0x24) & 1) == 0) {
              lVar6 = ((ulonglong)*(uint *)(uVar7 + 0x20) & 0xfffffffe) - 0x28;
            }
            else {
              lVar6 = 0;
            }
            fn_82B8AC10(param_1,lVar6,0,1);
            fn_82B8F328(uVar7,param_5,param_1);
            uVar10 = uVar7;
          }
        }
      }
      fn_82B8F1B0(param_2,param_5,param_1);
      if ((param_6 & 0xffffffff) == 0) {
        *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) & 0xfff7ffff;
      }
      else {
        fn_82B8F1B0(param_2,param_3,param_1);
        param_3 = *(uint *)(param_3 + 0x50);
        piVar9 = (int *)(param_3 + 8);
        iVar1 = *(int *)(param_3 + 8);
        while (iVar1 != 0) {
          if (*(uint *)(iVar1 + 4) != param_2) {
            fn_82B8F1B0(*(uint *)(iVar1 + 4),param_3,param_1);
          }
          if (*piVar9 == iVar1) {
            piVar9 = (int *)(iVar1 + 0xc);
          }
          iVar1 = *piVar9;
        }
      }
      if (!bVar3) {
        *(uint *)(param_5 + 0x30) = *(uint *)(param_5 + 0x30) & 0xffdfffff;
      }
      abStack_70[0] = 1;
      if ((param_6 & 0xffffffff) == 0) {
        fn_82B44B88(param_1);
        abStack_70[1] = 0;
        abStack_70[0] = 0;
        fn_82B1F310(param_1,0,abStack_70 + 1,param_2);
        fn_82B18218(param_1,param_5,abStack_70);
      }
      else {
        fn_82B1F310(param_1,param_6,abStack_70,0);
      }
      cVar4 = fn_82B25E80(param_1,param_2,param_3,1);
      bVar12 = abStack_70[0];
      if ((cVar4 != '\0') && (bVar12 = 1, uVar10 == param_3)) {
        uVar10 = param_2;
      }
      if (uVar10 != 0) {
        if ((*(int *)(param_5 + 8) == 0) ||
           (bVar3 = true, *(int *)(*(int *)(param_5 + 8) + 0xc) == 0)) {
          bVar3 = false;
        }
        if (!bVar3) {
          bVar5 = fn_82B25E80(param_1,uVar10,param_5,1);
          bVar12 = bVar5 | bVar12;
        }
      }
      if (bVar12 != 0) {
        fn_82B44B88(param_1);
      }
      return;
    }
    if (*(uint *)(iVar1 + 4) != param_2) {
      for (piVar9 = *(int **)(*(uint *)(iVar1 + 4) + 0xc); piVar9 != (int *)0x0;
          piVar9 = (int *)piVar9[2]) {
        if ((*(uint *)(*piVar9 + 0x30) >> 0x13 & 1) != 0) {
          bVar3 = true;
          goto LAB_82b26fd8;
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0xc);
  } while( true );
}


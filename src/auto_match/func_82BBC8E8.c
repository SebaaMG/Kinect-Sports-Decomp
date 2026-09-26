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
extern int fn_82BA02A8();
extern int fn_82BB1E38();
extern int fn_82BBBFB8();
extern unsigned int lbl_820E7F98;


void fn_82BBC8E8(longlong param_1,int param_2,int param_3,longlong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar4 = (int)param_4;
  iVar5 = (int)param_1;
  if (*(char *)(iVar4 + iVar5 + 0x380) == '\0') {
    fn_82BA02A8(*(undefined4 *)(iVar5 + 0x754),0xffffffff820e0de4,param_4,
                 (&lbl_820E7F98)[param_3 * 3]);
    if (iVar4 < 0xf) {
      lVar14 = 0xf - param_4;
      lVar10 = (param_4 + 0xe4U & 0x3fffffff) * 4 + param_1;
      do {
        puVar6 = (undefined4 *)lVar10;
        lVar8 = 0;
        puVar6[0x10] = puVar6[0x11];
        puVar6[0x20] = puVar6[0x21];
        lVar15 = 4;
        *puVar6 = puVar6[1];
        do {
          uVar9 = (-0x278 - param_1) + lVar10 + lVar8;
          uVar13 = (-0x27c - param_1) + lVar10 + lVar8;
          uVar12 = (-0x23c - param_1) + lVar10 + lVar8;
          uVar11 = (-0x1fc - param_1) + lVar10 + lVar8;
          uVar2 = *(undefined4 *)
                   ((int)(((-0x238 - param_1) + lVar10 + lVar8 & 0xffffffffU) << 2) + iVar5);
          uVar3 = *(undefined4 *)
                   ((int)(((-0x1f8 - param_1) + lVar10 + lVar8 & 0xffffffffU) << 2) + iVar5);
          lVar8 = lVar8 + 1;
          *(undefined4 *)((int)((uVar13 & 0xffffffff) << 2) + iVar5) =
               *(undefined4 *)((int)((uVar9 & 0xffffffff) << 2) + iVar5);
          *(undefined4 *)((int)((uVar12 & 0xffffffff) << 2) + iVar5) = uVar2;
          *(undefined4 *)((int)((uVar11 & 0xffffffff) << 2) + iVar5) = uVar3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar14 = lVar14 + -1;
        lVar10 = lVar10 + 4;
      } while (lVar14 != 0);
    }
    *(undefined4 *)(iVar5 + 0x3cc) = 0;
    *(undefined4 *)(iVar5 + 0x40c) = 0;
    lVar10 = param_1 + 0x73c;
    *(undefined4 *)(iVar5 + 0x44c) = 0xf;
    lVar14 = 4;
    do {
      *(undefined4 *)((int)lVar10 + -0x1fc) = 0;
      *(undefined4 *)((int)lVar10 + -0xfc) = 0x13;
      lVar10 = lVar10 + 4;
      *(undefined4 *)lVar10 = 0;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if ((*(char *)(param_2 + 0x818) == '\0') || (param_3 == 0x12)) {
      if ((*(char *)(param_2 + 0x818) == '\0') || (param_3 != 0x12)) {
        uVar9 = (ulonglong)*(uint *)(param_2 + 0x824) - 1;
        *(int *)(param_2 + 0x824) = (int)uVar9;
      }
      else {
        uVar9 = (ulonglong)*(uint *)(param_2 + 0x824);
        *(undefined1 *)(param_2 + 0x818) = 0;
        *(undefined1 *)(param_2 + 0x819) = 0;
        *(undefined4 *)(param_2 + 0x81c) = 0;
      }
      fn_82BB1E38(param_2,uVar9);
    }
    else {
      *(int *)(param_2 + 0x824) = *(int *)(param_2 + 0x824) + -1;
      fn_82BB1E38(param_2);
      *(int *)(param_2 + 0x81c) = *(int *)(param_2 + 0x81c) + -1;
    }
    for (piVar1 = *(int **)(*(int *)(param_2 + 0xa4) + 0x1c); piVar1[2] != 0;
        piVar1 = (int *)piVar1[2]) {
      if ((piVar1[0x39] & 1U) != 0) {
        iVar7 = (**(code **)(*piVar1 + 0x30))(piVar1);
        if ((((iVar7 != 0) && (piVar1[4] != 0)) && (piVar1[5] == 0)) && (iVar4 < piVar1[0xe])) {
          piVar1[0xe] = piVar1[0xe] + -1;
          piVar1[0x14] = piVar1[0x14];
        }
      }
    }
    fn_82BA02A8(*(undefined4 *)(iVar5 + 0x754),0xffffffff820e0dc4);
    fn_82BBBFB8(param_1);
  }
  return;
}


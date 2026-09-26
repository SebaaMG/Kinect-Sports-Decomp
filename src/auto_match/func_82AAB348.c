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
extern int fn_82AAA9E0();
extern int fn_82AAB000();
extern int fn_82AAB1D8();
extern int fn_82F68CC0();


void fn_82AAB348(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  undefined8 param_7,ulonglong param_8)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint in_stack_00000054;
  uint *in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  uVar7 = (longlong)((int)param_4 >> 2) + (ulonglong)((int)param_4 < 0 && (param_4 & 3) != 0);
  param_8 = ((param_8 & 0xffffffff) >> 0x1f) - 1 & param_8;
  uVar11 = (longlong)((int)param_5 >> 2) + (ulonglong)((int)param_5 < 0 && (param_5 & 3) != 0);
  if (0xe < (int)param_8) {
    param_8 = 0xe;
  }
  in_stack_00000054 = 0xffffffffU - ((int)in_stack_00000054 >> 0x1f) & in_stack_00000054;
  if (0xe < (int)in_stack_00000054) {
    in_stack_00000054 = 0xe;
  }
  iVar8 = (int)uVar7;
  iVar12 = (int)uVar11;
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar10 = *in_stack_0000005c;
    uVar6 = iVar12 * (uint)uVar1;
    uVar5 = in_stack_0000005c[2];
    lVar13 = (longlong)(iVar8 >> 2) + (ulonglong)(iVar8 < 0 && (uVar7 & 3) != 0);
    lVar9 = (longlong)(iVar12 >> 2) + (ulonglong)(iVar12 < 0 && (uVar11 & 3) != 0);
    iVar15 = ((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0);
    if (0 < lVar13) {
      lVar4 = lVar13;
      do {
        if (0 < iVar15) {
          piVar2 = (int *)(uVar5 - 4);
          piVar3 = (int *)(uVar10 - 0x10);
          iVar16 = iVar15;
          do {
            piVar3 = piVar3 + 4;
            piVar2 = piVar2 + 1;
            *piVar2 = *piVar3 + 2 >> 2;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        lVar4 = lVar4 + -1;
        uVar10 = uVar6 * 0x10 + uVar10;
        uVar5 = iVar15 * 4 + uVar5;
      } while (lVar4 != 0);
    }
    fn_82AAB1D8(lVar13,lVar9,uVar1,in_stack_0000005c[2],in_stack_00000054);
    lVar4 = 0;
    if (0 < (int)lVar13) {
      lVar14 = 0;
      do {
        fn_82AAA9E0(param_1,*(undefined4 *)(param_2 + 0x10),param_7,
                      lVar4 - ((longlong)((int)param_6 >> 4) +
                              (ulonglong)((int)param_6 < 0 && (param_6 & 0xf) != 0)),lVar9,
                      lVar14 + (ulonglong)in_stack_0000005c[2],in_stack_00000064,4);
        lVar4 = lVar4 + 1;
        lVar14 = ((longlong)(int)lVar9 * (longlong)(int)(uint)uVar1 & 0x3fffffffU) * 4 + lVar14;
      } while ((int)lVar4 < (int)lVar13);
    }
  }
  uVar10 = (uint)uVar1;
  if (*(int *)(param_3 + 0xc) != 0) {
    fn_82F68CC0(in_stack_0000005c[1],*in_stack_0000005c,
                 ((longlong)(iVar12 * iVar8) * (longlong)(int)uVar10 & 0x3fffffffU) << 2);
    fn_82AAB000(uVar7,uVar11,uVar1,in_stack_0000005c[1],1);
    iVar15 = 0;
    if (0 < iVar8) {
      lVar9 = 0;
      do {
        uVar5 = iVar15 - (((int)param_6 >> 2) + (uint)((int)param_6 < 0 && (param_6 & 3) != 0));
        fn_82AAA9E0(param_1,*(undefined4 *)(param_2 + 0xc),param_7,
                      (longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0),
                      uVar11,(ulonglong)in_stack_0000005c[1] + lVar9,in_stack_00000064,3);
        iVar15 = iVar15 + 2;
        lVar9 = ((longlong)iVar12 * (longlong)(int)uVar10 & 0x1fffffffU) * 8 + lVar9;
      } while (iVar15 < iVar8);
    }
  }
  if (*(int *)(param_3 + 8) != 0) {
    fn_82AAB000(uVar7,uVar11,uVar1,*in_stack_0000005c,0);
    fn_82AAB1D8(uVar7,uVar11,uVar1,*in_stack_0000005c,param_8);
    lVar9 = 0;
    if (0 < iVar8) {
      lVar13 = 0;
      do {
        fn_82AAA9E0(param_1,*(undefined4 *)(param_2 + 8),param_7,
                      lVar9 - ((longlong)((int)param_6 >> 2) +
                              (ulonglong)((int)param_6 < 0 && (param_6 & 3) != 0)),uVar11,
                      lVar13 + (ulonglong)*in_stack_0000005c,in_stack_00000064,2);
        lVar9 = lVar9 + 1;
        lVar13 = ((longlong)iVar12 * (longlong)(int)uVar10 & 0x3fffffffU) * 4 + lVar13;
      } while ((int)lVar9 < iVar8);
    }
  }
  return;
}


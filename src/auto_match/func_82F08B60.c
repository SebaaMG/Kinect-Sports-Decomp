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
extern int fn_82F079D8();
extern int fn_82F085F8();
extern int fn_82F08690();
extern unsigned int lbl_8324DBB0;
extern unsigned int uStack00000044;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


bool fn_82F08B60(int param_1,short *param_2,short *param_3,int param_4,int *param_5,int *param_6,
                  ulonglong param_7)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar9;
  ulonglong uVar8;
  short sVar12;
  longlong lVar10;
  int iVar11;
  int *piVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  short *psStack0000001c;
  int *piStack0000003c;
  uint uStack00000044;
  int in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  int in_stack_0000006c;
  short *psStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  
  uStack00000044 = (uint)param_7;
  piVar13 = (int *)(*(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34);
  iVar17 = 0;
  uStack_ac = 0;
  psStack_b0 = (short *)0x0;
  uStack_a4 = piVar13[7];
  uVar19 = (ulonglong)uStack_a4;
  uStack_a0 = piVar13[9];
  uVar2 = piVar13[4];
  uVar14 = (ulonglong)uVar2;
  psVar7 = (short *)0x0;
  uVar3 = piVar13[5];
  sVar12 = 0;
  iVar11 = piVar13[6];
  iVar15 = 0;
  iVar4 = piVar13[8];
  iVar18 = 0;
  iVar5 = *piVar13;
  iVar16 = 0;
  psStack0000001c = param_2;
  piStack0000003c = param_6;
  if (((*(int *)(param_1 + 0x7b2c) != 0) && (-1 < in_stack_0000006c)) && (in_stack_0000006c < 4)) {
    uStack_a8 = 0;
    fn_82F085F8(param_1,*(int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                      in_stack_0000006c,&uStack_ac);
    fn_82F08690(param_1,*(undefined4 *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                  in_stack_0000006c,uStack00000044,&psStack_b0,&uStack_a8);
    uVar19 = (ulonglong)uStack_a4;
    param_7 = (ulonglong)uStack00000044;
    psVar7 = psStack_b0;
  }
  psVar6 = (short *)0x0;
  *param_3 = 0;
  psStack_b0 = (short *)0x0;
  psVar9 = psVar7;
  piVar13 = param_5;
  if (0 < (int)param_7) {
    do {
      if (psVar7 != (short *)0x0) {
        iVar18 = (int)*psVar9 * uVar3;
        iVar16 = iVar18 * 2;
      }
      sVar1 = *(short *)(*piVar13 * 2 + param_4);
      if ((uint)(sVar1 + iVar18 + iVar11) < (uint)(iVar16 + iVar4)) {
        sVar12 = sVar12 + 1;
        psVar6 = (short *)((int)sVar1 * (int)sVar1 + (int)psVar6);
      }
      else {
        psStack0000001c[*param_3 + 1] = sVar12;
        sVar12 = 0;
        *param_3 = *param_3 + 2;
      }
      param_7 = param_7 - 1;
      psVar9 = psVar9 + 1;
      piVar13 = piVar13 + 1;
      psStack_b0 = psVar6;
    } while (param_7 != 0);
  }
  psVar7 = psStack0000001c;
  if (0 < *param_3) {
    do {
      sVar12 = *(short *)(param_5[psVar7[1] + iVar15] * 2 + param_4);
      lVar10 = (longlong)sVar12;
      if ((ulonglong)uStack_a0 < (lVar10 + uVar19 & 0xffffffff)) {
        trapWord(6,uVar14,0);
        if (sVar12 < 0) {
          uVar8 = (ulonglong)uVar3 - lVar10;
          sVar1 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2);
          trapWord(5,uVar14 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *psVar7 = -sVar1;
          iVar11 = -sVar1 * iVar5;
        }
        else {
          uVar8 = lVar10 + (ulonglong)uVar3;
          trapWord(5,uVar14 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          iVar11 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2) * iVar5;
          *psVar7 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2);
        }
      }
      else if (sVar12 < 0) {
        iVar11 = -iVar5;
        *psVar7 = -1;
      }
      else {
        *psVar7 = 1;
        iVar11 = iVar5;
      }
      iVar17 = iVar17 + 2;
      iVar11 = (int)sVar12 + iVar11 * -0x10;
      psStack_b0 = (short *)(iVar11 * iVar11 + (int)psStack_b0);
      iVar15 = psVar7[1] + iVar15 + 1;
      psVar7 = psVar7 + 2;
    } while (iVar17 < *param_3);
  }
  fn_82F079D8(param_1,psStack0000001c,param_3,&psStack_b0,param_4,param_5,in_stack_00000054,
                uStack_ac);
  *piStack0000003c = (int)psStack_b0 + *piStack0000003c;
  return *param_3 != 0;
}


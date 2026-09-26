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
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int lbl_8324DBB0;
extern unsigned int uStack00000044;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


bool fn_82F08810(int param_1,short *param_2,short *param_3,int param_4,int *param_5,int *param_6,
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
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  short *psStack0000001c;
  int *piStack0000003c;
  uint uStack00000044;
  int in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  int in_stack_0000006c;
  short *psStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  uStack00000044 = (uint)param_7;
  piVar13 = (int *)(*(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34);
  iVar18 = 0;
  uStack_b4 = piVar13[7];
  uVar20 = (ulonglong)uStack_b4;
  uStack_ac = piVar13[9];
  iStack_b0 = piVar13[1];
  psVar7 = (short *)0x0;
  iStack_a8 = piVar13[2];
  sVar12 = 0;
  iStack_a4 = piVar13[3];
  iVar16 = 0;
  uVar2 = piVar13[4];
  uVar15 = (ulonglong)uVar2;
  iVar19 = 0;
  uVar3 = piVar13[5];
  iVar17 = 0;
  iVar11 = piVar13[6];
  iVar4 = piVar13[8];
  iVar5 = *piVar13;
  uStack_bc = 0;
  psStack_c0 = (short *)0x0;
  psStack0000001c = param_2;
  piStack0000003c = param_6;
  if (((*(int *)(param_1 + 0x7b2c) != 0) && (-1 < in_stack_0000006c)) && (in_stack_0000006c < 4)) {
    uStack_b8 = 0;
    fn_82F085F8(param_1,*(int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                      in_stack_0000006c,&uStack_bc);
    fn_82F08690(param_1,*(undefined4 *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                  in_stack_0000006c,uStack00000044,&psStack_c0,&uStack_b8);
    uVar20 = (ulonglong)uStack_b4;
    param_7 = (ulonglong)uStack00000044;
    psVar7 = psStack_c0;
  }
  psVar6 = (short *)0x0;
  *param_3 = 0;
  psStack_c0 = (short *)0x0;
  psVar9 = psVar7;
  piVar13 = param_5;
  if (0 < (int)param_7) {
    do {
      if (psVar7 != (short *)0x0) {
        iVar19 = (int)*psVar9 * uVar3;
        iVar17 = iVar19 * 2;
      }
      iVar14 = (int)*(short *)(*piVar13 * 2 + param_4);
      if ((uint)(iVar14 + iVar19 + iVar11) < (uint)(iVar17 + iVar4)) {
        sVar12 = sVar12 + 1;
        psVar6 = (short *)(iVar14 * iVar14 + (int)psVar6);
      }
      else {
        psStack0000001c[*param_3 + 1] = sVar12;
        sVar12 = 0;
        *param_3 = *param_3 + 2;
      }
      param_7 = param_7 - 1;
      psVar9 = psVar9 + 1;
      piVar13 = piVar13 + 1;
      psStack_c0 = psVar6;
    } while (param_7 != 0);
  }
  psVar7 = psStack0000001c;
  if (0 < *param_3) {
    do {
      sVar12 = *(short *)(param_5[psVar7[1] + iVar16] * 2 + param_4);
      lVar10 = (longlong)sVar12;
      if ((ulonglong)uStack_ac < (lVar10 + uVar20 & 0xffffffff)) {
        trapWord(6,uVar15,0);
        if (sVar12 < 0) {
          uVar8 = lVar10 + (ulonglong)uVar3;
          trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          sVar1 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * -2);
          *psVar7 = -sVar1;
          iVar11 = -sVar1 * iVar5 - iStack_b0;
        }
        else {
          uVar8 = lVar10 - (ulonglong)uVar3;
          sVar1 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2);
          trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *psVar7 = sVar1;
          iVar11 = sVar1 * iVar5 + iStack_b0;
        }
      }
      else if (sVar12 < 0) {
        *psVar7 = -1;
        iVar11 = iStack_a4;
      }
      else {
        *psVar7 = 1;
        iVar11 = iStack_a8;
      }
      iVar18 = iVar18 + 2;
      iVar11 = (int)sVar12 + iVar11 * -0x10;
      psStack_c0 = (short *)(iVar11 * iVar11 + (int)psStack_c0);
      iVar16 = psVar7[1] + iVar16 + 1;
      psVar7 = psVar7 + 2;
    } while (iVar18 < *param_3);
  }
  fn_82F079D8(param_1,psStack0000001c,param_3,&psStack_c0,param_4,param_5,in_stack_00000054,
                uStack_bc);
  *piStack0000003c = (int)psStack_c0 + *piStack0000003c;
  return *param_3 != 0;
}


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
extern unsigned int *auStack_a4;
extern int fn_82CD51E8();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;


void fn_82CD52D8(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  int iStack0000002c;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int iStack_b0;
  int iStack_ac;
  uint uStack_a8;
  uint auStack_a4 [41];
  
  iVar18 = (int)param_2;
  iVar5 = (int)param_4;
  uStack00000014 = (uint)param_1;
  uStack00000024 = (uint)param_3;
  iStack_b0 = 0;
  iStack_ac = 0;
  uStack_a8 = 0;
  auStack_a4[0] = 0;
  iStack0000001c = iVar18;
  iStack0000002c = iVar5;
  iVar3 = fn_82CD51E8(in_stack_0000008c,in_stack_00000094,&iStack_ac,auStack_a4);
  lVar19 = param_3 + param_6;
  param_4 = param_4 + param_6;
  iVar17 = (int)param_4;
  uVar14 = param_1 + param_5;
  lVar12 = param_2 + param_5;
  lVar15 = lVar19 + param_6;
  iVar16 = (int)lVar15;
  lVar10 = param_4 + param_6;
  iVar11 = (int)lVar10;
  iVar4 = fn_82CD51E8(in_stack_0000007c,in_stack_00000084,&iStack_b0,&uStack_a8);
  if ((iVar4 != 0) && (iVar3 != 0)) {
    lVar7 = (ulonglong)(in_stack_0000006c == 0) + (ulonglong)in_stack_0000005c;
    uVar6 = param_1;
    iVar3 = iVar18;
    if (1 < (int)lVar7) {
      lVar7 = lVar7 + -1;
      uVar8 = param_1;
      do {
        uVar6 = uVar14;
        lVar13 = lVar12;
        uVar14 = (ulonglong)in_stack_00000054;
        if (0 < (int)in_stack_00000054) {
          iVar4 = (int)uVar8;
          iVar3 = (int)param_2 - iVar4;
          iVar5 = (int)lVar15;
          iVar18 = (int)uVar6 - iVar4;
          iVar4 = (int)lVar13 - iVar4;
          lVar12 = lVar15;
          do {
            pbVar1 = (byte *)uVar8;
            puVar9 = (undefined1 *)lVar12;
            puVar9[(int)lVar19 - iVar5] =
                 (char)((int)((uint)pbVar1[iVar18] * in_stack_00000084 +
                              (uint)*pbVar1 * in_stack_0000007c + iStack_b0) >> (uStack_a8 & 0x3f));
            *puVar9 = (char)((int)((uint)pbVar1[iVar18] * in_stack_00000094 +
                                   (uint)*pbVar1 * in_stack_0000008c + iStack_ac) >>
                            (auStack_a4[0] & 0x3f));
            puVar9[(int)param_4 - iVar5] =
                 (char)((int)((uint)pbVar1[iVar3] * in_stack_0000007c +
                              (uint)pbVar1[iVar4] * in_stack_00000084 + iStack_b0) >>
                       (uStack_a8 & 0x3f));
            uVar8 = uVar8 + param_7;
            puVar9[(int)lVar10 - iVar5] =
                 (char)((int)((uint)pbVar1[iVar3] * in_stack_0000008c +
                              (uint)pbVar1[iVar4] * in_stack_00000094 + iStack_ac) >>
                       (auStack_a4[0] & 0x3f));
            lVar12 = lVar12 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          param_1 = (ulonglong)uStack00000014;
        }
        lVar19 = lVar15 + param_6;
        param_4 = lVar10 + param_6;
        iVar17 = (int)param_4;
        lVar7 = lVar7 + -1;
        lVar15 = lVar19 + param_6;
        iVar16 = (int)lVar15;
        lVar10 = param_4 + param_6;
        iVar11 = (int)lVar10;
        lVar12 = lVar13 + param_5;
        uVar14 = uVar6 + param_5;
        param_2 = lVar13;
        uVar8 = uVar6;
      } while (lVar7 != 0);
      param_3 = (ulonglong)uStack00000024;
      iVar18 = iStack0000001c;
      iVar5 = iStack0000002c;
      iVar3 = (int)lVar13;
    }
    uVar14 = (ulonglong)in_stack_00000054;
    if ((in_stack_00000064 != 0) && (0 < (int)in_stack_00000054)) {
      iVar4 = (int)param_1;
      iVar2 = (int)param_3;
      uVar8 = uVar14;
      do {
        puVar9 = (undefined1 *)param_1;
        *(undefined1 *)param_3 = *puVar9;
        param_1 = param_1 + param_7;
        ((undefined1 *)param_3)[iVar5 - iVar2] = puVar9[iVar18 - iVar4];
        param_3 = param_3 + param_8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (((in_stack_0000006c != 0) && (0 < in_stack_00000074)) && (0 < (int)in_stack_00000054)) {
      iVar18 = (int)uVar6;
      iVar5 = (int)lVar19;
      do {
        puVar9 = (undefined1 *)lVar19;
        *puVar9 = *(undefined1 *)uVar6;
        puVar9[iVar17 - iVar5] = ((undefined1 *)uVar6)[iVar3 - iVar18];
        if (1 < in_stack_00000074) {
          puVar9[iVar16 - iVar5] = *puVar9;
          puVar9[iVar11 - iVar5] = puVar9[iVar17 - iVar5];
        }
        uVar6 = uVar6 + param_7;
        lVar19 = lVar19 + param_8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}


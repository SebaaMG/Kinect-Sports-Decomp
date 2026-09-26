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
extern unsigned int uStack00000034;


void fn_829BFAA0(int param_1,int *param_2,int param_3,int param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  int iVar24;
  int *piVar25;
  uint uStack00000034;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  uVar18 = param_5 - 1;
  uStack00000034 = (uint)uVar18;
  uVar2 = *(uint *)(param_1 + 0x70);
  iVar3 = *(int *)(iVar1 + 0x18);
  iVar4 = *(int *)(iVar1 + 0x1c);
  iVar5 = *(int *)(iVar1 + 0x20);
  iVar6 = *(int *)(iVar1 + 0x24);
  iVar7 = *(int *)(iVar1 + 0x28);
  iVar8 = *(int *)(iVar1 + 0x2c);
  iVar9 = *(int *)(iVar1 + 0x30);
  iVar10 = *(int *)(iVar1 + 0x34);
  iVar11 = *(int *)(iVar1 + 0x38);
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (-1 < (longlong)uVar18) {
    param_3 = param_3 << 2;
    piVar25 = (int *)(param_4 + -4);
    do {
      piVar25 = piVar25 + 1;
      piVar12 = (int *)(param_3 + *param_2);
      pbVar23 = *(byte **)(param_3 + param_2[1]);
      piVar13 = (int *)(param_3 + param_2[2]);
      piVar14 = (int *)(param_3 + param_2[3]);
      param_3 = param_3 + 4;
      if ((ulonglong)uVar2 != 0) {
        puVar22 = (undefined1 *)(*piVar25 + -1);
        iVar15 = *piVar12 - (int)pbVar23;
        iVar16 = *piVar13 - (int)pbVar23;
        iVar17 = *piVar14 - (int)pbVar23;
        uVar18 = (ulonglong)uVar2;
        do {
          iVar24 = (0xff - (uint)pbVar23[iVar15]) * 4;
          iVar21 = (0xff - (uint)pbVar23[iVar17]) * 4;
          iVar20 = (0xff - (uint)*pbVar23) * 4;
          iVar19 = (0xff - (uint)pbVar23[iVar16]) * 4;
          pbVar23 = pbVar23 + 1;
          puVar22[1] = (char)((ulonglong)
                              ((longlong)
                               (int)(uint)(ushort)((ulonglong)
                                                   ((longlong)
                                                    (int)(uint)(ushort)((ulonglong)
                                                                        ((longlong)
                                                                         *(int *)(iVar24 + iVar4) *
                                                                        (longlong)
                                                                        *(int *)(iVar21 + iVar3)) >>
                                                                       0x10) *
                                                   (longlong)*(int *)(iVar20 + iVar7)) >> 0x10) *
                              (longlong)*(int *)(iVar19 + iVar10)) >> 0x18);
          puVar22[2] = (char)((ulonglong)
                              ((longlong)
                               (int)(uint)(ushort)((ulonglong)
                                                   ((longlong)
                                                    (int)(uint)(ushort)((ulonglong)
                                                                        ((longlong)
                                                                         *(int *)(iVar20 + iVar8) *
                                                                        (longlong)
                                                                        *(int *)(iVar21 + iVar3)) >>
                                                                       0x10) *
                                                   (longlong)*(int *)(iVar19 + iVar11)) >> 0x10) *
                              (longlong)*(int *)(iVar24 + iVar5)) >> 0x18);
          puVar22 = puVar22 + 3;
          *puVar22 = (char)((ulonglong)
                            ((longlong)
                             (int)(uint)(ushort)((ulonglong)
                                                 ((longlong)
                                                  (int)(uint)(ushort)((ulonglong)
                                                                      ((longlong)
                                                                       *(int *)(iVar19 + iVar1) *
                                                                      (longlong)
                                                                      *(int *)(iVar21 + iVar3)) >>
                                                                     0x10) *
                                                 (longlong)*(int *)(iVar24 + iVar6)) >> 0x10) *
                            (longlong)*(int *)(iVar20 + iVar9)) >> 0x18);
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar18 = (ulonglong)uStack00000034;
      }
      uVar18 = uVar18 - 1;
      uStack00000034 = (uint)uVar18;
    } while (-1 < (longlong)uVar18);
  }
  return;
}


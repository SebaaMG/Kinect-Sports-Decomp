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


void fn_829BFC08(int param_1,int *param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  byte *pbVar25;
  int iVar26;
  int iVar27;
  byte *pbVar28;
  int iVar29;
  int iVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  ulonglong uVar33;
  int *piVar34;
  ulonglong uVar35;
  uint uStack00000034;
  
  iVar3 = *(int *)(param_1 + 0x1cc);
  uVar33 = param_5 - 1;
  uVar4 = *(uint *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x148);
  uStack00000034 = (uint)uVar33;
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar8 = *(int *)(iVar3 + 0x1c);
  iVar9 = *(int *)(iVar3 + 0x20);
  iVar10 = *(int *)(iVar3 + 0x24);
  iVar11 = *(int *)(iVar3 + 0x28);
  iVar12 = *(int *)(iVar3 + 0x2c);
  iVar13 = *(int *)(iVar3 + 0x30);
  iVar14 = *(int *)(iVar3 + 0x34);
  iVar15 = *(int *)(iVar3 + 0x38);
  iVar16 = *(int *)(iVar3 + 0x3c);
  iVar17 = *(int *)(iVar3 + 8);
  iVar18 = *(int *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (-1 < (longlong)uVar33) {
    param_3 = param_3 << 2;
    piVar34 = (int *)(param_4 + -4);
    do {
      uVar35 = (ulonglong)uVar4;
      piVar34 = piVar34 + 1;
      piVar22 = (int *)(param_3 + *param_2);
      pbVar32 = *(byte **)(param_2[1] + param_3);
      piVar23 = (int *)(param_3 + param_2[2]);
      piVar24 = (int *)(param_2[3] + param_3);
      param_3 = param_3 + 4;
      if (uVar35 != 0) {
        puVar31 = (undefined1 *)(*piVar34 + -1);
        iVar27 = *piVar22 - (int)pbVar32;
        iVar26 = *piVar23 - (int)pbVar32;
        iVar29 = *piVar24 - (int)pbVar32;
        do {
          bVar1 = *pbVar32;
          pbVar25 = pbVar32 + iVar26;
          bVar2 = pbVar32[iVar27];
          pbVar28 = pbVar32 + iVar29;
          pbVar32 = pbVar32 + 1;
          iVar30 = (0xff - (uint)*pbVar28) * 4;
          iVar19 = (uint)*(byte *)(*(int *)((uint)*pbVar25 * 4 + iVar17) + (uint)bVar2 + iVar5) * 4;
          iVar20 = (uint)*(byte *)((*(int *)((uint)bVar1 * 4 + iVar6) +
                                    *(int *)((uint)*pbVar25 * 4 + iVar3) >> 0x10) + (uint)bVar2 +
                                  iVar5) * 4;
          iVar21 = (uint)*(byte *)(*(int *)((uint)bVar1 * 4 + iVar18) + (uint)bVar2 + iVar5) * 4;
          puVar31[1] = (char)((ulonglong)
                              ((longlong)
                               (int)(uint)(ushort)((ulonglong)
                                                   ((longlong)
                                                    (int)(uint)(ushort)((ulonglong)
                                                                        ((longlong)
                                                                         *(int *)(iVar19 + iVar8) *
                                                                        (longlong)
                                                                        *(int *)(iVar30 + iVar7)) >>
                                                                       0x10) *
                                                   (longlong)*(int *)(iVar20 + iVar11)) >> 0x10) *
                              (longlong)*(int *)(iVar21 + iVar14)) >> 0x18);
          puVar31[2] = (char)((ulonglong)
                              ((longlong)
                               (int)(uint)(ushort)((ulonglong)
                                                   ((longlong)
                                                    (int)(uint)(ushort)((ulonglong)
                                                                        ((longlong)
                                                                         *(int *)(iVar20 + iVar12) *
                                                                        (longlong)
                                                                        *(int *)(iVar30 + iVar7)) >>
                                                                       0x10) *
                                                   (longlong)*(int *)(iVar21 + iVar15)) >> 0x10) *
                              (longlong)*(int *)(iVar19 + iVar9)) >> 0x18);
          puVar31 = puVar31 + 3;
          *puVar31 = (char)((ulonglong)
                            ((longlong)
                             (int)(uint)(ushort)((ulonglong)
                                                 ((longlong)
                                                  (int)(uint)(ushort)((ulonglong)
                                                                      ((longlong)
                                                                       *(int *)(iVar21 + iVar16) *
                                                                      (longlong)
                                                                      *(int *)(iVar30 + iVar7)) >>
                                                                     0x10) *
                                                 (longlong)*(int *)(iVar19 + iVar10)) >> 0x10) *
                            (longlong)*(int *)(iVar20 + iVar13)) >> 0x18);
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
        uVar33 = (ulonglong)uStack00000034;
      }
      uVar33 = uVar33 - 1;
      uStack00000034 = (uint)uVar33;
    } while (-1 < (longlong)uVar33);
  }
  return;
}


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
extern unsigned int *auStack_a0;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82CBCC78();


undefined8 fn_82CBD560(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint auStack_a0 [40];
  
  param_2 = (int *)*param_2;
  iVar9 = *(int *)(param_1 + 0x13c);
  uVar10 = *(uint *)(param_1 + 0x140);
  puVar11 = *(ulonglong **)(param_1 + 0x54);
  uVar12 = param_2[2];
  piVar13 = (int *)*param_2;
  iVar14 = param_2[7];
  iVar15 = param_2[8];
  iVar16 = param_2[1];
  uVar25 = 1;
  uVar19 = auStack_a0[0];
  if (param_3 != 0) {
    do {
      do {
        if (piVar13 == (int *)0x0) {
          uVar26 = 0xffffffffffffffff;
          *(undefined4 *)((int)puVar11 + 0x14) = 3;
        }
        else {
          iVar18 = *piVar13;
          sVar7 = *(short *)((int)((*puVar11 >> (0x40 - (ulonglong)*(byte *)(piVar13 + 2) & 0x7f) &
                                   0xffffffff) << 1) + iVar18);
          uVar26 = (ulonglong)sVar7;
          if (sVar7 < 0) {
            fn_82C4E470(puVar11);
            do {
              uVar24 = *puVar11;
              fn_82C4E470(puVar11,1);
              sVar7 = *(short *)((int)(((uVar26 - ((longlong)uVar24 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar18);
              uVar26 = (ulonglong)sVar7;
            } while (sVar7 < 0);
            uVar19 = (uint)((longlong)*puVar11 >> 0x3f);
            fn_82C4E470(puVar11,1);
          }
          else {
            lVar21 = *puVar11 << (uVar26 & 0xf);
            lVar23 = ((ulonglong)*(uint *)(puVar11 + 1) - (uVar26 & 0xf)) + -1;
            uVar19 = (uint)(lVar21 >> 0x3f);
            *(int *)(puVar11 + 1) = (int)lVar23;
            *puVar11 = lVar21 << 1;
            if (lVar23 < 0) {
              do {
                pbVar17 = *(byte **)((int)puVar11 + 0xc);
                if (pbVar17 < (byte *)(*(int *)(puVar11 + 2) - 4U)) {
                  bVar5 = *pbVar17;
                  bVar6 = pbVar17[1];
                  bVar1 = pbVar17[2];
                  bVar2 = pbVar17[3];
                  bVar3 = pbVar17[4];
                  bVar4 = pbVar17[5];
                  iVar18 = *(int *)(puVar11 + 1);
                  *(byte **)((int)puVar11 + 0xc) = pbVar17 + 6;
                  *(int *)(puVar11 + 1) = iVar18 + 0x30;
                  *puVar11 = ((((((ulonglong)bVar5 * 0x100 + (ulonglong)bVar6) * 0x100 +
                                (ulonglong)bVar1) * 0x100 + (ulonglong)bVar2) * 0x100 +
                              (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4 <<
                             ((longlong)-iVar18 & 0x7fU)) + *puVar11;
                  goto LAB_82cbd6d0;
                }
                iVar18 = fn_82C4E3B0(puVar11);
              } while (iVar18 == 1);
              uVar26 = (ulonglong)((int)sVar7 >> 4);
            }
            else {
LAB_82cbd6d0:
              uVar26 = (ulonglong)((int)sVar7 >> 4);
            }
          }
        }
        iVar18 = (int)(uVar26 & 0xff);
        bVar5 = *(byte *)(iVar18 + iVar15);
        iVar20 = bVar5 + uVar25;
        bVar6 = *(byte *)(iVar20 + param_5);
        iVar22 = ((int)*(char *)(iVar18 + iVar14) ^ uVar19) - uVar19;
        sVar7 = (short)iVar22;
        if (bVar6 < 8) {
          *(short *)((uint)bVar6 * 2 + param_4) = *(short *)((uint)bVar6 * 2 + param_4) + sVar7;
        }
        else if ((bVar6 & 7) == 0) {
          iVar22 = (((int)(uint)bVar6 >> 3) + 8) * 2;
          *(short *)(iVar22 + param_4) = *(short *)(iVar22 + param_4) + sVar7;
        }
        else if (iVar22 < 1) {
          *(uint *)(*(int *)(param_1 + 0x6e4) + (uint)bVar6 * 4) = iVar22 * iVar9 - uVar10;
        }
        else {
          *(uint *)(*(int *)(param_1 + 0x6e4) + (uint)bVar6 * 4) = iVar22 * iVar9 + uVar10;
        }
        uVar25 = iVar20 + 1;
      } while (((uVar26 & 0xff) < (ulonglong)uVar12 + 1 && (uint)LZCOUNT(iVar16 - iVar18) >> 5 == 0)
               && uVar25 < 0x40);
      if (iVar18 != iVar16) break;
      auStack_a0[0] = (uVar25 - bVar5) - 1;
      if (bVar6 < 8) {
        *(short *)((uint)bVar6 * 2 + param_4) = *(short *)((uint)bVar6 * 2 + param_4) - sVar7;
      }
      else if ((bVar6 & 7) == 0) {
        iVar18 = (((int)(uint)bVar6 >> 3) + 8) * 2;
        *(short *)(iVar18 + param_4) = *(short *)(iVar18 + param_4) - sVar7;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x6e4) + (uint)bVar6 * 4) = 0;
      }
      uVar26 = fn_82CBCC78(param_1,param_2,param_4,param_5,-uVar19,auStack_a0);
      uVar25 = auStack_a0[0];
    } while ((uVar26 & 0xff) < ((ulonglong)uVar12 + 1 & 0xffffffff));
  }
  uVar26 = 1;
  lVar21 = 0x200000002;
  do {
    sVar7 = *(short *)((int)lVar21 + param_4);
    lVar21 = uVar26 << 2;
    uVar12 = (int)sVar7 >> 0x1f;
    sVar8 = *(short *)(((int)uVar26 + 8) * 2 + param_4);
    uVar25 = (int)sVar8 >> 0x1f;
    lVar23 = uVar26 << 5;
    uVar26 = uVar26 + 1 & 0xff;
    *(uint *)((int)lVar21 + *(int *)(param_1 + 0x6e4)) =
         ((uVar12 ^ uVar10) + sVar7 * iVar9) - uVar12 & -(uint)(sVar7 != 0);
    lVar21 = uVar26 << 1;
    *(uint *)((int)lVar23 + *(int *)(param_1 + 0x6e4)) =
         ((uVar25 ^ uVar10) + sVar8 * iVar9) - uVar25 & -(uint)(sVar8 != 0);
  } while (uVar26 < 8);
  return 0;
}


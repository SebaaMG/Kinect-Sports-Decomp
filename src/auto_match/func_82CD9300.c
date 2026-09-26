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
#define CONCAT14(h,l) ((U64)((((U8)(h)) << 32) | ((U32)(l))))


ulonglong fn_82CD9300(ulonglong param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                       ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_0000006c;
  
  uVar27 = (ulonglong)in_stack_0000005c;
  lVar12 = (param_6 & 0xffff) * 0x10000;
  uVar15 = lVar12 - 0x10000;
  uVar11 = uVar27 - 1;
  uVar17 = (param_5 & 0xffff) * 0x10000 - 0x10000;
  uVar1 = (int)uVar15 / (int)uVar11;
  uVar24 = (ulonglong)in_stack_00000054 - 1;
  uVar15 = ((uVar15 & 0x7fffffff) << 1 | (uVar15 & 0xffffffff) >> 0x1f) - 1;
  trapWord(6,uVar11,0);
  uVar22 = ((longlong)((int)uVar1 >> 4) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + lVar12
           ) - 0x8000;
  iVar2 = (int)uVar17 / (int)uVar24;
  trapWord(6,uVar24,0);
  trapWord(5,uVar24 & ~(((uVar17 & 0x7fffffff) << 1 | (uVar17 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar11 & ~uVar15,0xffff);
  if ((param_1 & 3) == 0) {
    iVar19 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar11 = uVar22;
      uVar21 = 0;
      do {
        iVar14 = 0x8000;
        uVar16 = uVar21 + 0x10;
        uVar20 = uVar16;
        if ((int)in_stack_00000054 < (int)uVar16) {
          uVar20 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar11) {
          do {
            iVar25 = (int)(iVar14 + uVar1) >> 0x10;
            uVar15 = (ulonglong)iVar25;
            iVar26 = (iVar14 >> 0x10) * param_7 + param_2;
            iVar25 = iVar25 * param_7 + param_2;
            if ((int)uVar21 < (int)uVar20) {
              iVar23 = (iVar14 >> 0x11) * param_8;
              lVar12 = (ulonglong)((uVar20 - uVar21) - 1 >> 1) + 1;
              iVar13 = iVar19;
              do {
                iVar8 = iVar13 >> 0x10;
                iVar10 = iVar13 + iVar2;
                iVar9 = iVar13 >> 0x11;
                iVar13 = iVar2 * 2 + iVar13;
                bVar3 = *(byte *)(iVar23 + param_4 + iVar9);
                iVar10 = iVar10 >> 0x10;
                bVar4 = *(byte *)(iVar23 + iVar9 + param_3);
                bVar5 = *(byte *)(iVar10 + iVar25);
                uVar15 = (ulonglong)*(byte *)(iVar10 + iVar26) * 0x100 + (ulonglong)bVar4 |
                         ((ulonglong)CONCAT14(bVar5,(uint)bVar5) & 0xff) * 0x1000000 +
                         (ulonglong)bVar3 * 0x10000;
                *(uint *)param_1 =
                     (uint)*(byte *)(iVar8 + iVar26) * 0x100 + (uint)bVar4 |
                     (uint)*(byte *)(iVar8 + iVar25) * 0x1000000 + (uint)bVar3 * 0x10000;
                *(int *)((int)(uint *)param_1 + in_stack_0000006c * 2) = (int)uVar15;
                param_1 = param_1 + ((ulonglong)in_stack_0000006c & 0x3fffffff) * 4;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              uVar11 = uVar22 & 0xffffffff;
            }
            iVar14 = iVar14 + uVar1 + uVar1;
            param_1 = (2U - (longlong)(int)(uVar20 - uVar21) * (longlong)(int)in_stack_0000006c &
                      0x7fffffff) * 2 + param_1;
          } while (iVar14 < (int)uVar11);
        }
        param_1 = param_1 + (((ulonglong)in_stack_0000006c & 0xfffffff) * 0x10 - uVar27 & 0x7fffffff
                            ) * 2;
        iVar19 = iVar19 + iVar2 * 0x10;
        uVar21 = uVar16;
      } while ((int)uVar16 < (int)in_stack_00000054);
    }
  }
  else {
    iVar19 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar11 = uVar22;
      uVar21 = 0;
      do {
        iVar14 = 0x8000;
        uVar16 = uVar21 + 0x10;
        uVar20 = uVar16;
        if ((int)in_stack_00000054 < (int)uVar16) {
          uVar20 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar11) {
          do {
            uVar15 = (ulonglong)(iVar14 >> 0x11);
            iVar26 = (iVar14 >> 0x10) * param_7 + param_2;
            iVar25 = ((int)(iVar14 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar21 < (int)uVar20) {
              iVar23 = (iVar14 >> 0x11) * param_8;
              lVar12 = (ulonglong)((uVar20 - uVar21) - 1 >> 1) + 1;
              iVar13 = iVar19;
              do {
                iVar8 = iVar13 >> 0x10;
                iVar10 = iVar13 + iVar2;
                iVar9 = iVar13 >> 0x11;
                iVar13 = iVar2 * 2 + iVar13;
                bVar3 = *(byte *)(iVar8 + iVar25);
                bVar4 = *(byte *)(iVar23 + param_4 + iVar9);
                bVar5 = *(byte *)(iVar23 + iVar9 + param_3);
                iVar10 = iVar10 >> 0x10;
                bVar6 = *(byte *)(iVar10 + iVar26);
                bVar7 = *(byte *)(iVar10 + iVar25);
                psVar18 = (short *)param_1;
                *psVar18 = (ushort)*(byte *)(iVar8 + iVar26) * 0x100 + (ushort)bVar4;
                uVar15 = (ulonglong)bVar7 * 0x100 + (ulonglong)bVar5;
                psVar18[1] = (ushort)bVar3 * 0x100 + (ushort)bVar5;
                psVar18[in_stack_0000006c] = (ushort)bVar6 * 0x100 + (ushort)bVar4;
                psVar18[in_stack_0000006c + 1] = (short)uVar15;
                param_1 = param_1 + ((ulonglong)in_stack_0000006c & 0x3fffffff) * 4;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              uVar11 = uVar22 & 0xffffffff;
            }
            iVar14 = iVar14 + uVar1 + uVar1;
            param_1 = (2U - (longlong)(int)(uVar20 - uVar21) * (longlong)(int)in_stack_0000006c &
                      0x7fffffff) * 2 + param_1;
          } while (iVar14 < (int)uVar11);
        }
        param_1 = param_1 + (((ulonglong)in_stack_0000006c & 0xfffffff) * 0x10 - uVar27 & 0x7fffffff
                            ) * 2;
        iVar19 = iVar19 + iVar2 * 0x10;
        uVar21 = uVar16;
      } while ((int)uVar16 < (int)in_stack_00000054);
    }
  }
  return uVar15;
}


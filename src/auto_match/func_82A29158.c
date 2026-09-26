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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e8;
extern int fn_82A27010();
extern int fn_82A27260();
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82A299C0();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int iStack00000014;
extern unsigned int iStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_8;


int fn_82A29158(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar7;
  int iVar8;
  ulonglong uVar6;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iStack00000014;
  int iStack00000024;
  undefined4 uStack0000002c;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [184];
  undefined4 uStack_8;
  
  iVar8 = (int)param_1;
  iVar12 = (int)param_3;
  uStack0000002c = (undefined4)param_4;
  iStack00000014 = iVar8;
  iStack00000024 = iVar12;
  if (((*(uint *)(iVar8 + 0x14) & 0x40000) != 0) &&
     (uVar7 = KeGetCurrentProcessType(), *(byte *)(iVar8 + 0x17b) != uVar7)) {
    KeBugCheckEx(0xf4,param_1,uStack_8,0xc6c,param_3);
  }
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  uVar9 = (ulonglong)*(uint *)(iVar8 + 0x18);
  uVar15 = uVar9 | param_2;
  if (0x7fffffff < (param_4 & 0xffffffff)) {
    return 0;
  }
  uVar10 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar10 = 1;
  }
  uVar18 = uVar9 | param_2 & 0xffffffff;
  uVar10 = *(uint *)(iVar8 + 0x50) + uVar10 & (ulonglong)*(uint *)(iVar8 + 0x54);
  if ((((uVar18 & 0x3fffff00) != 0 || (uVar18 & 0x3c000100) != 0) || (*(int *)(iVar8 + 0x17c) != 0))
     || ((*(byte *)(iVar12 + -0xb) & 2) != 0)) {
    uVar10 = uVar10 + 0x10;
  }
  if (((uVar9 | param_2 & 0xffffffff) & 1) == 0) {
    RtlEnterCriticalSection(*(undefined4 *)(iVar8 + 0x580));
    uVar15 = uVar15 ^ 1;
  }
  lVar19 = param_3 - 0x10;
  puVar14 = (ushort *)lVar19;
  bVar1 = *(byte *)(iVar12 + -0xb);
  if ((bVar1 & 1) == 0) goto LAB_82a2996c;
  uVar2 = *puVar14;
  uVar9 = (ulonglong)uVar2;
  if ((bVar1 & 8) == 0) {
    uVar18 = uVar9 * 0x10 - (ulonglong)*(byte *)(iVar12 + -10);
  }
  else {
    uVar10 = uVar10 + 0x1001f & 0xffff0000;
    uVar18 = (*(uint *)(iVar12 + -0x18) - uVar9) - 0x30;
    uVar9 = (ulonglong)(*(uint *)(iVar12 + -0x18) >> 4);
  }
  iVar17 = (int)uVar10;
  uVar10 = (uVar10 & 0xffffffff) >> 4;
  uVar6 = param_3;
  uVar16 = uVar15;
  if (uVar9 < uVar10) {
    if (((bVar1 & 8) == 0) &&
       (iVar8 = fn_82A27260(param_1,uVar15,lVar19,param_4,uVar10), iVar5 = iStack00000024,
       iVar8 != 0)) goto LAB_82a29938;
    if ((uVar15 & 0x10) == 0) {
      uVar16 = uVar15 << 0x20 | uVar15 & 0xc003ffff;
      if ((*(byte *)(iVar12 + -0xb) & 2) == 0) {
        if ((ulonglong)*(byte *)(iVar12 + -9) != 0) {
          uVar16 = (ulonglong)*(byte *)(iVar12 + -9) << 0x12 | uVar16;
        }
      }
      else {
        uVar16 = ((ulonglong)*(byte *)(iVar12 + -0xb) & 0xe0) << 4 | 0x100 |
                 (uVar15 & 0xc003ffff) << 0x20 | uVar15 & 0xc003f1ff;
        if ((*(byte *)(iVar12 + -0xb) & 8) == 0) {
          puVar13 = puVar14 + (uint)*puVar14 * 8 + -8;
        }
        else {
          puVar13 = (ushort *)(iVar12 + -0x28);
        }
        uVar2 = puVar13[1];
        if (((ulonglong)uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
          uVar16 = ((ulonglong)uVar2 & 0x3fff) << 0x12 | uVar16;
        }
      }
      uVar6 = fn_82A28568(param_1,uVar16 << 0x20 | uVar16 & 0xfffffff7,param_4);
      iVar5 = (int)uVar6;
      if (uVar6 != 0) {
        if ((*(byte *)(iVar5 + -0xb) & 2) != 0) {
          if ((*(byte *)(iVar5 + -0xb) & 8) == 0) {
            puVar13 = (ushort *)(iVar5 + -0x10) + (uint)*(ushort *)(iVar5 + -0x10) * 8 + -8;
          }
          else {
            puVar13 = (ushort *)(iVar5 + -0x28);
          }
          if ((*(byte *)(iVar12 + -0xb) & 2) == 0) {
            puVar13[0] = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
          }
          else {
            if ((*(byte *)(iVar12 + -0xb) & 8) == 0) {
              puVar14 = puVar14 + (uint)*puVar14 * 8 + -8;
            }
            else {
              puVar14 = (ushort *)(iVar12 + -0x28);
            }
            *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(puVar14 + 2);
          }
        }
        uVar15 = param_4;
        if ((uVar18 & 0xffffffff) <= (param_4 & 0xffffffff)) {
          uVar15 = uVar18;
        }
        fn_82F63CA0(uVar6,param_3,uVar15);
        if (((uVar18 & 0xffffffff) < (param_4 & 0xffffffff)) && ((uVar16 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar6 + uVar18,0,param_4 - uVar18);
        }
        fn_82A28E60(param_1,uVar16,param_3);
      }
      goto LAB_82a29938;
    }
    iStack00000024 = 0;
  }
  else {
    if (uVar10 + 1 == uVar9) {
      iVar17 = iVar17 + 0x10;
      uVar10 = uVar10 + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) == 0) {
        *(char *)(iVar12 + -10) = (char)iVar17 - (char)param_4;
      }
      else {
        iVar5 = (int)(uVar10 << 4);
        *(undefined8 *)((int)puVar14 + iVar5 + -0x10) =
             *(undefined8 *)(puVar14 + (uint)uVar2 * 8 + -8);
        *(undefined8 *)((int)puVar14 + iVar5 + -8) = *(undefined8 *)(puVar14 + (uint)uVar2 * 8 + -4)
        ;
        *(char *)(iVar12 + -10) = (char)iVar17 - (char)param_4;
      }
    }
    else {
      *puVar14 = ((short)iVar17 - (short)param_4) - 0x30;
    }
    if (((uVar18 & 0xffffffff) < (param_4 & 0xffffffff)) && ((uVar15 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar18 + param_3,0,param_4 - uVar18);
    }
    iVar5 = iStack00000024;
    if (uVar10 != uVar9) {
      bVar1 = *(byte *)(iVar12 + -0xb);
      if ((bVar1 & 8) == 0) {
        lVar19 = (uVar10 & 0xfffffff) * 0x10 + lVar19;
        puVar13 = (ushort *)lVar19;
        *(byte *)((int)puVar13 + 5) = bVar1 & 0xfe;
        puVar13[1] = (ushort)uVar10;
        *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(iVar12 + -0xc);
        uVar15 = *puVar14 - uVar10;
        *puVar14 = (ushort)uVar10;
        *(byte *)(iVar12 + -0xb) = *(byte *)(iVar12 + -0xb) & 0xef;
        uVar2 = (ushort)uVar15;
        if ((bVar1 & 0x10) == 0) {
          lVar20 = (uVar15 & 0xfffffff) * 0x10 + lVar19;
          puVar14 = (ushort *)lVar20;
          if ((*(byte *)((int)puVar14 + 5) & 1) != 0) {
            *puVar13 = uVar2;
            puVar14[1] = uVar2;
            *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) & 0xf8;
            if ((uVar15 & 0xffff) < 0x80) goto LAB_82a294e0;
            for (puVar11 = *(uint **)(iVar8 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                ((ulonglong)*(ushort *)(puVar11 + -2) < (uVar15 & 0xffff)));
                puVar11 = (uint *)*puVar11) {
            }
            goto LAB_82a29518;
          }
          *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar14 + 5);
          puVar11 = *(uint **)(puVar14 + 6);
          puVar4 = *(uint **)(puVar14 + 4);
          if (((ulonglong)*puVar11 == (ulonglong)puVar4[1]) &&
             ((ulonglong)*puVar11 == (lVar20 + 8U & 0xffffffff))) {
            *puVar11 = (uint)puVar4;
            puVar4[1] = (uint)puVar11;
            if ((puVar4 == puVar11) && (uVar2 = *puVar14, uVar2 < 0x80)) {
              iVar12 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar8) = *(uint *)(iVar12 + iVar8) ^ 1 << (uVar2 & 0x1f);
            }
          }
          if ((*(byte *)((int)puVar14 + 5) & 4) != 0) {
            uVar9 = (ulonglong)*puVar14 * 0x10 - 0x18;
            if (((*(byte *)((int)puVar14 + 5) & 2) != 0) && (4 < (uVar9 & 0xffffffff))) {
              uVar9 = (ulonglong)*puVar14 * 0x10 - 0x1c;
            }
            RtlCompareMemoryUlong(lVar20 + 0x18,uVar9,0xfffffffffeeefeee);
          }
          *(uint *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (uint)*puVar14;
          uVar15 = *puVar14 + uVar15;
          if (0xf000 < (uVar15 & 0xffffffff)) {
            fn_82A27010(param_1,lVar19);
            iVar5 = iStack00000024;
            goto LAB_82a29938;
          }
          uVar9 = uVar15 & 0xffff;
          *puVar13 = (ushort)uVar15;
          if ((*(byte *)((int)puVar13 + 5) & 0x10) == 0) {
            *(ushort *)((int)puVar13 + (int)((uVar15 & 0xffffffff) << 4) + 2) = (ushort)uVar15;
          }
          else {
            *(ushort **)(*(int *)((*(byte *)(puVar13 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar13;
          }
          *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) & 0xf8;
          if (uVar9 < 0x80) {
            uVar9 = (uVar9 + 0x30) * 8 + param_1;
            puVar11 = (uint *)uVar9;
            if ((ulonglong)*puVar11 == (uVar9 & 0xffffffff)) {
              iVar12 = ((*puVar13 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar8) = *(uint *)(iVar12 + iVar8) | 1 << (*puVar13 & 0x1f);
            }
          }
          else {
            for (puVar11 = *(uint **)(iVar8 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                (*(ushort *)(puVar11 + -2) < uVar9)); puVar11 = (uint *)*puVar11) {
            }
          }
          puVar3 = (undefined4 *)puVar11[1];
          *(uint **)(puVar13 + 4) = puVar11;
          *(undefined4 **)(puVar13 + 6) = puVar3;
          *puVar3 = puVar13 + 4;
          puVar11[1] = (uint)(puVar13 + 4);
          iVar12 = (int)uVar15 + *(int *)(iVar8 + 0x30);
        }
        else {
          *(ushort **)(*(int *)((*(byte *)(puVar13 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar13;
          *puVar13 = uVar2;
          *(byte *)((int)puVar13 + 5) = *(byte *)((int)puVar13 + 5) & 0xf8;
          if ((uVar15 & 0xffff) < 0x80) {
LAB_82a294e0:
            uVar9 = ((uVar15 & 0xffff) + 0x30) * 8 + param_1;
            puVar11 = (uint *)uVar9;
            if ((ulonglong)*puVar11 == (uVar9 & 0xffffffff)) {
              iVar12 = ((*puVar13 >> 5) + 0x58) * 4;
              *(uint *)(iVar12 + iVar8) = *(uint *)(iVar12 + iVar8) | 1 << (*puVar13 & 0x1f);
            }
          }
          else {
            for (puVar11 = *(uint **)(iVar8 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                ((ulonglong)*(ushort *)(puVar11 + -2) < (uVar15 & 0xffff)));
                puVar11 = (uint *)*puVar11) {
            }
          }
LAB_82a29518:
          puVar3 = (undefined4 *)puVar11[1];
          *(uint **)(puVar13 + 4) = puVar11;
          *(undefined4 **)(puVar13 + 6) = puVar3;
          *puVar3 = puVar13 + 4;
          puVar11[1] = (uint)(puVar13 + 4);
          iVar12 = (int)uVar15 + *(int *)(iVar8 + 0x30);
        }
        *(int *)(iVar8 + 0x30) = iVar12;
        iVar5 = iStack00000024;
      }
      else {
        iVar8 = NtFreeVirtualMemory(auStack_d8,auStack_e8,0x8000,*(undefined4 *)(iVar8 + 0x590));
        iVar5 = iStack00000024;
        if (-1 < iVar8) {
          *(int *)(iVar12 + -0x18) = *(int *)(iVar12 + -0x18) - ((int)(uVar9 << 4) - iVar17);
        }
      }
    }
LAB_82a29938:
    iStack00000024 = iVar5;
    uVar15 = uVar16;
    if ((uVar6 & 0xffffffff) != 0) goto LAB_82a2996c;
  }
  if ((uVar15 & 4) != 0) {
    RtlRaiseException(auStack_c0);
  }
LAB_82a2996c:
  fn_82A299C0();
  return iStack00000024;
}


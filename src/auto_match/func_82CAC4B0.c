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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CAC2E0();
extern unsigned int lbl_82106631;
extern unsigned int lbl_82106C76;


undefined8
fn_82CAC4B0(undefined8 param_1,int *param_2,ulonglong *param_3,uint *param_4,uint *param_5,
             uint *param_6,int *param_7)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  if ((*(uint *)(*param_2 + 4) & param_2[5]) == 0) {
    iVar14 = fn_82CAC2E0();
    *param_7 = iVar14;
    if (iVar14 != 0) {
      return 0;
    }
    *(uint *)(*param_2 + 4) = param_2[5] | *(uint *)(*param_2 + 4);
  }
  piVar9 = (int *)param_2[0xb];
  if (piVar9 == (int *)0x0) {
    uVar20 = 0;
    *(undefined4 *)((int)param_3 + 0x14) = 3;
  }
  else {
    iVar14 = *piVar9;
    sVar8 = *(short *)((int)((*param_3 >> (0x40 - (ulonglong)*(byte *)(piVar9 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar14);
    uVar20 = (ulonglong)sVar8;
    if (sVar8 < 0) {
      fn_82C4E470(param_3);
      do {
        uVar21 = *param_3;
        fn_82C4E470(param_3,1);
        sVar8 = *(short *)((int)(((uVar20 - ((longlong)uVar21 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar14);
        uVar20 = (ulonglong)sVar8;
      } while (sVar8 < 0);
    }
    else {
      iVar14 = *(int *)(param_3 + 1);
      iVar13 = (int)(uVar20 & 0xf);
      *param_3 = *param_3 << (uVar20 & 0xf);
      *(int *)(param_3 + 1) = iVar14 - iVar13;
      if (iVar14 < iVar13) {
        do {
          pbVar10 = *(byte **)((int)param_3 + 0xc);
          if (pbVar10 < (byte *)(*(int *)(param_3 + 2) - 4U)) {
            bVar7 = *pbVar10;
            bVar2 = pbVar10[1];
            bVar3 = pbVar10[2];
            bVar4 = pbVar10[3];
            bVar5 = pbVar10[4];
            bVar6 = pbVar10[5];
            iVar14 = *(int *)(param_3 + 1);
            *(byte **)((int)param_3 + 0xc) = pbVar10 + 6;
            *(int *)(param_3 + 1) = iVar14 + 0x30;
            *param_3 = ((((((ulonglong)bVar7 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                          * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                        (ulonglong)bVar6 << ((longlong)-iVar14 & 0x7fU)) + *param_3;
            goto LAB_82cac614;
          }
          iVar14 = fn_82C4E3B0(param_3);
        } while (iVar14 == 1);
        uVar20 = (ulonglong)((int)sVar8 >> 4);
      }
      else {
LAB_82cac614:
        uVar20 = (ulonglong)((int)sVar8 >> 4);
      }
    }
  }
  uVar20 = -(ulonglong)(uVar20 <= (uint)param_2[3]) & uVar20;
  uVar18 = (uint)uVar20;
  bVar7 = *(byte *)(param_2[2] + uVar18);
  uVar21 = (ulonglong)bVar7;
  if (bVar7 != 0) {
    uVar16 = (ulonglong)*(uint *)(param_3 + 1);
    lVar19 = 0;
    uVar17 = uVar16 + 0x10;
    if (bVar7 < 0x21) {
      if ((uVar17 & 0xffffffff) < uVar21) {
        do {
          if ((uVar17 & 0xffffffff) == 0) break;
          uVar21 = uVar21 - uVar17;
          *(int *)(param_3 + 1) = (int)(uVar16 - uVar17);
          lVar19 = (ulonglong)
                   (uint)((int)(*param_3 >> (0x40 - uVar17 & 0x7f)) << ((uint)uVar21 & 0x3f)) +
                   lVar19;
          *param_3 = *param_3 << (uVar17 & 0x7f);
          if ((longlong)(uVar16 - uVar17) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar16 = (ulonglong)*(uint *)(param_3 + 1);
          uVar17 = uVar16 + 0x10;
        } while ((uVar17 & 0xffffffff) < (uVar21 & 0xffffffff));
      }
      lVar15 = uVar16 - uVar21;
      *(int *)(param_3 + 1) = (int)lVar15;
      uVar16 = uVar21 & 0x7f;
      uVar21 = (*param_3 >> (0x40 - uVar21 & 0x7f) & 0xffffffff) + lVar19;
      *param_3 = *param_3 << uVar16;
      if (lVar15 < 0) {
        fn_82C4E5E8(param_3);
      }
    }
    else {
      uVar21 = 0;
    }
  }
  if ((int)uVar18 < 0x2e) {
    if ((int)uVar18 < 0x17) {
      *param_6 = 0;
    }
    else {
      uVar18 = uVar18 - 0x17;
      *param_6 = 1;
    }
    if ((int)uVar18 < 0x10) {
      *param_5 = 0;
      *param_4 = uVar18;
    }
    else if ((int)uVar18 < 0x14) {
      *param_5 = 1;
      *param_4 = uVar18 - 0x10;
    }
    else if ((int)uVar18 < 0x16) {
      *param_5 = 2;
      *param_4 = uVar18 - 0x14;
    }
    else {
      *param_5 = 3;
      *param_4 = 0;
    }
  }
  else {
    uVar11 = *(uint *)((int)((uVar20 & 0xffffffff) << 2) + param_2[10]);
    *param_5 = 0;
    uVar21 = uVar11 & uVar21;
    uVar11 = (uint)uVar21;
    if ((int)uVar18 < 0x3b) {
      *param_6 = 0;
      if ((int)uVar18 < 0x30) {
        *param_4 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
      else if ((int)uVar18 < 0x32) {
        *param_5 = 1;
        *param_4 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
      else if (uVar18 == 0x32) {
        *param_4 = uVar11 + 0x20;
      }
      else if (uVar18 == 0x33) {
        *param_5 = 1;
        *param_4 = uVar11 + 0x10;
      }
      else if ((int)uVar18 < 0x39) {
        *param_4 = 0;
        *param_5 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
      else {
        *param_4 = 1;
        *param_5 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
    }
    else if ((int)uVar18 < 0x49) {
      *param_6 = 1;
      if ((int)uVar18 < 0x41) {
        *param_4 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
      else if ((int)uVar18 < 0x44) {
        *param_5 = 1;
        *param_4 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
      else if ((int)uVar18 < 0x47) {
        *param_4 = 0;
        *param_5 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
      else {
        *param_4 = 1;
        *param_5 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
    }
    else if ((int)uVar18 < 0x4b) {
      uVar21 = uVar21 & 3;
      uVar12 = (int)uVar11 >> 2;
      *param_6 = uVar18 - 0x49;
      if (uVar21 < 4) {
        bVar1 = (int)uVar21 != 0;
        if (uVar21 == 1 && bVar1) {
          *param_4 = uVar12 + 3;
          *param_5 = 2;
        }
        else if (uVar21 == 2 && bVar1) {
          *param_4 = (uVar12 & 1) + 3;
          *param_5 = ((int)uVar11 >> 3) + 3;
        }
        else if (bVar1) {
          *param_4 = (uVar12 & 3) + 5;
          *param_5 = ((int)uVar11 >> 4) + 3;
        }
        else {
          *param_4 = 2;
          *param_5 = uVar12 + 2;
        }
      }
    }
    else {
      *param_6 = uVar11 & 1;
      *param_4 = (int)uVar11 >> 1 & 0x3f;
      *param_5 = (int)uVar11 >> 7;
    }
  }
  *param_5 = *param_5 + 1;
  uVar18 = *(uint *)(param_3 + 1);
  uVar20 = *param_3;
  *param_3 = uVar20 << 1;
  uVar11 = (uint)((longlong)uVar20 >> 0x3f);
  *(int *)(param_3 + 1) = (int)((ulonglong)uVar18 - 1);
  if ((longlong)((ulonglong)uVar18 - 1) < 0) {
    fn_82C4E5E8(param_3);
  }
  *param_5 = (*param_5 ^ uVar11) - uVar11;
  return 0;
}


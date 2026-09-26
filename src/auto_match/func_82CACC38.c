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
extern unsigned int lbl_82106677;


longlong fn_82CACC38(undefined8 param_1,int *param_2,ulonglong *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  if ((*(uint *)(*param_2 + 4) & param_2[5]) == 0) {
    iVar11 = fn_82CAC2E0();
    *param_4 = iVar11;
    if (iVar11 != 0) {
      return 0;
    }
    *(uint *)(*param_2 + 4) = param_2[5] | *(uint *)(*param_2 + 4);
  }
  piVar8 = (int *)param_2[0xb];
  if (piVar8 == (int *)0x0) {
    uVar16 = 0;
    *(undefined4 *)((int)param_3 + 0x14) = 3;
  }
  else {
    iVar11 = *piVar8;
    sVar7 = *(short *)((int)((*param_3 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar11);
    uVar16 = (ulonglong)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(param_3);
      do {
        uVar17 = *param_3;
        fn_82C4E470(param_3,1);
        sVar7 = *(short *)((int)(((uVar16 - ((longlong)uVar17 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar11);
        uVar16 = (ulonglong)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar11 = *(int *)(param_3 + 1);
      iVar10 = (int)(uVar16 & 0xf);
      *param_3 = *param_3 << (uVar16 & 0xf);
      *(int *)(param_3 + 1) = iVar11 - iVar10;
      if (iVar11 < iVar10) {
        do {
          pbVar9 = *(byte **)((int)param_3 + 0xc);
          if (pbVar9 < (byte *)(*(int *)(param_3 + 2) - 4U)) {
            bVar6 = *pbVar9;
            bVar1 = pbVar9[1];
            bVar2 = pbVar9[2];
            bVar3 = pbVar9[3];
            bVar4 = pbVar9[4];
            bVar5 = pbVar9[5];
            iVar11 = *(int *)(param_3 + 1);
            *(byte **)((int)param_3 + 0xc) = pbVar9 + 6;
            *(int *)(param_3 + 1) = iVar11 + 0x30;
            *param_3 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 + (ulonglong)bVar2)
                          * 0x100 + (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                        (ulonglong)bVar5 << ((longlong)-iVar11 & 0x7fU)) + *param_3;
            goto LAB_82cacd98;
          }
          iVar11 = fn_82C4E3B0(param_3);
        } while (iVar11 == 1);
        uVar16 = (ulonglong)((int)sVar7 >> 4);
      }
      else {
LAB_82cacd98:
        uVar16 = (ulonglong)((int)sVar7 >> 4);
      }
    }
  }
  uVar16 = -(ulonglong)(uVar16 <= (uint)param_2[3]) & uVar16;
  iVar11 = (int)uVar16;
  bVar6 = *(byte *)(param_2[2] + iVar11);
  uVar17 = (ulonglong)bVar6;
  if (bVar6 != 0) {
    uVar13 = (ulonglong)*(uint *)(param_3 + 1);
    lVar15 = 0;
    uVar14 = uVar13 + 0x10;
    if (bVar6 < 0x21) {
      if ((uVar14 & 0xffffffff) < uVar17) {
        do {
          if ((uVar14 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar14;
          *(int *)(param_3 + 1) = (int)(uVar13 - uVar14);
          lVar15 = (ulonglong)
                   (uint)((int)(*param_3 >> (0x40 - uVar14 & 0x7f)) << ((uint)uVar17 & 0x3f)) +
                   lVar15;
          *param_3 = *param_3 << (uVar14 & 0x7f);
          if ((longlong)(uVar13 - uVar14) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar13 = (ulonglong)*(uint *)(param_3 + 1);
          uVar14 = uVar13 + 0x10;
        } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      lVar12 = uVar13 - uVar17;
      *(int *)(param_3 + 1) = (int)lVar12;
      uVar13 = uVar17 & 0x7f;
      uVar17 = (*param_3 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar15;
      *param_3 = *param_3 << uVar13;
      if (lVar12 < 0) {
        fn_82C4E5E8(param_3);
      }
    }
    else {
      uVar17 = 0;
    }
  }
  if (0x10 < iVar11) {
    uVar16 = uVar16 - 0x11;
  }
  if (4 < (int)uVar16) {
    uVar16 = (ulonglong)(byte)(&lbl_82106677)[(int)uVar16] + (longlong)((int)uVar17 >> 1);
  }
  return ((uVar16 ^ -(uVar17 & 1)) + (uVar17 & 1) & 0x7fffffff) * 2 + (ulonglong)(0x10 < iVar11);
}


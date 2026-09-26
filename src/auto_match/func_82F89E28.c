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
extern int fn_827D4370();
extern int fn_827D4EF8();
extern int fn_82F691F0();
extern int fn_82F89D68();
extern int fn_82F8D350();
extern int fn_82F8D4D8();
extern unsigned int lbl_82018A54;
extern unsigned int lbl_82018A60;
extern unsigned int lbl_8216ABD0;


ulonglong fn_82F89E28(int *param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  undefined1 uVar11;
  uint uVar10;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if ((((param_1 == (int *)0x0) || (puVar3 = (undefined4 *)param_1[7], puVar3 == (undefined4 *)0x0))
      || (iVar8 = (int)param_2, 4 < iVar8)) || (iVar8 < 0)) {
    return 0xfffffffffffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar3[1] == 0x29a && (iVar8 != 4)))) {
    param_1[6] = (int)lbl_82018A54;
    return 0xfffffffffffffffe;
  }
  if (param_1[4] == 0) goto LAB_82f89ea4;
  iVar7 = puVar3[10];
  *puVar3 = param_1;
  puVar3[10] = iVar8;
  if (puVar3[1] == 0x2a) {
    if (puVar3[6] == 2) {
      iVar6 = fn_827D4EF8(0,0,0);
      param_1[0xc] = iVar6;
      *(undefined1 *)(puVar3[2] + puVar3[5]) = 0x1f;
      iVar6 = puVar3[5];
      puVar3[5] = iVar6 + 1;
      *(undefined1 *)(puVar3[2] + iVar6 + 1) = 0x8b;
      iVar6 = puVar3[5];
      puVar3[5] = iVar6 + 1;
      *(undefined1 *)(puVar3[2] + iVar6 + 1) = 8;
      piVar4 = (int *)puVar3[7];
      iVar6 = puVar3[5] + 1;
      puVar3[5] = iVar6;
      if (piVar4 == (int *)0x0) {
        *(undefined1 *)(puVar3[2] + iVar6) = 0;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = 0;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = 0;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = 0;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = 0;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        if (puVar3[0x21] == 9) {
          uVar11 = 2;
        }
        else if ((1 < (int)puVar3[0x22]) || (uVar11 = 0, (int)puVar3[0x21] < 2)) {
          uVar11 = 4;
        }
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = uVar11;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = 0xb;
        puVar3[1] = 0x71;
        puVar3[5] = puVar3[5] + 1;
      }
      else {
        *(byte *)(puVar3[2] + iVar6) =
             (-(piVar4[9] != 0) & 0x10U) + (-(piVar4[0xb] != 0) & 2U) + (-(piVar4[7] != 0) & 8U) +
             (-(piVar4[4] != 0) & 4U) + ('\x01' - (*piVar4 == 0));
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(char *)(puVar3[2] + iVar6 + 1) = (char)*(undefined4 *)(puVar3[7] + 4);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = *(undefined1 *)(puVar3[7] + 6);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = *(undefined1 *)(puVar3[7] + 5);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = *(undefined1 *)(puVar3[7] + 4);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        if (puVar3[0x21] == 9) {
          uVar11 = 2;
        }
        else if ((1 < (int)puVar3[0x22]) || (uVar11 = 0, (int)puVar3[0x21] < 2)) {
          uVar11 = 4;
        }
        *(undefined1 *)(puVar3[2] + iVar6 + 1) = uVar11;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(char *)(puVar3[2] + iVar6 + 1) = (char)*(undefined4 *)(puVar3[7] + 0xc);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        if (*(int *)(puVar3[7] + 0x10) != 0) {
          *(char *)(puVar3[2] + iVar6 + 1) = (char)*(undefined4 *)(puVar3[7] + 0x14);
          iVar6 = puVar3[5];
          puVar3[5] = iVar6 + 1;
          *(undefined1 *)(puVar3[2] + iVar6 + 1) = *(undefined1 *)(puVar3[7] + 0x16);
          puVar3[5] = puVar3[5] + 1;
        }
        if (*(int *)(puVar3[7] + 0x2c) != 0) {
          iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2]);
          param_1[0xc] = iVar6;
        }
        puVar3[8] = 0;
        puVar3[1] = 0x45;
      }
    }
    else {
      if (((int)puVar3[0x22] < 2) && (iVar6 = puVar3[0x21], 1 < iVar6)) {
        if (iVar6 < 6) {
          lVar12 = 1;
        }
        else {
          lVar12 = ((ulonglong)(iVar6 == 6) ^ 1) + 2;
        }
      }
      else {
        lVar12 = 0;
      }
      uVar13 = lVar12 << 6 | ((ulonglong)(uint)puVar3[0xc] - 8 & 0xfffff) * 0x1000 + 0x800;
      if (puVar3[0x1b] != 0) {
        uVar13 = uVar13 | 0x20;
      }
      puVar3[1] = 0x71;
      lVar12 = (uVar13 / 0x1f) * 0x1f + 0x1f;
      *(char *)(puVar3[2] + puVar3[5]) = (char)((ulonglong)lVar12 >> 8);
      iVar6 = puVar3[5];
      puVar3[5] = iVar6 + 1;
      *(char *)(puVar3[2] + iVar6 + 1) = (char)lVar12;
      iVar6 = puVar3[5];
      puVar3[5] = iVar6 + 1;
      if (puVar3[0x1b] != 0) {
        uVar2 = *(undefined2 *)(param_1 + 0xc);
        *(char *)(puVar3[2] + iVar6 + 1) = (char)((ushort)uVar2 >> 8);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(char *)(puVar3[2] + iVar6 + 1) = (char)uVar2;
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        uVar2 = *(undefined2 *)((int)param_1 + 0x32);
        *(char *)(puVar3[2] + iVar6 + 1) = (char)((ushort)uVar2 >> 8);
        iVar6 = puVar3[5];
        puVar3[5] = iVar6 + 1;
        *(char *)(puVar3[2] + iVar6 + 1) = (char)uVar2;
        puVar3[5] = puVar3[5] + 1;
      }
      iVar6 = fn_827D4370(0,0,0);
      param_1[0xc] = iVar6;
    }
  }
  if (puVar3[1] == 0x45) {
    iVar6 = puVar3[7];
    if (*(int *)(iVar6 + 0x10) != 0) {
      uVar10 = puVar3[5];
      while (uVar14 = uVar10, (uint)puVar3[8] < (uint)*(ushort *)(iVar6 + 0x16)) {
        uVar14 = puVar3[5];
        if (uVar14 == puVar3[3]) {
          if ((*(int *)(puVar3[7] + 0x2c) != 0) && (uVar10 < uVar14)) {
            iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2] + uVar10,uVar14 - uVar10);
            param_1[0xc] = iVar6;
          }
          fn_82F89D68(param_1);
          uVar14 = puVar3[5];
          uVar10 = uVar14;
          if (uVar14 == puVar3[3]) break;
        }
        *(undefined1 *)(puVar3[2] + uVar14) =
             *(undefined1 *)(*(int *)(puVar3[7] + 0x10) + puVar3[8]);
        puVar3[8] = puVar3[8] + 1;
        puVar3[5] = puVar3[5] + 1;
        iVar6 = puVar3[7];
      }
      if ((*(int *)(puVar3[7] + 0x2c) != 0) && (uVar14 < (uint)puVar3[5])) {
        iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2] + uVar14,puVar3[5] - uVar14);
        param_1[0xc] = iVar6;
      }
      if (puVar3[8] != *(int *)(puVar3[7] + 0x14)) goto LAB_82f8a430;
      puVar3[8] = 0;
    }
    puVar3[1] = 0x49;
  }
LAB_82f8a430:
  if (puVar3[1] == 0x49) {
    if (*(int *)(puVar3[7] + 0x1c) != 0) {
      uVar10 = puVar3[5];
      do {
        uVar14 = puVar3[5];
        if (uVar14 == puVar3[3]) {
          if ((*(int *)(puVar3[7] + 0x2c) != 0) && (uVar10 < uVar14)) {
            iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2] + uVar10,uVar14 - uVar10);
            param_1[0xc] = iVar6;
          }
          fn_82F89D68(param_1);
          uVar14 = puVar3[5];
          uVar10 = uVar14;
          if (uVar14 == puVar3[3]) {
            bVar5 = true;
            goto LAB_82f8a4e8;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar3[7] + 0x1c) + puVar3[8]);
        puVar3[8] = puVar3[8] + 1;
        *(char *)(puVar3[2] + uVar14) = cVar1;
        puVar3[5] = puVar3[5] + 1;
      } while (cVar1 != '\0');
      bVar5 = false;
      uVar14 = uVar10;
LAB_82f8a4e8:
      if ((*(int *)(puVar3[7] + 0x2c) != 0) && (uVar14 < (uint)puVar3[5])) {
        iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2] + uVar14,puVar3[5] - uVar14);
        param_1[0xc] = iVar6;
      }
      if (bVar5) goto LAB_82f8a530;
      puVar3[8] = 0;
    }
    puVar3[1] = 0x5b;
  }
LAB_82f8a530:
  if (puVar3[1] == 0x5b) {
    if (*(int *)(puVar3[7] + 0x24) != 0) {
      uVar10 = puVar3[5];
      do {
        uVar14 = puVar3[5];
        if (uVar14 == puVar3[3]) {
          if ((*(int *)(puVar3[7] + 0x2c) != 0) && (uVar10 < uVar14)) {
            iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2] + uVar10,uVar14 - uVar10);
            param_1[0xc] = iVar6;
          }
          fn_82F89D68(param_1);
          uVar14 = puVar3[5];
          uVar10 = uVar14;
          if (uVar14 == puVar3[3]) {
            bVar5 = true;
            goto LAB_82f8a5e8;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar3[7] + 0x24) + puVar3[8]);
        puVar3[8] = puVar3[8] + 1;
        *(char *)(puVar3[2] + uVar14) = cVar1;
        puVar3[5] = puVar3[5] + 1;
      } while (cVar1 != '\0');
      bVar5 = false;
      uVar14 = uVar10;
LAB_82f8a5e8:
      if ((*(int *)(puVar3[7] + 0x2c) != 0) && (uVar14 < (uint)puVar3[5])) {
        iVar6 = fn_827D4EF8(param_1[0xc],puVar3[2] + uVar14,puVar3[5] - uVar14);
        param_1[0xc] = iVar6;
      }
      if (bVar5) goto LAB_82f8a62c;
    }
    puVar3[1] = 0x67;
  }
LAB_82f8a62c:
  if (puVar3[1] == 0x67) {
    if (*(int *)(puVar3[7] + 0x2c) != 0) {
      if ((uint)puVar3[3] < puVar3[5] + 2) {
        fn_82F89D68(param_1);
      }
      if ((uint)puVar3[3] < puVar3[5] + 2) goto LAB_82f8a6c0;
      *(char *)(puVar3[2] + puVar3[5]) = (char)param_1[0xc];
      iVar6 = puVar3[5];
      puVar3[5] = iVar6 + 1;
      *(undefined1 *)(puVar3[2] + iVar6 + 1) = *(undefined1 *)((int)param_1 + 0x32);
      puVar3[5] = puVar3[5] + 1;
      iVar6 = fn_827D4EF8(0,0,0);
      param_1[0xc] = iVar6;
    }
    puVar3[1] = 0x71;
  }
LAB_82f8a6c0:
  if (puVar3[5] == 0) {
    if (((param_1[1] == 0) && (iVar8 <= iVar7)) && (iVar8 != 4)) goto LAB_82f89ea4;
  }
  else {
    fn_82F89D68(param_1);
    if (param_1[4] == 0) goto LAB_82f8a6e0;
  }
  if ((puVar3[1] == 0x29a) && (param_1[1] != 0)) {
LAB_82f89ea4:
    param_1[6] = (int)lbl_82018A60;
    return 0xfffffffffffffffb;
  }
  if (((param_1[1] != 0) || (puVar3[0x1d] != 0)) || ((iVar8 != 0 && (puVar3[1] != 0x29a)))) {
    iVar7 = (**(code **)(&lbl_8216ABD0 + puVar3[0x21] * 0xc))(puVar3,param_2);
    if ((iVar7 == 2) || (iVar7 == 3)) {
      puVar3[1] = 0x29a;
    }
    if ((iVar7 == 0) || (iVar7 == 2)) {
      if (param_1[4] != 0) {
        return 0;
      }
      puVar3[10] = 0xffffffff;
      return 0;
    }
    if (iVar7 == 1) {
      if (iVar8 == 1) {
        fn_82F8D4D8();
      }
      else {
        fn_82F8D350(puVar3,0,0,0);
        if (iVar8 == 3) {
          *(undefined2 *)(puVar3[0x13] * 2 + puVar3[0x11] + -2) = 0;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(puVar3[0x11],0,((ulonglong)(uint)puVar3[0x13] - 1 & 0x7fffffff) << 1);
        }
      }
      fn_82F89D68(param_1);
      if (param_1[4] == 0) {
LAB_82f8a6e0:
        puVar3[10] = 0xffffffff;
        return 0;
      }
    }
  }
  if (iVar8 != 4) {
    return 0;
  }
  if (0 < (int)puVar3[6]) {
    if (puVar3[6] == 2) {
      *(char *)(puVar3[2] + puVar3[5]) = (char)param_1[0xc];
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(undefined1 *)(puVar3[2] + iVar8 + 1) = *(undefined1 *)((int)param_1 + 0x32);
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(undefined1 *)(puVar3[2] + iVar8 + 1) = *(undefined1 *)((int)param_1 + 0x31);
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(undefined1 *)(puVar3[2] + iVar8 + 1) = *(undefined1 *)(param_1 + 0xc);
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(char *)(puVar3[2] + iVar8 + 1) = (char)param_1[2];
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(undefined1 *)(puVar3[2] + iVar8 + 1) = *(undefined1 *)((int)param_1 + 10);
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(undefined1 *)(puVar3[2] + iVar8 + 1) = *(undefined1 *)((int)param_1 + 9);
      iVar8 = puVar3[5] + 1;
      puVar3[5] = iVar8;
      uVar9 = (ushort)*(byte *)(param_1 + 2);
    }
    else {
      uVar2 = *(undefined2 *)(param_1 + 0xc);
      *(char *)(puVar3[2] + puVar3[5]) = (char)((ushort)uVar2 >> 8);
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      *(char *)(puVar3[2] + iVar8 + 1) = (char)uVar2;
      iVar8 = puVar3[5];
      puVar3[5] = iVar8 + 1;
      uVar9 = *(ushort *)((int)param_1 + 0x32);
      *(char *)(puVar3[2] + iVar8 + 1) = (char)(uVar9 >> 8);
      iVar8 = puVar3[5] + 1;
      puVar3[5] = iVar8;
    }
    *(char *)(puVar3[2] + iVar8) = (char)uVar9;
    puVar3[5] = puVar3[5] + 1;
    fn_82F89D68(param_1);
    if (0 < (int)puVar3[6]) {
      puVar3[6] = -puVar3[6];
    }
    return (ulonglong)(puVar3[5] == 0);
  }
  return 1;
}


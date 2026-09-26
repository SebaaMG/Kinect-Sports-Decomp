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
extern int fn_82F8C290();
extern int fn_82F8C908();
extern int fn_82F8CBB8();
extern int fn_82F8D088();
extern int fn_82F8D350();
extern unsigned int lbl_8216ACBC;
extern unsigned int lbl_8216AD98;
extern unsigned int lbl_8216B218;


void fn_82F8D808(int *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined2 *puVar11;
  
  lVar5 = 0;
  if (param_1[0x21] < 1) {
    uVar4 = param_3 + 5;
LAB_82f8d944:
    uVar9 = uVar4;
  }
  else {
    if (((param_3 & 0xffffffff) != 0) && (*(int *)(*param_1 + 0x2c) == 2)) {
      iVar1 = 0;
      piVar6 = param_1 + 0x25;
      do {
        if (*(short *)piVar6 != 0) break;
        iVar1 = iVar1 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar1 < 9);
      if (iVar1 == 9) {
        iVar1 = 0xe;
        piVar6 = param_1 + 0x33;
        do {
          if (*(short *)piVar6 != 0) break;
          iVar1 = iVar1 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar1 < 0x20);
      }
      *(uint *)(*param_1 + 0x2c) = (uint)LZCOUNT(iVar1 + -0x20) >> 5;
    }
    lVar5 = fn_82F8D088(param_1,param_1 + 0x2c6);
    iVar1 = fn_82F8D088(lVar5,lVar5 + 0xb24);
    iVar1 = fn_82F8C290(iVar1,iVar1 + 0x94,*(undefined4 *)(iVar1 + 0xb1c));
    lVar5 = fn_82F8C290(iVar1,iVar1 + 0x988,*(undefined4 *)(iVar1 + 0xb28));
    param_1 = (int *)fn_82F8D088(lVar5,lVar5 + 0xb30);
    lVar5 = 0x12;
    do {
      if (*(short *)((int)param_1 + (uint)(byte)(&lbl_8216ACBC)[(int)lVar5] * 4 + 0xa7e) != 0)
      break;
      lVar5 = lVar5 + -1;
    } while (2 < (int)lVar5);
    lVar8 = lVar5 * 3 + (ulonglong)(uint)param_1[0x5aa];
    uVar4 = ((ulonglong)(uint)param_1[0x5ab] + 10 & 0xffffffff) >> 3;
    param_1[0x5aa] = (int)lVar8 + 0x11;
    uVar9 = (lVar8 + 0x1bU & 0xffffffff) >> 3;
    if (uVar4 <= uVar9) goto LAB_82f8d944;
  }
  iVar1 = (int)param_4;
  if (((uVar9 & 0xffffffff) < (param_3 + 4 & 0xffffffff)) || ((param_2 & 0xffffffff) == 0)) {
    if ((param_1[0x22] == 4) || ((uVar4 & 0xffffffff) == (uVar9 & 0xffffffff))) {
      uVar7 = param_1[0x5af];
      uVar10 = iVar1 + 2;
      if ((int)uVar7 < 0xe) {
        param_1[0x5af] = uVar7 + 3;
        *(ushort *)(param_1 + 0x5ae) =
             (ushort)(uVar10 << (uVar7 & 0x3f)) | *(ushort *)(param_1 + 0x5ae);
      }
      else {
        uVar7 = uVar10 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x5ae);
        *(short *)(param_1 + 0x5ae) = (short)uVar7;
        *(char *)(param_1[2] + param_1[5]) = (char)uVar7;
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + param_1[2]) = *(undefined1 *)(param_1 + 0x5ae);
        iVar2 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar2 + -0xd;
        *(short *)(param_1 + 0x5ae) = (short)((uVar10 & 0xffff) >> (0x10U - iVar2 & 0x3f));
      }
      piVar3 = (int *)&lbl_8216B218;
      piVar6 = (int *)&lbl_8216AD98;
    }
    else {
      uVar7 = param_1[0x5af];
      uVar10 = iVar1 + 4;
      if ((int)uVar7 < 0xe) {
        param_1[0x5af] = uVar7 + 3;
        *(ushort *)(param_1 + 0x5ae) =
             (ushort)(uVar10 << (uVar7 & 0x3f)) | *(ushort *)(param_1 + 0x5ae);
      }
      else {
        uVar7 = uVar10 << (uVar7 & 0x3f) | (uint)*(ushort *)(param_1 + 0x5ae);
        *(short *)(param_1 + 0x5ae) = (short)uVar7;
        *(char *)(param_1[2] + param_1[5]) = (char)uVar7;
        iVar2 = param_1[5];
        param_1[5] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + param_1[2]) = *(undefined1 *)(param_1 + 0x5ae);
        iVar2 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar2 + -0xd;
        *(short *)(param_1 + 0x5ae) = (short)((uVar10 & 0xffff) >> (0x10U - iVar2 & 0x3f));
      }
      param_1 = (int *)fn_82F8C908(param_1,(ulonglong)(uint)param_1[0x2c7] + 1,
                                     (ulonglong)(uint)param_1[0x2ca] + 1,lVar5 + 1);
      piVar3 = param_1 + 0x262;
      piVar6 = param_1 + 0x25;
    }
    iVar2 = fn_82F8CBB8(param_1,piVar6,piVar3);
  }
  else {
    iVar2 = fn_82F8D350(param_1,param_2,param_3,param_4);
  }
  puVar11 = (undefined2 *)(iVar2 + 0x90);
  lVar5 = 0x11e;
  do {
    puVar11 = puVar11 + 2;
    *puVar11 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar11 = (undefined2 *)(iVar2 + 0x984);
  lVar5 = 0x1e;
  do {
    puVar11 = puVar11 + 2;
    *puVar11 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar11 = (undefined2 *)(iVar2 + 0xa78);
  lVar5 = 0x13;
  do {
    puVar11 = puVar11 + 2;
    *puVar11 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(iVar2 + 0x16ac) = 0;
  *(undefined4 *)(iVar2 + 0x16a8) = 0;
  *(undefined2 *)(iVar2 + 0x494) = 1;
  *(undefined4 *)(iVar2 + 0x16b0) = 0;
  *(undefined4 *)(iVar2 + 0x16a0) = 0;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x16bc) < 9) {
    if (*(int *)(iVar2 + 0x16bc) < 1) goto LAB_82f8db84;
    *(char *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x14)) = (char)*(undefined2 *)(iVar2 + 0x16b8);
  }
  else {
    *(char *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x14)) = (char)*(undefined2 *)(iVar2 + 0x16b8);
    iVar1 = *(int *)(iVar2 + 0x14) + 1;
    *(int *)(iVar2 + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(iVar2 + 8)) = *(undefined1 *)(iVar2 + 0x16b8);
  }
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
LAB_82f8db84:
  *(undefined2 *)(iVar2 + 0x16b8) = 0;
  *(undefined4 *)(iVar2 + 0x16bc) = 0;
  return;
}


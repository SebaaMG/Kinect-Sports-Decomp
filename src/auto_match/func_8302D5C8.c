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
extern int fn_82F65350();
extern int fn_82FB9358();
extern int fn_82FB95B0();
extern int fn_8300CBD0();
extern int fn_8300CC40();
extern int fn_8300CC80();
extern int fn_8300CCD0();
extern int fn_8300CD08();
extern int fn_8302C7A8();
extern int fn_8302D480();


short fn_8302D5C8(int param_1,int param_2,undefined1 *param_3,short *param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined2 uVar10;
  undefined8 uVar3;
  uint uVar5;
  uint uVar6;
  char cVar11;
  uint uVar7;
  ulonglong uVar4;
  short *psVar8;
  int iVar9;
  short sVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  bool bVar15;
  
  *param_3 = 1;
  piVar2 = *(int **)(param_1 + 0x88);
  iVar9 = -1;
  sVar12 = 0;
  if (*(short *)(param_2 + 0x16) == 0) {
    bVar15 = false;
    if (param_4 == (short *)0x0) {
      bVar15 = true;
    }
    else if ((*(byte *)(param_4 + 1) & 0x80) != 0) {
      if ((*(byte *)(param_4 + 1) & 0x40) == 0) {
        bVar15 = (short)(*param_4 + -1) != 0;
        *param_4 = *param_4 + -1;
      }
      else {
        bVar15 = true;
      }
    }
    if (!bVar15) {
      *param_3 = 0;
      return 0;
    }
    uVar10 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
    *(undefined2 *)(param_2 + 0x16) = uVar10;
    uVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
    fn_8300CC80(param_2,uVar3);
    if ((*(byte *)(param_1 + 0x11e) & 0xc) == 4) {
      puVar14 = *(undefined2 **)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0xc);
      if (puVar14 != *(undefined2 **)(param_2 + 0x1c)) {
        do {
          uVar5 = (**(code **)(*piVar2 + 0x28))(piVar2,*puVar14);
          puVar14 = puVar14 + 1;
          *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - (uVar5 & 0xff);
        } while (puVar14 != *(undefined2 **)(param_2 + 0x1c));
      }
    }
    *(short *)(param_2 + 0x14) =
         *(short *)(param_2 + 0x14) -
         (short)(*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18) >> 1);
  }
  if ((*(byte *)(param_1 + 0x11f) & 0x10) == 0) {
    uVar4 = fn_82F65350();
    uVar1 = *(ushort *)(param_2 + 0x14);
    trapWord(6,(ulonglong)uVar1,0);
    trapWord(5,(ulonglong)uVar1 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),
             0xffff);
    do {
      cVar11 = fn_8302C7A8(param_1,param_2,sVar12);
      if (cVar11 != '\0') {
        iVar9 = iVar9 + 1;
      }
      sVar12 = sVar12 + 1;
    } while (iVar9 < (int)((int)uVar4 - ((int)uVar4 / (int)(uint)uVar1) * (uint)uVar1 & 0xffff));
  }
  else {
    uVar6 = fn_82F65350();
    uVar5 = *(uint *)(param_2 + 0x10);
    trapWord(6,(ulonglong)uVar5,0);
    do {
      cVar11 = fn_8302C7A8(param_1,param_2,sVar12);
      if (cVar11 != '\0') {
        uVar7 = (**(code **)(*piVar2 + 0x28))(piVar2,sVar12);
        iVar9 = (uVar7 & 0xff) + iVar9;
      }
      sVar12 = sVar12 + 1;
    } while (iVar9 < (int)(uVar6 - (uVar6 / uVar5) * uVar5 & 0xffff));
  }
  sVar12 = sVar12 + -1;
  if ((*(byte *)(param_1 + 0x11e) & 0xc) == 0) {
    cVar11 = fn_8300CC40(param_2,sVar12);
    if (cVar11 == '\0') {
      fn_8300CBD0(param_2,sVar12);
      *(short *)(param_2 + 0x16) = *(short *)(param_2 + 0x16) + -1;
    }
    fn_8302D480(param_1,param_2,sVar12);
  }
  else {
    uVar5 = (uint)*(ushort *)(param_1 + 0x11c);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    uVar6 = (**(code **)(*piVar2 + 0x28))(piVar2,sVar12);
    *(short *)(param_2 + 0x16) = *(short *)(param_2 + 0x16) + -1;
    *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + -1;
    *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - (uVar6 & 0xff);
    fn_8300CBD0(param_2,sVar12);
    puVar13 = (undefined4 *)(param_2 + 0x18);
    psVar8 = (short *)fn_82FB95B0(puVar13);
    if (psVar8 == (short *)0x0) {
      *(undefined2 *)(param_2 + 0x16) = 0;
    }
    else {
      *psVar8 = sVar12;
      fn_8300CCD0(param_2,sVar12);
      iVar9 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
      uVar6 = iVar9 + 0xffffU & 0xffff;
      if (uVar5 < uVar6) {
        uVar6 = uVar5;
      }
      if (uVar6 < (uint)(*(int *)(param_2 + 0x1c) - (int)*puVar13 >> 1)) {
        uVar10 = *(undefined2 *)*puVar13;
        fn_82FB9358(puVar13,0);
        fn_8300CD08(param_2,uVar10);
        cVar11 = fn_8300CC40(param_2,uVar10);
        if (cVar11 == '\0') {
          uVar5 = (**(code **)(*piVar2 + 0x28))(piVar2,uVar10);
          *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + 1;
          *(uint *)(param_2 + 0x10) = (uVar5 & 0xff) + *(int *)(param_2 + 0x10);
        }
      }
    }
  }
  return sVar12;
}


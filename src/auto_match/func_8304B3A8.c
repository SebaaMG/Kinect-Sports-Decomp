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
extern int fn_82FEC7F0();
extern int fn_8304D650();
extern int fn_8304E748();


void fn_8304B3A8(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar9 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar2 = *(uint *)(iVar1 + 0x24) >> 0xe;
  for (uVar5 = uVar2; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
    uVar9 = uVar9 + 1;
  }
  uVar15 = (uVar9 & 0xffffffff) << 1;
  iVar3 = (int)uVar15;
  uVar4 = fn_82FEC7F0((uVar9 & 0x1fffff) << 0xb);
  *(int *)(param_1 + 0x40) = (int)uVar4;
  if ((uVar4 & 0xffffffff) == 0) {
    param_2[0xd0] = 2;
  }
  else {
    uVar7 = 0x2d;
    uVar6 = 0x2d;
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar11 = (ulonglong)(*(ushort *)(param_2 + 3) >> 6);
    uVar8 = 0;
    if (uVar11 != 0) {
      while (*(short *)(param_1 + 0x1c) != 1) {
        trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
        uVar10 = ((ulonglong)*(uint *)(param_1 + 0x30) - (ulonglong)*(uint *)(param_1 + 0x28) &
                 0xffffffff) / (ulonglong)*(ushort *)(param_1 + 0x3c);
        if ((uVar11 & 0xffffffff) < uVar10) {
          uVar6 = uVar7;
          if ((uVar9 & 0xffffffff) != 0) {
            lVar12 = 0;
            uVar10 = uVar4;
            uVar13 = uVar9;
            do {
              fn_8304E748(lVar12 + (ulonglong)*(uint *)(param_1 + 0x28),uVar10,uVar11,
                            *(undefined2 *)(param_1 + 0x3c),uVar9);
              uVar13 = uVar13 - 1;
              uVar10 = uVar10 + 2;
              lVar12 = lVar12 + 0x24;
            } while (uVar13 != 0);
          }
          goto LAB_8304b5a0;
        }
        if ((uVar9 & 0xffffffff) != 0) {
          lVar12 = 0;
          uVar13 = uVar4;
          uVar14 = uVar9;
          do {
            fn_8304E748(lVar12 + (ulonglong)*(uint *)(param_1 + 0x28),uVar13,uVar10,
                          *(undefined2 *)(param_1 + 0x3c),uVar9);
            uVar14 = uVar14 - 1;
            uVar13 = uVar13 + 2;
            lVar12 = lVar12 + 0x24;
          } while (uVar14 != 0);
        }
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
        uVar11 = uVar11 - uVar10;
        uVar4 = ((longlong)(int)uVar10 * (longlong)iVar3 & 0x3ffffffU) * 0x40 + uVar4;
        if (*(short *)(param_1 + 0x1c) != 0) {
          *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
        }
        uVar8 = 1;
        if ((uVar11 & 0xffffffff) == 0) goto LAB_8304b5c0;
      }
      trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
      uVar10 = (((ulonglong)*(uint *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x34)) -
                (ulonglong)*(uint *)(param_1 + 0x28) & 0xffffffff) /
               (ulonglong)*(ushort *)(param_1 + 0x3c);
      if (uVar10 <= (uVar11 & 0xffffffff)) {
        uVar7 = 0x11;
        uVar11 = uVar10;
      }
      uVar6 = uVar7;
      if ((uVar9 & 0xffffffff) != 0) {
        lVar12 = 0;
        uVar10 = uVar4;
        uVar13 = uVar9;
        do {
          fn_8304E748(lVar12 + (ulonglong)*(uint *)(param_1 + 0x28),uVar10,uVar11,
                        *(undefined2 *)(param_1 + 0x3c),uVar9);
          uVar13 = uVar13 - 1;
          uVar10 = uVar10 + 2;
          lVar12 = lVar12 + 0x24;
        } while (uVar13 != 0);
      }
LAB_8304b5a0:
      *(uint *)(param_1 + 0x28) =
           (uint)*(ushort *)(param_1 + 0x3c) * (int)uVar11 + *(int *)(param_1 + 0x28);
      uVar4 = ((longlong)(int)uVar11 * (longlong)iVar3 & 0x3ffffffU) * 0x40 + uVar4;
    }
LAB_8304b5c0:
    uVar7 = *(uint *)(param_1 + 0x40);
    uVar15 = uVar15 & 0xfffe;
    param_2[1] = uVar2;
    uVar4 = uVar4 - uVar7;
    *(undefined2 *)(param_2 + 3) = 0x400;
    *param_2 = uVar7;
    *(short *)((int)param_2 + 0xe) = (short)(((uint)uVar4 & 0xffff) / (uint)uVar15);
    uVar9 = uVar15 & ~((uVar4 & 0xffff) * 2 - 1);
    trapWord(6,uVar15,0);
    uVar15 = (((ulonglong)uVar5 - (ulonglong)*(uint *)(param_1 + 0x38) & 0x3ffffff) << 6) /
             (ulonglong)*(ushort *)(param_1 + 0x3c);
    trapWord(5,uVar9,0xffff);
    trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
    fn_8304D650(param_1,param_2,uVar15,uVar8,(ulonglong)*(uint *)(param_1 + 0x38),uVar9);
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x20);
      param_2[6] = (uint)uVar15;
      param_2[9] = uVar2;
      trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
      param_2[8] = (uint)((ulonglong)*(uint *)(param_1 + 0x34) /
                          (ulonglong)*(ushort *)(param_1 + 0x3c) << 6);
    }
    param_2[0xd0] = uVar6;
  }
  return;
}


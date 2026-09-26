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
extern int fn_82E86DF0();
extern int fn_82F025F0();
extern int fn_82F15B60();
extern int fn_82F15C30();
extern int fn_82F16390();
extern int fn_82F2BD00();
extern int fn_82F65350();
extern unsigned int lbl_8215F998;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EDAA10(int param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  
  puVar11 = *(uint **)(param_1 + 0x1e54);
  uVar8 = 0;
  if (*(int *)(param_1 + 0x8e0) != 0) {
    if (((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) == 0)) ||
       (*(int *)(param_1 + 0x6de8) != 1)) {
      *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_1 + 0x8dc);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xae8);
      *(int *)(param_1 + 0x8d8) = *(int *)(param_1 + 0x2d4) * 4 + *(int *)(param_1 + 0x8dc);
      *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 0x8e8);
    }
  }
  uVar10 = (ulonglong)*(uint *)(param_1 + 0xd50);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
  if (iVar7 == 0x20) {
    iVar7 = uVar4 << 3;
  }
  else {
    iVar7 = ((uVar4 & 0xfffffffc) + 4) * 8 - iVar7;
  }
  uVar12 = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    iVar9 = 0;
    dVar14 = lbl_8215F998;
    iVar3 = param_1;
    do {
      if (((*(int *)(param_1 + 0x8e0) != 0) && ((uVar12 & 0xffffffff) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x8d8) + iVar9) != 0)) {
        fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
        *(int *)(*(int *)(param_1 + 0x8f0) * 4 + *(int *)(param_1 + 0x8e4)) =
             ((int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >>
                   3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4)) - (int)uVar8;
        uVar4 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
        uVar1 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10);
        *(int *)(param_1 + 0x8f0) = *(int *)(param_1 + 0x8f0) + 1;
        uVar8 = ((0x27 - (ulonglong)uVar1 & 0xffffffff) >> 3) + (ulonglong)uVar4;
        iVar3 = fn_82F15B60(param_1,uVar12);
        *(undefined4 *)(param_1 + 0x608) = 1;
      }
      if ((*(int *)(param_1 + 0x8d4) != 0) && (*(int *)(param_1 + 0xaf0) != 2)) {
        bVar5 = false;
        if (*(int *)(param_1 + 0x1a74) != 0) {
          uVar4 = fn_82F65350(iVar3,0);
          bVar5 = (uVar4 & 0xf) == 0xd;
        }
        iVar3 = fn_82F15C30(param_1,bVar5,uVar12);
      }
      uVar13 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          fn_82F16390(param_1,puVar11,uVar13,uVar12);
          if (*(int *)(param_1 + 0x600) != 0) {
            uVar4 = *puVar11 >> 0x16 & 3;
            fn_82E86DF0(param_1,uVar4,uVar4,0);
          }
          iVar3 = fn_82F2BD00(param_1,puVar11,param_2,uVar10);
          uVar13 = uVar13 + 1;
          puVar11 = puVar11 + 0x45;
          param_2 = param_2 + 0x600;
          uVar10 = uVar10 + 0xc;
        } while ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d0));
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
      uVar4 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
      if (iVar6 == 0x20) {
        iVar6 = uVar4 << 3;
      }
      else {
        iVar6 = ((uVar4 & 0xfffffffc) + 4) * 8 - iVar6;
      }
      iVar2 = *(int *)(param_1 + 0x1a4c);
      iVar7 = iVar6 - iVar7;
      if (iVar2 < iVar7) {
        *(undefined4 *)(param_1 + 0x1a50) = 0;
      }
      if (iVar2 / 3 < iVar7) {
        *(undefined4 *)(param_1 + 0x1a68) = 0;
        if (iVar2 - (iVar2 >> 3) < iVar7) {
          *(int *)(param_1 + 0x1a58) = *(int *)(param_1 + 0x1a58) + 1;
          if (iVar2 < iVar7) {
            if (*(int *)(param_1 + 0xaf0) == 0) {
              *(int *)(*(int *)(param_1 + 0x1a5c) + iVar9) =
                   (int)((double)(longlong)(iVar7 - iVar2) * dVar14);
            }
            if (*(int *)(param_1 + 0x1a60) < iVar7) {
              *(int *)(param_1 + 0x1a60) = iVar7;
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      iVar9 = iVar9 + 4;
      iVar7 = iVar6;
    } while ((uVar12 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d4));
  }
  if (*(int *)(param_1 + 0x8e0) != 0) {
    *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8f0) + 1;
  }
  return;
}


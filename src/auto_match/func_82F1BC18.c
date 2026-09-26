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
extern int fn_82ED5388();
extern int fn_82EF6A60();
extern int fn_82F025F0();
extern int fn_82F15B60();
extern int fn_82F15C30();
extern int fn_82F16508();
extern int fn_82F1B470();
extern int fn_82F65350();
extern unsigned int iStack_a0;


void fn_82F1BC18(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iStack_a0;
  
  puVar12 = *(uint **)(param_1 + 0x1e54);
  lVar6 = 0;
  uVar10 = (ulonglong)*(uint *)(param_1 + 0xd4c);
  uVar9 = (ulonglong)*(uint *)(param_1 + 0xd50);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0xd54);
  iStack_a0 = *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0xd64);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
  if (iStack_a0 == 0x20) {
    iStack_a0 = uVar3 << 3;
  }
  else {
    iStack_a0 = ((uVar3 & 0xfffffffc) + 4) * 8 - iStack_a0;
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    iVar5 = 0;
    iVar2 = param_1;
    do {
      if (((*(int *)(param_1 + 0x8e0) != 0) && ((uVar11 & 0xffffffff) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x8d8) + iVar5) != 0)) {
        fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
        *(int *)(*(int *)(param_1 + 0x8f0) * 4 + *(int *)(param_1 + 0x8e4)) =
             ((int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >>
                   3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4)) - (int)lVar6;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
        uVar1 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10);
        *(int *)(param_1 + 0x8f0) = *(int *)(param_1 + 0x8f0) + 1;
        lVar6 = ((0x27 - (ulonglong)uVar1 & 0xffffffff) >> 3) + (ulonglong)uVar3;
        iVar2 = fn_82F15B60(param_1,uVar11);
        *(undefined4 *)(param_1 + 0x608) = 1;
      }
      if ((*(int *)(param_1 + 0x8d4) != 0) && (*(int *)(param_1 + 0xaf0) != 2)) {
        bVar4 = false;
        if (*(int *)(param_1 + 0x1a74) != 0) {
          uVar3 = fn_82F65350(iVar2,0);
          bVar4 = (uVar3 & 0xf) == 0xd;
        }
        fn_82F15C30(param_1,bVar4,uVar11);
      }
      uVar13 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          if (*(int *)(param_1 + 0x7b38) == 0) {
            fn_82F16508(param_1,puVar12,uVar13,uVar11);
          }
          else {
            fn_82EF6A60();
          }
          if (*(int *)(param_1 + 0x600) != 0) {
            uVar3 = *puVar12 >> 0x16 & 3;
            fn_82E86DF0(param_1,uVar3,uVar3,0);
          }
          fn_82F1B470(param_1,puVar12,uVar13,uVar11,uVar10,uVar9,uVar8,uVar7);
          uVar13 = uVar13 + 1;
          puVar12 = puVar12 + 0x45;
          uVar10 = uVar10 + 0x600;
          uVar9 = uVar9 + 0xc;
          uVar8 = uVar8 + 0x300;
          uVar7 = uVar7 + 0xc;
        } while ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d0));
      }
      if (*(int *)(param_1 + 0x8e0) != 0) {
        *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8f0) + 1;
      }
      iVar14 = *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
      uVar3 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
      if (iVar14 == 0x20) {
        iVar14 = uVar3 << 3;
      }
      else {
        iVar14 = ((uVar3 & 0xfffffffc) + 4) * 8 - iVar14;
      }
      if (*(int *)(param_1 + 0x1a4c) < iVar14 - iStack_a0) {
        *(undefined4 *)(param_1 + 0x1a50) = 0;
      }
      iVar2 = fn_82ED5388(param_1,uVar11);
      uVar11 = uVar11 + 1;
      iVar5 = iVar5 + 4;
      iStack_a0 = iVar14;
    } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d4));
  }
  return;
}


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
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82F691F0();


void fn_82ADE488(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar8;
  uint uVar11;
  int iVar12;
  
  iVar3 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x29c) << 2,0);
  uVar11 = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    puVar9 = (uint *)(iVar3 + -4);
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = uVar11;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x29c));
  }
  uVar10 = (uint)*(ushort *)(param_2 + 0x12);
  for (uVar11 = param_3; uVar11 != 0; uVar11 = uVar11 - (uVar11 & ~(uVar11 - 1))) {
    *(uint *)((int)(((ulonglong)*(ushort *)(param_2 + 0x12) +
                     (0x1f - LZCOUNT(uVar11 & ~(uVar11 - 1))) & 0xffffffff) << 2) + iVar3) = uVar10;
    uVar10 = uVar10 + 1;
  }
  lVar6 = (ulonglong)*(ushort *)(param_2 + 0x12) << 2;
  uVar8 = (ulonglong)*(ushort *)(param_2 + 0x12) << 1;
  for (; param_3 != 0; param_3 = param_3 - (param_3 & ~(param_3 - 1))) {
    uVar11 = (uint)((uVar8 & 0xffffffff) >> 3) & 0x1ffffff8;
    uVar4 = uVar8 - (uVar8 & 0xffffffc0);
    uVar5 = (ulonglong)*(ushort *)(param_2 + 0x12) + (0x1f - LZCOUNT(param_3 & ~(param_3 - 1)));
    iVar12 = (int)((uVar5 & 0xffffffff) << 2);
    iVar1 = (int)lVar6;
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x2b0)) =
         *(undefined4 *)(*(int *)(param_1 + 0x2b0) + iVar12);
    uVar8 = uVar8 + 2;
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x2a8)) =
         *(undefined4 *)(*(int *)(param_1 + 0x2a8) + iVar12);
    iVar12 = *(int *)(param_1 + 0x2b4);
    *(ulonglong *)(uVar11 + iVar12) =
         (*(ulonglong *)(((uint)uVar5 >> 2 & 0x1ffffff8) + iVar12) >>
          ((uVar5 & 0x7fffffff) * 2 + (uVar5 & 0x7fffffe0) * -2 & 0x7f) & 3) << (uVar4 & 0x7f) |
         *(ulonglong *)(uVar11 + iVar12) & ~(3L << (uVar4 & 0x7f));
    *(int *)(*(int *)(param_1 + 0x2c4) + iVar1) = param_2;
    lVar6 = lVar6 + 4;
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0x29c) != 0) {
    iVar12 = 0;
    do {
      uVar10 = *(uint *)(iVar12 + *(int *)(param_1 + 0x2a8));
      if (uVar10 < 0xffff) {
        uVar7 = *(undefined4 *)(uVar10 * 4 + iVar3);
      }
      else {
        uVar7 = 0;
      }
      uVar11 = uVar11 + 1;
      *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x2a8)) = uVar7;
      iVar12 = iVar12 + 4;
    } while (uVar11 < *(uint *)(param_1 + 0x29c));
  }
  uVar2 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
  iVar3 = *(int *)(param_1 + 0x2b8);
  while( true ) {
    if (iVar3 == 0) {
      fn_82AC6808(param_1,uVar2,*(int *)(param_1 + 0x2a0) << 3,0);
      return;
    }
    if ((*(uint *)(iVar3 + 0xc0) & 7) != 0) break;
    iVar3 = *(int *)(iVar3 + 200);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,*(int *)(param_1 + 0x2a0) << 3);
}


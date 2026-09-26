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
extern int fn_82AA66A8();
extern int fn_82ADEDB8();


void fn_82ADF478(int param_1,int param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar5 = *(uint *)(param_1 + 0x318);
  if (uVar5 == 0) {
    uVar5 = 0x20;
  }
  if ((ulonglong)uVar5 <= (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdec);
  }
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 8) >> 1 & 0xf;
  uVar2 = uVar5 & 0xffff;
  *(uint *)(param_2 + 0x10) = uVar5 | 0x100000;
  uVar5 = uVar2 + (uVar5 >> 0x10 & 7);
  if (uVar2 < uVar5) {
    iVar9 = uVar2 * 0x28;
    iVar7 = uVar5 - uVar2;
    do {
      uVar5 = uVar8 & ~(uVar8 - 1);
      uVar8 = uVar8 - uVar5;
      fn_82ADEDB8(*(int *)(param_1 + 0x2a4) + iVar9,param_3 + 1,0x3f - param_3);
      if ((param_3 & 0xffffffff) != 0) {
        fn_82ADEDB8(*(int *)(param_1 + 0x2a4) + iVar9,0,param_3);
      }
      uVar3 = 0;
      uVar4 = 0;
      do {
        if ((uVar3 & 0xffffffff) != (0x1fU - LZCOUNT(uVar5) & 0xffffffff)) {
          puVar6 = (ulonglong *)(*(int *)(param_1 + 0x2a4) + iVar9);
          lVar10 = 4;
          do {
            puVar1 = puVar6 + 1;
            puVar6 = puVar6 + 1;
            *puVar6 = *puVar1 | 0x1111111111111111 << (uVar4 & 0x7f);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
      } while ((uVar3 & 0xffffffff) < 4);
      iVar7 = iVar7 + -1;
      iVar9 = iVar9 + 0x28;
    } while (iVar7 != 0);
  }
  return;
}


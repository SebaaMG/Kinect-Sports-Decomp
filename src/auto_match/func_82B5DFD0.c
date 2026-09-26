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
extern int fn_82ABE5F8();
extern int fn_82AE60E8();
extern int fn_82B4A7C0();
extern int fn_82B54048();
extern int fn_82F68CC0();
extern unsigned int lbl_83160E20;


void fn_82B5DFD0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined **ppuVar6;
  uint uVar7;
  
  *(uint *)(param_1 + 600) = *(uint *)(param_1 + 0x14);
  uVar2 = fn_82AE60E8(param_1,((ulonglong)*(uint *)(param_1 + 0x14) + 0xc) * 0x28,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_82F68CC0(uVar2,*(int *)(param_1 + 0xc),(ulonglong)*(uint *)(param_1 + 0x14) * 0x28);
    fn_82ABE5F8(param_1,*(undefined4 *)(param_1 + 0xc),(ulonglong)*(uint *)(param_1 + 0x14) * 0x28,
                 0);
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  uVar7 = 0;
  ppuVar6 = &lbl_83160E20;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0xc;
  do {
    iVar5 = *(int *)(param_1 + 600) + uVar7;
    iVar3 = fn_82B4A7C0(param_1,*ppuVar6,iVar5,1,0xc,1,4,0);
    iVar1 = *(int *)(iVar3 + 0x18);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1,iVar3);
    }
    fn_82B54048(param_1,iVar5,iVar3,iVar1,3,0);
    iVar5 = iVar5 * 0x28;
    uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + iVar5);
    if (uVar7 < 6) {
      uVar4 = uVar4 & 0xfffffff8 | 4;
    }
    else {
      uVar4 = uVar4 & 0xfffffff8 | 2;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + iVar5) = uVar4;
    uVar7 = uVar7 + 1;
    iVar5 = *(int *)(param_1 + 0xc) + iVar5;
    ppuVar6 = ppuVar6 + 1;
    *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 4;
  } while (uVar7 < 0xc);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40000;
  return;
}


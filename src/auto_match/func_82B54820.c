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
extern int fn_82B462A8();
extern int fn_82B4E578();
extern int fn_82B54048();


void fn_82B54820(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(iVar1 + 0x10);
  if ((iVar3 != *(int *)(param_1 + 0x10)) && (*(uint *)(iVar1 + 0x14) != 0)) {
    if (*(int *)(iVar3 * 0x28 + *(int *)(param_1 + 0xc) + 0xc) != 0) {
      uVar2 = fn_82B462A8();
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdc0,uVar2);
    }
    if (0x3fff < *(uint *)(iVar1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdbf);
    }
    fn_82B54048(param_1,iVar3,param_2,iVar1,3,*(undefined4 *)(param_1 + 0x18));
    iVar3 = *(int *)(iVar1 + 0x10) * 0x28;
    *(uint *)(iVar3 + *(int *)(param_1 + 0xc)) =
         *(uint *)(iVar3 + *(int *)(param_1 + 0xc)) & 0xfffffff8 | 2;
    iVar3 = *(int *)(iVar1 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x4000000;
    iVar3 = *(int *)(iVar1 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfff80000 | *(uint *)(param_1 + 0x2f0) & 0x7ffff;
    if (*(int *)(iVar1 + 0x34) != 0) {
      fn_82B4E578(param_1,param_3,*(undefined4 *)(iVar1 + 0x10));
    }
  }
  return;
}


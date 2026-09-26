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
extern int fn_825444B8();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern int fn_8263FB38();
extern unsigned int lbl_82195C90;
extern unsigned int lbl_821CA460;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825D3A38(int param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x2948) = *(uint *)(param_1 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x40;
  uVar2 = fn_82637BC0(param_1,0);
  uVar2 = fn_82637C50(uVar2,6);
  uVar2 = fn_82637CE0(uVar2,7);
  iVar3 = fn_82637B30(uVar2,1);
  uVar1 = lbl_82195C90;
  *(uint *)(iVar3 + 0x293c) = *(uint *)(iVar3 + 0x293c) | 8;
  *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x40200;
  *(undefined4 *)(iVar3 + 0x2904) = uVar1;
  *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x8000000;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2f14) = 1;
    *(uint *)(param_1 + 0x2934) =
         (-(uint)(*(int *)(param_1 + 0x3158) != 0) & 1) << 1 |
         *(uint *)(param_1 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x20800;
    *(uint *)(param_1 + 0x2934) = *(uint *)(param_1 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x800;
    if ((param_3 & 0xffffffff) == 0) {
      uVar2 = 0xffffffff8326b090;
    }
    else {
      uVar2 = fn_825444B8(param_3);
    }
    fn_8263FB38((double)lbl_821CA460,param_1,0,0,uVar2,0,0,0,0);
  }
  else {
    *(undefined4 *)(iVar3 + 0x2f14) = 0;
    *(uint *)(iVar3 + 0x2934) = *(uint *)(iVar3 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x20800;
    *(uint *)(iVar3 + 0x2934) = *(uint *)(iVar3 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x800;
  }
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff8326b090;
  }
  else {
    uVar2 = fn_825444B8(param_3);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_1,1,uVar2,0x40000000);
}


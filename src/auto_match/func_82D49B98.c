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
extern int fn_82CFF8D0();
extern int fn_82D48E18();


void fn_82D49B98(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(iVar1 + 0x1c) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(iVar1 + 0x14),*(uint *)(iVar1 + 0x1c) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8213876c,*(undefined4 *)(iVar1 + 0x14),
               *(int *)(iVar1 + 0x18) << 2,uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(iVar1 + 0x28) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(iVar1 + 0x20),*(uint *)(iVar1 + 0x28) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8213876c,*(undefined4 *)(iVar1 + 0x20),
               *(int *)(iVar1 + 0x24) << 2,uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(iVar1 + 0x10) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(iVar1 + 8),*(uint *)(iVar1 + 0x10) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8213876c,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0xc) << 2,
               uVar2);
  }
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82138760,*(undefined4 *)(param_1 + 0x1c),0);
  fn_82D48E18(param_1,param_2,0xffffffff8323c614);
  return;
}


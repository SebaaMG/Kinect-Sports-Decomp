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
extern int fn_82639380();
extern int fn_82639528();


void fn_82675930(int param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 0xd8);
    iVar3 = (param_2 + 0x30) * 0x18;
    *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) & 0xffffe3ff | 0x800;
    uVar2 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | uVar2;
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) & 0xffff1fff | 0x4000;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | uVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd8);
    iVar3 = (param_2 + 0x30) * 0x18;
    *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) & 0xffffe3ff;
    uVar2 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    *(ulonglong *)(iVar1 + 0x18) = uVar2 | *(ulonglong *)(iVar1 + 0x18);
    iVar1 = *(int *)(param_1 + 0xd8);
    *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) & 0xffff1fff;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | uVar2;
  }
  fn_82639380(*(undefined4 *)(param_1 + 0xd8),param_2,1);
  fn_82639528(*(undefined4 *)(param_1 + 0xd8),param_2,1);
  return;
}


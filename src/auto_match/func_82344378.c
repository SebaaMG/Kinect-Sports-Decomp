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
extern unsigned int *auStack_20;
extern int fn_8233EB88();
extern int fn_82348C30();
extern unsigned int lbl_821CC160;


void fn_82344378(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  fn_82348C30();
  uVar2 = lbl_821CC160;
  **(undefined4 **)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x48) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x28) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  fn_8233EB88(auStack_20,iVar1 + 0x4c,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50))
  ;
  return;
}


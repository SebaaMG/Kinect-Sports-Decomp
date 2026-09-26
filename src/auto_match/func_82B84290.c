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
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82B83B68();


uint fn_82B84290(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  lVar2 = fn_82ABDD90(param_1,0x70,0,1);
  iVar3 = fn_82AC6560(param_1,lVar2 + 4,0x23);
  uVar4 = iVar3 + 4;
  fn_82B83B68(uVar4,param_1,param_2,0x70,0,1);
  uVar1 = uVar4 & 0xfffffffe;
  *(undefined4 *)(uVar1 + 0x24) = *(undefined4 *)(param_2 + 0x10);
  *(uint *)(*(uint *)(param_2 + 0x10) & 0xfffffffe) = uVar1;
  *(uint *)(uVar1 + 0x28) = param_2 - 0x14U | 1;
  *(uint *)(param_2 + 0x10) = uVar1 + 0x28;
  *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x800000;
  **(uint **)(param_1 + 0x68) = uVar4;
  *(uint *)(param_1 + 0x68) = (int)lVar2 + uVar4 + -4;
  return uVar4;
}


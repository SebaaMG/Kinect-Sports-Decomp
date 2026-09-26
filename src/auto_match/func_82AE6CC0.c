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
extern int fn_82AE6B08();


undefined4 fn_82AE6CC0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x9b4);
  if (((iVar1 == 0) || (uVar2 = fn_82AE6B08(iVar1), uVar2 == 0xffffffff)) || ((uVar2 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar1 + 4);
    uVar2 = uVar2 + 1;
    while( true ) {
      uVar4 = -(uint)((uVar4 & 1) == 0) & uVar4;
      if (uVar2 < *(uint *)(uVar4 + 8)) break;
      uVar2 = uVar2 - *(uint *)(uVar4 + 8);
      uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 4);
    }
    uVar3 = *(undefined4 *)((uVar2 + 4) * 4 + uVar4);
  }
  return uVar3;
}


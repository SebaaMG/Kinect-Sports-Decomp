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
extern int fn_82F691F0();
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


undefined8 fn_8300CE00(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = (int)(*(ushort *)(param_1 + 0x16) + 7) >> 3;
  iVar2 = iVar1 << 1;
  uVar3 = fn_82FA5060(lbl_831BC768,iVar2);
  *(int *)(param_1 + 0x24) = (int)uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    return 2;
  }
  *(int *)(param_1 + 0x28) = (int)uVar3 + iVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar3,0,iVar2);
}


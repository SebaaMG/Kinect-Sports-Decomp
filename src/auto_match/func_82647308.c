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
extern int fn_8265C940();
extern int fn_82F691F0();


undefined8 fn_82647308(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_r8;
  
  *in_r8 = 0;
  iVar2 = fn_8265C940(0x5f80,0x24800000);
  if (iVar2 != 0) {
    uVar1 = iVar2 + 0x83U & 0xffffff80;
    *(int *)(uVar1 - 4) = iVar2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x5f00);
  }
  return 0xffffffff8007000e;
}


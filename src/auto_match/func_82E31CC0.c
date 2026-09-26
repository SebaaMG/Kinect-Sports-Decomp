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
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82e31fec) */
/* WARNING: Removing unreachable block (ram,0x82e31fac) */
/* WARNING: Removing unreachable block (ram,0x82e31fcc) */
/* WARNING: Removing unreachable block (ram,0x82e3200c) */

undefined8 fn_82E31CC0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    *param_2 = 0;
    uVar1 = *(uint *)(param_1 + 0xb0);
    lVar2 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar1) {
      lVar2 = -1;
    }
    lVar2 = fn_82E50BE8(lVar2,0,0,0,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar2,0,uVar1 << 2);
    }
    uVar3 = 0xffffffff8007000e;
  }
  fn_82E50F10(param_1 + 8);
  return uVar3;
}


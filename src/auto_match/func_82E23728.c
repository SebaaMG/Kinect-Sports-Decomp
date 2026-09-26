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
extern int fn_82F68B70();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82e255a4) */
/* WARNING: Removing unreachable block (ram,0x82e255b8) */
/* WARNING: Removing unreachable block (ram,0x82e255d0) */
/* WARNING: Removing unreachable block (ram,0x82e25614) */
/* WARNING: Removing unreachable block (ram,0x82e255f4) */

undefined8 fn_82E23728(longlong param_1,undefined8 param_2)

{
  int *piVar3;
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_1 + 0xc0;
  uVar4 = param_1 + 200;
  piVar3 = (int *)fn_82F68B70(param_2,uVar4,param_1 + 0xf8,uVar5,param_1 + 0x10c);
  if ((((*piVar3 == 0) && ((piVar3[1] == 0 || (piVar3[2] == 0)))) || ((uVar5 & 0xffffffff) == 0)) ||
     ((uVar4 & 0xffffffff) == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *(undefined4 *)uVar5 = 0;
    lVar1 = fn_8265C940(0x120,0x208c804d);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar1,0,0x120);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}


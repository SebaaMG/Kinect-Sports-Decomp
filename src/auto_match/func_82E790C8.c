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
extern int fn_82EEB658();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82e79574) */
/* WARNING: Removing unreachable block (ram,0x82e7920c) */
/* WARNING: Removing unreachable block (ram,0x82e79554) */
/* WARNING: Removing unreachable block (ram,0x82e7956c) */

undefined8 fn_82E790C8(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int aiStack_8c [35];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if ((*(byte *)(param_1 + 0x238) & 2) == 0) {
      uVar1 = 0xffffffffc00d3a98;
    }
    else {
      aiStack_8c[0] = 0;
      fn_82EEB658(param_1 + 0x1e4,aiStack_8c);
      if (aiStack_8c[0] != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(aiStack_8c[0],0,0x148);
      }
      *param_2 = 0;
      uVar1 = 0xffffffff8007000e;
    }
  }
  return uVar1;
}


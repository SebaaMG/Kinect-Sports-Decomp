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
extern int fn_82C2B580();
extern int fn_82C44798();
extern int fn_82F691F0();


undefined8 fn_82A810C8(undefined4 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  fn_82C44798();
  iVar4 = (int)param_3;
  param_1[1] = iVar4;
  lVar2 = param_3;
  if (iVar4 < 1) {
    lVar2 = -param_3;
  }
  if (((int)lVar2 < 0x186a1) &&
     (uVar1 = (int)(uint)param_4 >> 0x1f, (int)(((uint)param_4 ^ uVar1) - uVar1) < 0x186a1)) {
    uVar3 = (param_4 - param_3) + 1;
    param_1[2] = (int)uVar3;
    if ((iVar4 < 1) && ((0 < (longlong)(uVar3 - param_3) && (0 < (int)uVar3)))) {
      uVar3 = fn_82C2B580((uVar3 & 0x3fffffff) << 2);
      *param_1 = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,param_1[2] << 2);
    }
  }
  return 0xffffffff80070057;
}


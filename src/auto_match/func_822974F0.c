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
extern int fn_82F622E0();
extern int fn_82F63CA0();


undefined4 * fn_822974F0(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar4 = param_1[4] - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  if (param_3 != 0) {
    puVar3 = param_1;
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
      puVar2 = (undefined4 *)*param_1;
    }
    fn_82F63CA0(param_2 * 2 + (int)puVar2,(param_2 + param_3) * 2 + (int)puVar3,
                 uVar4 - param_3 & 0x7fffffff);
    iVar1 = param_1[4];
    param_1[4] = iVar1 - param_3;
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    *(undefined2 *)((iVar1 - param_3) * 2 + (int)puVar3) = 0;
  }
  return param_1;
}


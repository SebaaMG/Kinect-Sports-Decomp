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
extern int fn_82297488();
extern int fn_822977A8();
extern int fn_822AC3E0();
extern int fn_82F622A8();
extern int fn_82F64CE0();
extern int fn_82F68CC0();


undefined4 * fn_822AC2D0(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = fn_82F64CE0(param_2);
  cVar2 = fn_82297488(param_1,param_2);
  if (cVar2 == '\0') {
    if (-param_1[4] - 1 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196214);
    }
    if (uVar1 != 0) {
      iVar4 = param_1[4] + uVar1;
      cVar2 = fn_822977A8(param_1,iVar4,0);
      if (cVar2 != '\0') {
        puVar3 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar3 = (undefined4 *)*param_1;
        }
        fn_82F68CC0(param_1[4] * 2 + (int)puVar3,param_2,uVar1 & 0x7fffffff);
        param_1[4] = iVar4;
        puVar3 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar3 = (undefined4 *)*param_1;
        }
        *(undefined2 *)(iVar4 * 2 + (int)puVar3) = 0;
      }
    }
  }
  else {
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    param_1 = (undefined4 *)fn_822AC3E0(param_1,param_1,(int)param_2 - (int)puVar3 >> 1,uVar1)
    ;
  }
  return param_1;
}


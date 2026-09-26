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
extern int fn_82F68CC0();


undefined4 * fn_82E54898(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[2];
  if (uVar1 < (uint)param_2[1]) {
    uVar4 = 0x80070057;
  }
  else {
    lVar2 = ((ulonglong)uVar1 & 0x7fffffff) << 1;
    if (0x7fffffff < uVar1) {
      lVar2 = -1;
    }
    uVar3 = fn_82E50BE8(lVar2,0,0,0,0);
    *param_1 = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar3,*param_2,param_2[2] << 1);
      param_1[2] = param_2[2];
      param_1[1] = param_2[1];
      return param_1;
    }
    uVar4 = 0x8007000e;
  }
  *param_3 = uVar4;
  return param_1;
}


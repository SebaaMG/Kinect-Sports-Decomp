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
extern int fn_82682298();
extern unsigned int lbl_82007310;
extern unsigned int uStack_30;


void fn_826AAA08(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uStack_30;
  
  uVar1 = param_1[7];
  uVar2 = *param_1;
  param_1[0xd] = param_1[0xd] + 1;
  param_1[7] = uVar1 + 1;
  uVar3 = param_1[9];
  if (param_1[9] <= uVar2) {
    uVar3 = uVar2;
  }
  param_1[9] = uVar3;
  if (((param_1[0xf] != 0) && (param_1[8] < uVar2)) ||
     ((param_1[0x10] != 0 && ((param_1[0x10] <= uVar1 + 1 && (param_1[0xf] < uVar2)))))) {
    uStack_30 = 0;
    fn_82682298(param_1,&uStack_30);
    uVar1 = (((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
    if (param_1[0xf] < (((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      param_1[9] = uVar2;
      param_1[8] = param_1[0xf];
    }
    uVar3 = uVar2 - (((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
    if (uVar2 - (((U64)(uStack_30) >> 32) & 0xFFFFFFFF) < param_1[8]) {
      uVar3 = param_1[8];
    }
    param_1[8] = uVar3;
    uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)(longlong)((double)uVar3 * lbl_82007310))) & ((U64)0xFFFFFFFF)) << 32));
    if (param_1[9] < (((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      param_1[8] = (((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
    }
    param_1[0xc] = param_1[9];
    param_1[7] = 0;
    param_1[0xb] = uVar1;
    param_1[0xe] = param_1[0xd];
  }
  param_1[10] = uVar2;
  return;
}


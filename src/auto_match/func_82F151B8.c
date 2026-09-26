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
extern int fn_8265C990();
extern int fn_82F44E60();


uint * fn_82F151B8(uint *param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  fn_82F44E60(param_1,param_2,param_4);
  param_1[0x12] = param_3;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0xffffffff;
  lVar1 = ((ulonglong)*param_1 & 0x3fffffff) << 2;
  if (0x3fffffff < *param_1) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C940(lVar1,0x248c8000);
  param_1[0xe] = uVar2;
  lVar1 = ((ulonglong)*param_1 & 0x1fffffff) << 3;
  if (0x3fffffff < ((ulonglong)*param_1 & 0x7fffffff) << 1) {
    lVar1 = -1;
  }
  uVar3 = fn_8265C940(lVar1,0x248c8000);
  uVar2 = param_1[0xe];
  param_1[0xc] = uVar3;
  if (uVar2 != 0) {
    if (uVar3 != 0) {
      param_1[9] = 0;
      param_1[0x10] = 0;
      param_1[0xd] = 0;
      param_1[0xf] = *param_1 * 4 + uVar3;
      return param_1;
    }
    if (uVar2 != 0) {
      fn_8265C990(uVar2,0x248c8000);
      param_1[0xe] = 0;
    }
  }
  if (param_1[0xc] != 0) {
    fn_8265C990(param_1[0xc],0x248c8000);
    param_1[0xc] = 0;
  }
  *param_4 = 1;
  return param_1;
}


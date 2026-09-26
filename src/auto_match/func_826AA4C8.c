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
extern int fn_826A9B58();
extern int fn_82F68CC0();


uint * fn_826AA4C8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1];
  uVar2 = *param_2;
  if ((ulonglong)uVar1 != 0) {
    uVar3 = param_1[1];
    fn_826A9B58(param_1,param_1,(ulonglong)uVar3 + (ulonglong)uVar1);
    fn_82F68CC0(((ulonglong)uVar3 & 0x1fffffff) * 8 + (ulonglong)*param_1,uVar2,uVar1 << 3);
  }
  return param_1;
}


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
extern int fn_826A18A8();
extern int fn_826C1FF8();


undefined8
fn_8271D408(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar2;
  undefined8 uVar1;
  
  cVar2 = fn_826A18A8((ulonglong)*param_2 + 0x1e0,param_3,-(6 < *(byte *)(param_2 + 1)) & 1);
  if ((cVar2 == '\0') &&
     (cVar2 = fn_826A18A8((ulonglong)*param_2 + 0x1e4,param_3,
                                -(6 < *(byte *)(param_2 + 1)) & 1), cVar2 == '\0')) {
    uVar1 = fn_826C1FF8(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


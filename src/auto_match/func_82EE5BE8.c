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
extern int fn_82EE5688();


undefined8 fn_82EE5BE8(int param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined2 *puStack_30;
  int aiStack_2c [11];
  
  param_2 = param_2 & 0xffff;
  if (((param_2 < *(uint *)(param_1 + 0xb4)) && (param_3 != (undefined2 *)0x0)) &&
     (param_4 != (undefined2 *)0x0)) {
    fn_82EE5688(param_1 + 0x4c,param_2,&puStack_30);
    *param_3 = *puStack_30;
    fn_82EE5688(param_1 + 0x4c,param_2,aiStack_2c);
    uVar1 = 0;
    *param_4 = *(undefined2 *)(aiStack_2c[0] + 2);
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}


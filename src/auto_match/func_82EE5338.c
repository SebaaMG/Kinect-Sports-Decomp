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
extern int fn_82E3C5F8();


undefined8 fn_82EE5338(int param_1,uint param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  undefined2 *apuStack_20 [4];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if ((param_3 == (undefined2 *)0x0) || (*(uint *)(param_1 + 0x88) <= (param_2 & 0xffff))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82E3C5F8(param_1 + 0x48,param_2 & 0xffff,apuStack_20);
    uVar1 = 0;
    *param_3 = *apuStack_20[0];
  }
  return uVar1;
}


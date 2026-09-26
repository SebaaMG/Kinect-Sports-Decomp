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
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_82696D38();
extern int fn_826A98D8();
extern int fn_826ADE60();


undefined8 fn_826AE1D8(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int aiStack_20 [4];
  
  if (*param_2 == '\a') {
    uVar1 = fn_82695370(param_2,param_1);
  }
  else if (*param_2 == '\x05') {
    fn_82696D38(aiStack_20,param_2,param_1,0xffffffffffffffff,0);
    uVar1 = fn_826A98D8(param_1,aiStack_20,0);
    lVar2 = (ulonglong)*(uint *)(aiStack_20[0] + 8) - 1;
    *(int *)(aiStack_20[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_20[0]);
    }
  }
  else {
    fn_826ADE60(param_1,0xffffffff820075a8);
    uVar1 = 0;
  }
  return uVar1;
}


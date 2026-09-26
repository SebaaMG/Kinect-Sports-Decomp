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
extern int fn_8268B330();
extern int fn_8268B400();
extern int fn_826BD078();


undefined8 fn_827558F0(undefined8 param_1,int param_2,uint param_3,uint param_4,char param_5)

{
  ulonglong uVar1;
  int aiStack_40 [16];
  
  fn_8268B330();
  aiStack_40[0] = (*(uint *)(param_2 + 0xc) & 0xfffffffc) + 8;
  while( true ) {
    if (param_4 <= param_3) {
      return param_1;
    }
    uVar1 = fn_826BD078(aiStack_40);
    if (uVar1 == 0) break;
    if ((uVar1 & 0xffffffff) == 10) {
      if (param_5 != '\0') {
        fn_8268B400(param_1,10);
      }
    }
    else {
      fn_8268B400(param_1);
      param_3 = param_3 + 1;
    }
  }
  return param_1;
}


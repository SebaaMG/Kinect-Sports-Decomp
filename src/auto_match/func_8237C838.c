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
extern int fn_822B6C98();
extern int fn_822CEEC8();
extern int fn_82A1E1A8();
extern float lbl_821954C8;
extern unsigned int uStack_30;


void fn_8237C838(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uStack_30;
  
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_822B6C98(&uStack_30,param_2,9);
    if (*(float *)(param_1 + 0x194) < (((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      uVar2 = (uint)(*(float *)(param_1 + 400) < (((U64)(uStack_30) >> 0) & 0xFFFFFFFF));
      uVar1 = fn_822CEEC8(param_2);
      if (uVar2 != uVar1) {
        uStack_30 = (longlong)(*(float *)(param_1 + 0x118) * lbl_821954C8);
        fn_82A1E1A8((((U64)(uStack_30) >> 32) & 0xFFFFFFFF));
      }
    }
  }
  return;
}


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
extern int fn_82A36838();
extern int fn_82A369B0();
extern int fn_82A394B0();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A36A10(undefined8 param_1,ulonglong param_2,int param_3,undefined4 param_4)

{
  undefined4 uStack0000002c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack0000002c = param_4;
  fn_82A369B0(&uStack_30,param_1);
  fn_82A394B0(param_3,&stack0x0000002c,uStack_2c,uStack_28,0x10,param_2);
  *(undefined4 *)(param_3 + 0xc) = uStack_30;
  if ((param_2 & 1) != 0) {
    fn_82A36838(param_3);
  }
  return;
}


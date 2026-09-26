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
extern int fn_82834388();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_828346D0(undefined4 *param_1,int param_2,undefined8 param_3)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = *(undefined4 *)(param_2 + -0xc);
  uStack_2c = *(undefined4 *)(param_2 + -8);
  uStack_28 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *param_1;
  *(undefined4 *)(param_2 + -8) = param_1[1];
  *(undefined4 *)(param_2 + -4) = param_1[2];
  fn_82834388(param_1,0,((param_2 - (int)param_1) + -0xc) / 0xc,&uStack_30,param_3);
  return;
}


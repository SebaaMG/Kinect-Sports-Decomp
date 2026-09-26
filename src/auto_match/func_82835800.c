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
extern unsigned int *auStack_30;
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_82835308();
extern int fn_82835420();
extern int fn_82835688();


void fn_82835800(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = 0;
  uVar1 = fn_828252D0(*(int *)(param_2 + 0xa0) << 2);
  *(undefined4 *)(param_1 + 0x3c8) = uVar1;
  fn_82835420(param_1,param_2,auStack_30);
  fn_82835688(param_1,param_2,auStack_30[0]);
  fn_82835308(param_1,param_2,param_3);
  fn_828252D8(*(undefined4 *)(param_1 + 0x3c8));
  return;
}


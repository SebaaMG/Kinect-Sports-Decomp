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
extern int fn_82810208();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810BE8();
extern unsigned int lbl_82002C5C;


void fn_8281EF00(longlong param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_30 [24];
  
  fn_82810328(param_1 + 0xc,param_1,auStack_30);
  dVar2 = (double)fn_82810BE8(auStack_30);
  dVar1 = (double)lbl_82002C5C;
  *(float *)(param_2 + 0xc) = (float)(dVar2 * dVar1);
  fn_828102A8(dVar1,auStack_30,auStack_30);
  fn_82810208(auStack_30,param_1,param_2);
  return;
}


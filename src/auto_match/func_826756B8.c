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
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern int fn_82526CC0();
extern int fn_82526D78();
extern int fn_82526DC8();
extern int fn_8268B8E8();
extern int fn_8268BA10();


void fn_826756B8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [96];
  
  if (*param_3 == 1) {
    lVar2 = ((ulonglong)(uint)param_3[1] & 0xfffffffc) + 8;
    lVar1 = fn_82526CC0(lVar2,0xffffffff82002d90);
    fn_82526D78(lVar2,auStack_a0,0x40,lVar1 + 3,*(uint *)(param_3[1] & 0xfffffffc) & 0x7fffffff)
    ;
    fn_82526DC8(auStack_a0,auStack_60,0x40,0xffffffff821aa630,0xffffffff821ac4b4);
    fn_8268B8E8(param_2,auStack_60);
  }
  else {
    fn_8268BA10(param_2,param_3 + 1);
  }
  return;
}


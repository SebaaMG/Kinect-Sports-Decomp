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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_829D3AB0();
extern int fn_82A2B130();


longlong fn_829D3C80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [120];
  
  auStack_a0[0] = 0x78;
  lVar1 = fn_82A2B130(2,0x101,param_1,param_2,auStack_90,auStack_a0);
  if ((lVar1 < 0) || (iVar2 = fn_829D3AB0(auStack_90,param_3), iVar2 < 0)) {
    lVar1 = fn_829D3AB0(0xffffffff82057468,param_3);
  }
  return lVar1;
}


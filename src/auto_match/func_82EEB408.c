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
extern unsigned int *auStack_10;
extern int fn_82EEB368();
extern int fn_82EEB3B8();


bool fn_82EEB408(uint *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint auStack_10 [4];
  
  auStack_10[0] = *param_1;
  uVar4 = (ulonglong)auStack_10[0];
  uVar3 = 0;
  uVar2 = uVar4;
  while ((uVar2 != 0 && (uVar3 = uVar3 + 1, uVar3 < 2))) {
    uVar2 = (ulonglong)*(uint *)((int)uVar2 + 0xc);
  }
  if (1 < uVar3) {
    uVar1 = fn_82EEB3B8(param_1,param_1,auStack_10);
    fn_82EEB368(uVar1,uVar4);
  }
  return 1 < uVar3;
}


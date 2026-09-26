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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_828E0268();
extern int fn_82A83B90();


undefined1 fn_82A81CD0(ulonglong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  if (((param_1 & 0xffffffff) == 0) || (param_2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = fn_828E0268(auStack_20);
    uVar2 = fn_828E0268(auStack_1c,param_1);
    uVar3 = fn_82A83B90(uVar2,uVar1);
  }
  return uVar3;
}


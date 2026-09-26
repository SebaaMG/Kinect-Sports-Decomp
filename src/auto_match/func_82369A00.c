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
extern unsigned int *auStack_40;
extern int fn_82369798();
extern int fn_82369900();


undefined8 fn_82369A00(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  if (((param_2 & 0xffffffff) != 0) &&
     (iVar2 = fn_82369798(param_2,param_3,param_4,auStack_30,auStack_40), iVar2 != 0)) {
    uVar1 = fn_82369900(param_1,param_2);
    return uVar1;
  }
  return 0;
}


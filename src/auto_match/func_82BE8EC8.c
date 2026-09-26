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
extern unsigned int *auStack_40;
extern int fn_82CE07D8();
extern int fn_82F64020();
extern unsigned int uStack_32;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_35;
extern unsigned int uStack_36;


undefined8 fn_82BE8EC8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_40 [10];
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  
  if ((((param_2 & 0xffffffff) != 0) && (0x11 < (int)param_3)) &&
     (iVar1 = fn_82CE07D8(auStack_40), -1 < iVar1)) {
    fn_82F64020(param_2,param_3,0xffffffff820e9b5c,uStack_36,uStack_35,uStack_34,uStack_33,
                      uStack_32);
    return 1;
  }
  return 0;
}


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
extern unsigned int *auStack_50;
extern int fn_82F4F080();
extern int fn_82F538A0();
extern int fn_82F538B0();
extern int fn_82F53900();
extern int fn_82F53928();
extern int fn_8306ED70();


void fn_82F4FC68(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [40];
  
  fn_82F4F080(auStack_50,param_1);
  lVar1 = 0;
  do {
    fn_82F538A0(auStack_50,param_2,lVar1);
    fn_8306ED70();
    fn_82F53900(param_2,lVar1);
    fn_82F538B0(auStack_40,param_2,lVar1);
    fn_8306ED70();
    fn_82F53928(param_2,lVar1);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < 0x19);
  return;
}


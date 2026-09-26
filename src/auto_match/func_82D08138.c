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
extern int fn_82D0B0C0();
extern int fn_82D0CA60();
extern int fn_82D0D640();
extern int fn_82D0D6E8();
extern int fn_82D0D888();


void fn_82D08138(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  fn_82D0D6E8(auStack_30);
  fn_82D0B0C0(auStack_40);
  auStack_40[0] = 1;
  iVar1 = fn_82D0D888(auStack_30,param_1,auStack_40);
  if (iVar1 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_82D0CA60(auStack_30,0,param_2);
  }
  fn_82D0D640(auStack_30);
  return;
}


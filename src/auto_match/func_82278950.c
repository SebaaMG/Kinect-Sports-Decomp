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
extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern int fn_8263BDD8();
extern int fn_82F691F0();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


void fn_82278950(undefined4 *param_1)

{
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  fn_8263BDD8(*param_1,0,0,0,&uStack_20,&iStack_1c,auStack_14,auStack_18);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uStack_20,0,(longlong)(int)param_1[10] * (longlong)iStack_1c);
}


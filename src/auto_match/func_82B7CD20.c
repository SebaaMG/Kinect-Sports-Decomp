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
extern unsigned int *auStack_b0;
extern int fn_82B7C958();
extern int fn_82F63F40();


void fn_82B7CD20(int param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b0 [176];
  
  fn_82B7C958(param_1,0xffffffff820db560,0xffffffff820db584,0xffffffff820db58c);
  puVar4 = (undefined8 *)(param_1 + 0x848);
  lVar3 = 0x10;
  do {
    puVar1 = (undefined4 *)((int)puVar4 + 0x24);
    puVar2 = puVar4 + 4;
    puVar4 = puVar4 + 3;
    fn_82F63F40(auStack_b0,0xffffffff820db544,*puVar1,*(undefined4 *)puVar2,*puVar4);
    fn_82B7C958(param_1,auStack_b0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}


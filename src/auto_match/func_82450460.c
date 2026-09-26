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
extern unsigned int *auStack_20;
extern int fn_82450348();
extern int fn_824C8210();
extern int fn_8255E0B0();


void fn_82450460(int param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = fn_82450348(param_1,0);
  fn_8255E0B0(*(undefined4 *)(iVar1 + 0x14),4,auStack_20);
  fn_824C8210(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xa8));
  return;
}


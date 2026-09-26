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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8234C258();
extern int fn_8234C320();


void fn_823414A0(int param_1)

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
  if (*(int *)(iVar1 + 0x280) != 0) {
    fn_8234C320(0,iVar1 + 0x268);
  }
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
  if (*(int *)(iVar1 + 0x2ac) != 0) {
    fn_8234C320(0,iVar1 + 0x294);
  }
  fn_82230110(auStack_30,0xffffffff821ac494);
  iVar1 = **(int **)(param_1 + 0xc);
  fn_8234C258((ulonglong)*(uint *)(iVar1 + 0x118) + 0x150,0,auStack_30);
  fn_8234C258((ulonglong)*(uint *)(iVar1 + 0x118) + 0x150,1,auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}


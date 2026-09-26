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
extern int fn_82CE5410();
extern int fn_82DAC7C8();
extern int fn_82DC73A8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82141C14;


void fn_82DAC840(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = param_1[10];
  *param_1 = &lbl_82141C14;
  if (iVar1 != 0) {
    uVar2 = fn_82DC73A8(*(undefined2 *)(iVar1 + 2));
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar1,uVar2);
  }
  fn_82DAC7C8(param_1 + 3);
  *param_1 = &lbl_8212FC60;
  return;
}


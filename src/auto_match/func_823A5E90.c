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
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_8239C468();
extern unsigned int lbl_821CC160;


void fn_823A5E90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = lbl_821CC160;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined4 *)(iVar1 + 200) = uVar2;
  *(undefined4 *)(iVar1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc4) = uVar2;
  fn_823598B0(*(undefined4 *)(param_1 + 8),0);
  fn_82359928(*(undefined4 *)(param_1 + 8),0);
  fn_8239C468(*(undefined4 *)(param_1 + 8),1);
  return;
}


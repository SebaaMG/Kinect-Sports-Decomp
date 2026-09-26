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
extern int fn_8250E5E0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern unsigned int lbl_821917B4;


void fn_8234E660(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = fn_8250E5E0(param_1 + 0xc,*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = *(int **)(iVar1 + 0xc);
  piVar2[0x61] = lbl_821917B4;
  (**(code **)(*piVar2 + 0x14))(piVar2,uVar3);
  fn_827F21F0(*(undefined4 *)(iVar1 + 0xc));
  fn_827F2220(*(undefined4 *)(iVar1 + 0xc));
  return;
}


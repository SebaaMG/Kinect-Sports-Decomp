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
extern int fn_8229AC50();
extern int fn_822A0E10();
extern int fn_823985A8();
extern int fn_8239CE98();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327656C;


void fn_823A3618(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fn_8239CE98(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 0x10) = iVar2;
  uVar1 = lbl_821CC160;
  if (iVar2 != 0) {
    uVar1 = lbl_8327656C;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_8229AC50(*(undefined4 *)(*(int *)(param_1 + 8) + 0xd4));
  fn_822A0E10(*(undefined4 *)(*(int *)(param_1 + 8) + 0xd4),0);
  fn_823985A8(*(undefined4 *)(param_1 + 8));
  return;
}


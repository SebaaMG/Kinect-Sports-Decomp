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
extern int fn_827B6118();
extern int fn_827B6200();
extern int fn_827B6310();


void fn_827B6E70(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  fn_827B6118(param_1 + 0x84);
  *(int *)(param_1 + 0x30) = param_1 + 0x30;
  *(int *)(param_1 + 0x34) = param_1 + 0x30;
  *(int *)(param_1 + 0x50) = param_1 + 0x3c;
  uVar2 = 0;
  *(int *)(param_1 + 0x54) = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      iVar3 = *(int *)(param_1 + 0x78) + iVar1;
      iVar1 = iVar1 + 0x30;
      *(int *)(iVar3 + 0x14) = iVar3 + 8;
      *(int *)(iVar3 + 0x18) = iVar3 + 8;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  fn_827B6200(param_1 + 0x1c);
  fn_827B6310(param_1 + 100);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


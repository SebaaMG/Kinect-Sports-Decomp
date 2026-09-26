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
extern int fn_82D00388();
extern unsigned int lbl_8214B274;
extern unsigned int lbl_832760A0;


undefined4 * fn_82E139C0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = &lbl_832760A0;
  *param_1 = &lbl_8214B274;
  *(undefined2 *)((int)param_1 + 6) = 1;
  uVar3 = 0;
  piVar2 = piVar4;
  iVar1 = lbl_832760A0;
  while (iVar1 != 0) {
    piVar2 = piVar2 + 1;
    uVar3 = uVar3 + 1;
    iVar1 = *piVar2;
  }
  iVar5 = 0;
  iVar1 = lbl_832760A0;
  while (iVar1 != 0) {
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    iVar1 = *piVar4;
  }
  param_1[3] = iVar5;
  param_1[2] = &lbl_832760A0;
  param_1[4] = uVar3 | 0x80000000;
  fn_82D00388(param_1 + 5,0);
  return param_1;
}


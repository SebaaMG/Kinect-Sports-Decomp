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
extern unsigned int lbl_821CC160;


/* WARNING: Removing unreachable block (ram,0x824e0a90) */

void fn_824E0A60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = lbl_821CC160;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    for (iVar3 = iVar1; iVar3 != *(int *)(param_1 + 0xc); iVar3 = iVar3 + 8) {
    }
    *(int *)(param_1 + 0xc) = iVar1;
    return;
  }
  return;
}


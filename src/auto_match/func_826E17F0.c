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
extern int fn_826D69D0();
extern unsigned int lbl_8200C8B4;


undefined4 * fn_826E17F0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar4 = (int *)(iVar1 + 8);
  uVar2 = param_2 + 10U & 0xfffffffc;
  if (*(uint *)(iVar1 + 0xc) < uVar2) {
    puVar3 = (undefined4 *)fn_826D69D0(piVar4);
  }
  else {
    puVar3 = (undefined4 *)*piVar4;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - uVar2;
    *piVar4 = (int)puVar3 + uVar2;
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_8200C8B4;
  }
  return puVar3;
}


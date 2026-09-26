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
extern int fn_8265C9E0();
extern unsigned int lbl_821BE9C4;
extern unsigned int lbl_821BEA3C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83297724;


undefined4 * fn_8248A420(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821BEA3C;
    puVar2[2] = 1;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[7] = iVar1;
      puVar2[3] = &lbl_821BE9C4;
      puVar2[4] = lbl_821CC160;
      puVar2[5] = lbl_83297724;
      lbl_83297724 = lbl_83297724 + 1;
      if (*(int *)(iVar1 + 0x20) == *(int *)(iVar1 + 0x24)) {
        iVar3 = *(int *)(iVar1 + 0x30);
        *(int *)(iVar1 + 0x30) = iVar3 + 1;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x24) + -4);
        if (*(int *)(iVar1 + 0x20) != *(int *)(iVar1 + 0x24)) {
          *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -4;
        }
      }
      puVar2[6] = iVar3;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 3;
  return param_1;
}


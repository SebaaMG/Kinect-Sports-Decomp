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


void fn_82FFFA70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (param_2 % 0xc1) * 4;
  iVar1 = *(int *)(iVar2 + param_1);
  iVar4 = 0;
  if (iVar1 == 0) {
    return;
  }
  do {
    iVar3 = iVar1;
    if (*(uint *)(iVar3 + 0xc) == param_2) {
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + -1;
        return;
      }
      *(undefined4 *)(iVar2 + param_1) = *(undefined4 *)(iVar3 + 8);
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + -1;
      return;
    }
    iVar1 = *(int *)(iVar3 + 8);
    iVar4 = iVar3;
  } while (*(int *)(iVar3 + 8) != 0);
  return;
}


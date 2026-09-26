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


void fn_82DBBA90(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if (iVar1 != param_2) {
      for (iVar2 = *(int *)(iVar1 + 0x14); iVar2 != param_2; iVar2 = *(int *)(iVar2 + 0x14)) {
        iVar1 = iVar2;
      }
      *(undefined4 *)(iVar1 + 0x14) = param_3;
      *(undefined2 *)(iVar1 + 0x12) = param_4;
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = param_3;
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    *(undefined2 *)(iVar2 + 0x10) = param_4;
    return;
  }
  return;
}


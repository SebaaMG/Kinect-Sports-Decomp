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


void fn_827CD520(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x40);
    do {
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))
                        (param_1,1,((ulonglong)uVar1 + 2 & 0x7fffffff) << 1);
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (iVar4 < *(int *)(param_1 + 100));
  }
  return;
}


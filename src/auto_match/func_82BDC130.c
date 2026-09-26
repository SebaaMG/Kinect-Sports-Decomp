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
extern int fn_82BD7C38();


void fn_82BDC130(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    piVar4 = (int *)(param_1 + 100);
    puVar3 = (undefined4 *)(param_1 + 0x50);
    do {
      fn_82BD7C38(*puVar3,0,0,0);
      while (iVar1 = *piVar4, iVar1 != 0) {
        if (iVar1 == piVar4[1]) {
          piVar4[1] = 0;
        }
        *piVar4 = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  while (iVar1 = *(int *)(param_1 + 0x74), iVar1 != 0) {
    if (iVar1 == *(int *)(param_1 + 0x78)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(int *)(param_1 + 0x74) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return;
}


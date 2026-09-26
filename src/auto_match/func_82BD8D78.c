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


void fn_82BD8D78(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x188);
  piVar2 = (int *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(short *)(param_1 + 0x44) = (short)(*(ulonglong *)(param_1 + 0x28) / 0x14);
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (iVar3 != 0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (iVar1 == *(int *)(param_1 + 0x18c)) {
          *(undefined4 *)(param_1 + 0x18c) = 0;
        }
        *piVar2 = *(int *)(iVar1 + 4);
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      if (*(int *)(param_1 + 0x184) == 0) {
        *(int *)(param_1 + 0x180) = iVar3;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x184) + 4) = iVar3;
      }
      *(int *)(param_1 + 0x184) = iVar3;
      iVar3 = *piVar2;
    } while (iVar3 != 0);
  }
  puVar4 = (undefined8 *)(param_1 + 0x48);
  lVar5 = 0x19;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = *(undefined8 *)(param_1 + 0x118);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


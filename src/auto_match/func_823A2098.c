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
extern unsigned int iStack_c;


void fn_823A2098(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iStack_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  iStack_c = (int)(longlong)*(float *)(iVar2 + 0x878);
  *(int *)(iVar2 + 0x970) = iStack_c + *(int *)(iVar2 + 0x970);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  uVar1 = (uint)*(float *)(*(int *)((*(int **)**(undefined4 **)(iVar2 + 8))[4] * 4 +
                                   **(int **)**(undefined4 **)(iVar2 + 8)) + 0x20);
  if (*(uint *)(iVar2 + 0x964) < uVar1) {
    *(uint *)(iVar2 + 0x964) = uVar1;
  }
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    uVar3 = *(uint *)(iVar2 + 0x968);
    if ((uVar1 < uVar3) || (uVar3 == 0)) {
      *(uint *)(iVar2 + 0x968) = uVar1;
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(int *)(iVar2 + 0x96c) = *(int *)(iVar2 + 0x96c) + 1;
  return;
}


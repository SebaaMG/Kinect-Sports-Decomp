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
extern unsigned int lbl_82005748;
extern unsigned int uStack_c;


void fn_823A69A8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uStack_c;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = (uint)*(float *)(*(int *)((*(int **)**(undefined4 **)(iVar2 + 8))[4] * 4 +
                                   **(int **)**(undefined4 **)(iVar2 + 8)) + 0x20);
  if (*(uint *)(iVar2 + 0x974) < uVar1) {
    *(uint *)(iVar2 + 0x974) = uVar1;
  }
  if (uVar1 != 0) {
    uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x97c);
    if ((uVar1 < uVar3) || (uVar3 == 0)) {
      *(uint *)(*(int *)(param_1 + 8) + 0x97c) = uVar1;
    }
  }
  fVar4 = lbl_82005748;
  *(int *)(*(int *)(param_1 + 8) + 0x980) = *(int *)(*(int *)(param_1 + 8) + 0x980) + 1;
  iVar2 = *(int *)(param_1 + 8);
  uStack_c = (uint)(longlong)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) * fVar4);
  if (*(uint *)(iVar2 + 0x978) < uStack_c) {
    *(uint *)(iVar2 + 0x978) = uStack_c;
  }
  iVar2 = *(int *)(param_1 + 8);
  uStack_c = (uint)(longlong)*(float *)(iVar2 + 0x878);
  *(uint *)(iVar2 + 0x984) = uStack_c + *(int *)(iVar2 + 0x984);
  return;
}


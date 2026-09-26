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


void fn_82388648(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iStack_c;
  
  iVar3 = *(int *)(param_1 + 8);
  fVar2 = *(float *)(*(int *)((*(int **)**(undefined4 **)(iVar3 + 8))[4] * 4 +
                             **(int **)**(undefined4 **)(iVar3 + 8)) + 0x20);
  *(int *)(iVar3 + 0xa84) = *(int *)(iVar3 + 0xa84) + 1;
  uVar1 = (uint)fVar2;
  uVar4 = *(uint *)(iVar3 + 0xa9c);
  if (*(uint *)(iVar3 + 0xa98) < uVar1) {
    *(uint *)(iVar3 + 0xa98) = uVar1;
    *(undefined4 *)
     (*(int *)((*(int **)**(undefined4 **)(iVar3 + 8))[4] * 4 +
              **(int **)**(undefined4 **)(iVar3 + 8)) + 0x1c) = 1;
  }
  if ((uVar1 != 0) && ((uVar1 < uVar4 || (uVar4 == 0)))) {
    *(uint *)(iVar3 + 0xa9c) = uVar1;
  }
  iStack_c = (int)(longlong)*(float *)(iVar3 + 0x208);
  *(int *)(iVar3 + 0xa8c) = iStack_c + *(int *)(iVar3 + 0xa8c);
  return;
}


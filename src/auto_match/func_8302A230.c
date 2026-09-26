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
extern unsigned int fStack_20;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern int fn_83029A58();
extern int fn_8302A198();
extern unsigned int lbl_82002AE0;


void fn_8302A230(int param_1)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  uVar1 = *(ushort *)(param_1 + 0x18);
  if ((int)(uint)uVar1 < (*(int **)(param_1 + 0x10))[1]) {
    iVar5 = **(int **)(param_1 + 0x10);
    iVar6 = (uint)uVar1 * 0x10 + iVar5;
    *(ushort *)(param_1 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((uint)uVar1 * 0x10 + iVar5);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 8);
    fn_83029A58(param_1,param_1 + 0x4c);
    iVar5 = (int)(((ulonglong)*(uint *)(iVar6 + 0xc) + 0x14 & 0xffffffff) / 0x15);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x3c) = iVar5;
  }
  bVar4 = true;
  if ((*(int *)(*(int *)(param_1 + 0x10) + 4) <= (int)(uint)*(ushort *)(param_1 + 0x18)) &&
     (iVar5 = fn_8302A198(param_1), iVar5 != 1)) {
    bVar4 = false;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (bVar4) {
    iVar5 = (uint)*(ushort *)(param_1 + 0x18) * 0x10 + **(int **)(param_1 + 0x10);
    fStack_28 = *(float *)((uint)*(ushort *)(param_1 + 0x18) * 0x10 + **(int **)(param_1 + 0x10));
    fStack_24 = *(float *)(iVar5 + 4);
    fStack_20 = *(float *)(iVar5 + 8);
    fn_83029A58(param_1,&fStack_28);
    fVar3 = lbl_82002AE0;
    uVar2 = *(uint *)(param_1 + 0x38);
    *(float *)(param_1 + 0x58) = fStack_28 - *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x60) = fStack_20 - *(float *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x3c) + uVar2;
    *(uint *)(param_1 + 0x34) = uVar2;
    fVar3 = fVar3 / (float)*(uint *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x40) = fVar3;
    *(float *)(param_1 + 0x5c) = fStack_24 - *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x44) = -((float)uVar2 * fVar3);
  }
  return;
}


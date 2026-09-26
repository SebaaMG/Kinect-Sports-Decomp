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
extern int fn_824329A8();
extern int fn_82434960();
extern int fn_8243D2D8();
extern int fn_82529320();
extern int fn_82F63CA0();


/* WARNING: Removing unreachable block (ram,0x8244d030) */
/* WARNING: Removing unreachable block (ram,0x8244d098) */
/* WARNING: Removing unreachable block (ram,0x8244d09c) */

void fn_8244CF38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if ((*(int *)(param_1 + 0x14) == 7) || (*(int *)(param_1 + 0x14) == 8)) {
    fn_8243D2D8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821b9fb4,0,0);
  }
  iVar3 = *(int *)(param_1 + 0x44);
  uVar4 = 0;
  piVar5 = (int *)(iVar3 + 0x3c);
  if (*(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2 != 0) {
    iVar3 = 0;
    do {
      fn_82529320(*(undefined4 *)(iVar3 + *piVar5),0);
      iVar1 = *(int *)(param_1 + 0x44);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      piVar5 = (int *)(iVar1 + 0x3c);
    } while (uVar4 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
  }
  iVar3 = *piVar5;
  if (iVar3 != piVar5[1]) {
    fn_82F63CA0(iVar3,piVar5[1],0);
    piVar5[1] = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(iVar3 + 0xb8);
  if (iVar1 != *(int *)(iVar3 + 0xbc)) {
    for (iVar2 = iVar1; iVar2 != *(int *)(iVar3 + 0xbc); iVar2 = iVar2 + 0x18) {
    }
    *(int *)(iVar3 + 0xbc) = iVar1;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(iVar3 + 200);
  if (iVar1 != *(int *)(iVar3 + 0xcc)) {
    for (iVar2 = iVar1; iVar2 != *(int *)(iVar3 + 0xcc); iVar2 = iVar2 + 8) {
    }
    *(int *)(iVar3 + 0xcc) = iVar1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 4) = 0;
  fn_824329A8((ulonglong)*(uint *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,1);
  fn_82434960(param_1);
  return;
}


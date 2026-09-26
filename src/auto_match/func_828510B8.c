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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201F5AC;
extern unsigned int uStack_9;


void fn_828510B8(double param_1,int param_2,int param_3,int param_4,int param_5,undefined8 param_6
                  ,int param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  double dVar6;
  undefined1 uStack_9;
  
  puVar4 = (uint *)(*(int *)(param_2 + 0x17c) + param_4 * 0x14);
  uVar3 = puVar4[1];
  iVar2 = param_5 * 0x10 + uVar3;
  if (*(uint *)(iVar2 + 4) == 0) {
    return;
  }
  dVar6 = (double)*(uint *)(iVar2 + 4);
  if ((param_5 + 1U < *puVar4) && (uVar3 = *(uint *)((param_5 + 1U) * 0x10 + uVar3 + 4), uVar3 != 0)
     ) {
    dVar6 = (double)(float)((double)(float)((double)uVar3 - dVar6) * param_1 + dVar6);
  }
  uVar3 = 0;
  if (*(int *)(iVar2 + 8) == 0) {
    return;
  }
  iVar5 = 0;
  uStack_9 = (undefined1)
             (longlong)
             ((double)(float)(dVar6 - (double)lbl_82002AE0) * (double)lbl_8201F5AC +
             (double)lbl_82002AE0);
  do {
    uVar3 = uVar3 + 1;
    piVar1 = (int *)(*(int *)(iVar2 + 0xc) + iVar5);
    iVar5 = iVar5 + 4;
    *(undefined1 *)(*(int *)(*piVar1 + 8) + *(int *)((param_7 + 4) * 4 + param_3)) = uStack_9;
  } while (uVar3 < *(uint *)(iVar2 + 8));
  return;
}


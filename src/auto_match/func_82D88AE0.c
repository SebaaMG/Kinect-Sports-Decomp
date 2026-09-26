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
extern unsigned int *auStack_44;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DAD6F8();
extern int fn_82DAF6D0();
extern unsigned int iStack_4c;
extern unsigned int uStack_48;


void fn_82D88AE0(int param_1,int *param_2)

{
  ushort uVar3;
  int iVar1;
  int iVar2;
  int iVar4;
  undefined4 *puVar5;
  int iVar7;
  longlong lVar6;
  undefined1 *puStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined1 auStack_44 [68];
  
  fn_82CE4040(param_2);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  fn_82DAD6F8(param_1,param_2);
  puStack_50 = auStack_44;
  uStack_48 = 0x80000004;
  iStack_4c = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&puStack_50);
  iVar2 = 0;
  if (0 < iStack_4c) {
    iVar4 = 0;
    do {
      iVar7 = 0;
      iVar1 = *(int *)(puStack_50 + iVar4);
      if (*(ushort *)(iVar1 + 0x20c) != 0) {
        puVar5 = *(undefined4 **)(iVar1 + 0x208);
        do {
          if ((int *)*puVar5 == param_2) goto LAB_82d88ba0;
          iVar7 = iVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar7 < (int)(uint)*(ushort *)(iVar1 + 0x20c));
      }
      iVar7 = -1;
LAB_82d88ba0:
      iVar2 = iVar2 + 1;
      uVar3 = *(short *)(iVar1 + 0x20c) - 1;
      iVar4 = iVar4 + 4;
      *(ushort *)(iVar1 + 0x20c) = uVar3;
      *(undefined4 *)(iVar7 * 4 + *(int *)(iVar1 + 0x208)) =
           *(undefined4 *)((uint)uVar3 * 4 + *(int *)(iVar1 + 0x208));
    } while (iVar2 < iStack_4c);
  }
  iVar2 = param_2[3];
  fn_82DAF6D0(iVar2,param_2);
  param_2[2] = 0;
  fn_82CE4118(param_2);
  iVar4 = *(int *)(iVar2 + 0x18);
  if (*(short *)(iVar2 + 0x22) == -1) {
    *(short *)(iVar2 + 0x22) = (short)*(undefined4 *)(iVar4 + 0x44);
    iVar1 = fn_82CE5410();
    if (*(uint *)(iVar4 + 0x44) == (*(uint *)(iVar4 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(iVar4 + 0x40),4);
    }
    *(int *)(*(int *)(iVar4 + 0x44) * 4 + *(int *)(iVar4 + 0x40)) = iVar2;
    *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
  }
  iVar2 = fn_82CE5410();
  iStack_4c = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),puStack_50,uStack_48 & 0x3fffffff,4);
  }
  puStack_50 = (undefined1 *)0x0;
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
  uStack_48 = 0x80000000;
  *(int *)(param_1 + 0x94) = (int)lVar6;
  if ((lVar6 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
    }
  }
  fn_82CE4118(param_2);
  return;
}


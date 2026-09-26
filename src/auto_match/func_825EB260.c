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
extern int fn_8254A870();
extern int fn_82553008();
extern unsigned int lbl_821CC160;


void fn_825EB260(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  
  uVar2 = *(uint *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar5 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    iVar6 = 0;
    dVar8 = (double)lbl_821CC160;
    do {
      iVar3 = *(int *)(param_1 + 0x10) + 3;
      piVar7 = (int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 8)) + iVar6);
      if ((((piVar7[2] != 0) || (piVar7[3] != 0)) || (piVar7[4] != 0)) || (piVar7[5] != 0)) {
        fn_82553008((ulonglong)*(uint *)*piVar7 + 0x20,(uint *)*piVar7 + iVar3 * 4);
        piVar1 = (int *)*piVar7;
        if ((piVar1[*(int *)(param_1 + 0x10) + 0x1e] & 0x1000U) != 0) {
          iVar3 = *piVar1;
          pfVar4 = (float *)(piVar1 + (*(int *)(param_1 + 0x10) + 5) * 4);
          *(undefined8 *)(iVar3 + 0x40) = *(undefined8 *)pfVar4;
          *(undefined8 *)(iVar3 + 0x48) = *(undefined8 *)(pfVar4 + 2);
          fn_8254A870((double)*pfVar4,(double)pfVar4[1],(double)pfVar4[2]);
        }
        (**(code **)(**(int **)(*(int *)*piVar7 + 0x1a8) + 0xc))
                  (*(int **)(*(int *)*piVar7 + 0x1a8),*(undefined4 *)(param_1 + 0x10));
        piVar7 = (int *)*piVar7;
        (**(code **)(**(int **)(*piVar7 + 0x1a8) + 4))
                  ((double)*(float *)(*(int *)(param_1 + 4) + 0xae0),
                   (double)*(float *)(param_1 + 0x38),dVar8,*(int **)(*piVar7 + 0x1a8),
                   *(int *)(param_1 + 0x10),
                   *(int *)(param_1 + 0x10) * 0x200 + *(int *)(param_1 + 4) + 0x50,piVar7[2],
                   piVar7[*(int *)(param_1 + 0x10) + 0x1e],0,
                   -(ulonglong)((piVar7[*(int *)(param_1 + 0x10) + 0x1e] & 0x100U) == 0));
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar5 != 0);
  }
  return;
}


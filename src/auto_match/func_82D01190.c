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
extern int fn_82CE5410();
extern int fn_82D00FB0();
extern int fn_82F68CC0();


void fn_82D01190(int *param_1)

{
  uint uVar1;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar2;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  
  iVar5 = param_1[2];
  if (1 < iVar5) {
    iVar3 = fn_82CE5410();
    piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x14) + 4))(*(int **)(iVar3 + 0x14),iVar5 << 2);
    iVar5 = 0;
    if (0 < param_1[2]) {
      iVar3 = 0;
      do {
        iVar5 = iVar5 + 1;
        *(int *)(iVar3 + (int)piVar4) = iVar3 + *param_1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < param_1[2]);
    }
    if (1 < param_1[2]) {
      fn_82D00FB0(piVar4,0,(ulonglong)(uint)param_1[2] - 1,0xffffffff82d010e8);
    }
    iVar5 = param_1[2];
    iVar3 = fn_82CE5410();
    iVar5 = (**(code **)(**(int **)(iVar3 + 0x14) + 4))(*(int **)(iVar3 + 0x14),iVar5 << 2);
    uVar1 = param_1[2];
    iVar3 = fn_82CE5410();
    lVar2 = (**(code **)(**(int **)(iVar3 + 0x14) + 4))
                      (*(int **)(iVar3 + 0x14),
                       ((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x1fffffff) * 8 & 0x1fffffff) << 3);
    iVar3 = 0;
    if (0 < param_1[2]) {
      lVar8 = lVar2;
      piVar9 = piVar4;
      do {
        *(undefined4 *)((iVar5 - (int)piVar4) + (int)piVar9) = *(undefined4 *)*piVar9;
        uVar1 = *piVar9 - *param_1 >> 2;
        fn_82F68CC0(lVar8,((longlong)(int)uVar1 + ((ulonglong)uVar1 & 0x1fffffff) * 8 & 0x1fffffff)
                           * 8 + (ulonglong)(uint)param_1[1],0x48);
        iVar3 = iVar3 + 1;
        piVar9 = piVar9 + 1;
        lVar8 = lVar8 + 0x48;
      } while (iVar3 < param_1[2]);
    }
    iVar3 = param_1[2];
    iVar6 = fn_82CE5410();
    (**(code **)(**(int **)(iVar6 + 0x14) + 8))(*(int **)(iVar6 + 0x14),piVar4,iVar3 << 2);
    iVar3 = param_1[2];
    iVar6 = *param_1;
    iVar7 = fn_82CE5410();
    (**(code **)(**(int **)(iVar7 + 0x14) + 8))(*(int **)(iVar7 + 0x14),iVar6,iVar3 << 2);
    uVar1 = param_1[2];
    iVar3 = param_1[1];
    iVar6 = fn_82CE5410();
    (**(code **)(**(int **)(iVar6 + 0x14) + 8))
              (*(int **)(iVar6 + 0x14),iVar3,
               ((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x1fffffff) * 8 & 0x1fffffff) << 3);
    *param_1 = iVar5;
    param_1[1] = (int)lVar2;
  }
  return;
}


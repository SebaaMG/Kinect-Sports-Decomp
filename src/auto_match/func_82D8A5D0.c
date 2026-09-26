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


void fn_82D8A5D0(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)(param_1 + 0x98);
  if (puVar8 != (undefined4 *)0x0) {
    iVar5 = 0;
    if (*(ushort *)(param_1 + 0x204) != 0) {
      piVar7 = *(int **)(param_1 + 0x200);
      do {
        if ((undefined4 *)*piVar7 == puVar8 + 2) goto LAB_82d8a628;
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x204));
    }
    iVar5 = -1;
LAB_82d8a628:
    *(undefined4 *)(iVar5 * 4 + *(int *)(param_1 + 0x200)) = 0;
    (**(code **)*puVar8)(puVar8,1);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 100) == 0) {
    iVar5 = fn_82CE5410();
    piVar7 = *(int **)(iVar5 + 0x10);
    *(undefined4 *)(param_1 + 100) = 0;
    if ((*(uint *)(param_1 + 0x68) & 0x80000000) == 0) {
      (**(code **)(*piVar7 + 0x10))
                (piVar7,*(undefined4 *)(param_1 + 0x60),*(uint *)(param_1 + 0x68) & 0x3fffffff,8);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x80000000;
  }
  if (*(short *)(param_1 + 0xb0) == 0) {
    uVar1 = *(ushort *)(param_1 + 0xb2);
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xac);
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))
                (*(int **)(iVar5 + 0x10),uVar2,
                 (((ulonglong)uVar1 & 0x3fff) + ((ulonglong)uVar1 & 0x3fff) * 2) * 0x10);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(ushort *)(param_1 + 0xb2) = *(ushort *)(param_1 + 0xb2) & 0x4000 | 0x8000;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    iVar5 = fn_82CE5410();
    piVar7 = *(int **)(iVar5 + 0x10);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if ((*(uint *)(param_1 + 0xbc) & 0x80000000) == 0) {
      (**(code **)(*piVar7 + 0x10))
                (piVar7,*(undefined4 *)(param_1 + 0xb4),*(uint *)(param_1 + 0xbc) & 0x3fffffff,4);
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar5 = fn_82CE5410();
    piVar7 = *(int **)(iVar5 + 0x10);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if ((*(uint *)(param_1 + 200) & 0x80000000) == 0) {
      (**(code **)(*piVar7 + 0x10))
                (piVar7,*(undefined4 *)(param_1 + 0xc0),*(uint *)(param_1 + 200) & 0x3fffffff,1);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 200) = 0x80000000;
  }
  bVar3 = false;
  iVar5 = 0;
  if (*(short *)(param_1 + 0x204) != 0) {
    piVar7 = *(int **)(param_1 + 0x200);
    do {
      if (*piVar7 != 0) {
        bVar3 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x204));
  }
  if (!bVar3) {
    uVar1 = *(ushort *)(param_1 + 0x206);
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x200);
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))
                (*(int **)(iVar5 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
    }
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined2 *)(param_1 + 0x204) = 0;
    *(ushort *)(param_1 + 0x206) = *(ushort *)(param_1 + 0x206) & 0x4000 | 0x8000;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x214);
  bVar3 = false;
  if (puVar8 != (undefined4 *)0x0) {
    iVar5 = 0;
    if (*(short *)(puVar8 + 1) != 0) {
      piVar7 = (int *)*puVar8;
      do {
        if (*piVar7 != 0) {
          bVar3 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < (int)(uint)*(ushort *)(puVar8 + 1));
    }
    if (!bVar3) {
      uVar1 = *(ushort *)((int)puVar8 + 6);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = *puVar8;
        iVar5 = fn_82CE5410();
        (**(code **)(**(int **)(iVar5 + 0x10) + 8))
                  (*(int **)(iVar5 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
      }
      *puVar8 = 0;
      *(undefined2 *)(puVar8 + 1) = 0;
      *(ushort *)((int)puVar8 + 6) = *(ushort *)((int)puVar8 + 6) & 0x4000 | 0x8000;
    }
  }
  iVar5 = *(int *)(param_1 + 0x214);
  bVar4 = false;
  if (iVar5 != 0) {
    puVar8 = (undefined4 *)(iVar5 + 8);
    iVar6 = 0;
    if (*(short *)(iVar5 + 0xc) != 0) {
      piVar7 = (int *)*puVar8;
      do {
        if (*piVar7 != 0) {
          bVar4 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 < (int)(uint)*(ushort *)(iVar5 + 0xc));
    }
    if (!bVar4) {
      uVar1 = *(ushort *)(iVar5 + 0xe);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = *puVar8;
        iVar6 = fn_82CE5410();
        (**(code **)(**(int **)(iVar6 + 0x10) + 8))
                  (*(int **)(iVar6 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
      }
      *puVar8 = 0;
      *(undefined2 *)(iVar5 + 0xc) = 0;
      *(ushort *)(iVar5 + 0xe) = *(ushort *)(iVar5 + 0xe) & 0x4000 | 0x8000;
    }
  }
  if ((!bVar3) && (!bVar4)) {
    puVar8 = *(undefined4 **)(param_1 + 0x214);
    if (puVar8 != (undefined4 *)0x0) {
      uVar1 = *(ushort *)((int)puVar8 + 0xe);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = puVar8[2];
        iVar5 = fn_82CE5410();
        (**(code **)(**(int **)(iVar5 + 0x10) + 8))
                  (*(int **)(iVar5 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
      }
      uVar1 = *(ushort *)((int)puVar8 + 6);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = *puVar8;
        iVar5 = fn_82CE5410();
        (**(code **)(**(int **)(iVar5 + 0x10) + 8))
                  (*(int **)(iVar5 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
      }
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),puVar8,0x10);
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  if (*(short *)(param_1 + 0x20c) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x20e);
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x208);
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))
                (*(int **)(iVar5 + 0x10),uVar2,((ulonglong)uVar1 & 0x3fff) << 2);
    }
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined2 *)(param_1 + 0x20c) = 0;
    *(ushort *)(param_1 + 0x20e) = *(ushort *)(param_1 + 0x20e) & 0x4000 | 0x8000;
  }
  return;
}


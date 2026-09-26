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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_826EF920();
extern unsigned int stack0x00000000;


void fn_826F0840(int param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar8;
  ulonglong uVar5;
  int iVar6;
  char cVar9;
  int iVar7;
  longlong lVar10;
  char cVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  
  uVar4 = ZEXT48(&stack0x00000000);
  puVar16 = (uint *)(param_1 + 0x24);
  if (param_2 < 0x10) {
    puVar13 = puVar16 + param_2 * 3 + 4;
  }
  else {
    puVar13 = (uint *)((param_2 - 0x10) * 0xc + *(int *)(param_1 + 0x28));
  }
  if (*puVar13 != 2) {
    return;
  }
  if (param_2 < 0x10) {
    puVar13 = puVar16 + param_2 * 3 + 4;
  }
  else {
    puVar13 = (uint *)((param_2 - 0x10) * 0xc + *(int *)(param_1 + 0x28));
  }
  piVar1 = (int *)puVar13[1];
  bVar8 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (bVar8 == 0) goto LAB_826f0fec;
  if ((bVar8 & 2) != 0) {
    uVar14 = param_2 - 1;
    bVar3 = false;
    if (uVar14 != 0xffffffff) {
      iVar7 = uVar14 * 0xc;
      do {
        if (bVar3) break;
        if (uVar14 < 0x10) {
          piVar12 = (int *)((int)puVar16 + iVar7 + 0x10);
        }
        else {
          piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar7 + -0xc0);
        }
        if (*piVar12 == 0) {
          cVar9 = fn_826EF920(uVar4 - 0xb0);
          if (cVar9 == '\0') {
            lVar10 = uVar4 - 0xa8;
            goto LAB_826f0a78;
          }
        }
        else if (*piVar12 == 2) {
          if (uVar14 < 0x10) {
            iVar6 = (int)puVar16 + iVar7 + 0x10;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x28) + iVar7 + -0xc0;
          }
          piVar12 = *(int **)(iVar6 + 4);
          uVar5 = (**(code **)(*piVar12 + 0x18))(piVar12);
          if ((uVar5 & 4) == 0) {
            uVar5 = (**(code **)(*piVar12 + 0x18))(piVar12);
            if (((uVar5 & 8) != 0) && (iVar6 = (**(code **)(*piVar12 + 0x2c))(piVar12), iVar6 == 2))
            {
              lVar10 = uVar4 - 0xb8;
              goto LAB_826f0a78;
            }
            fn_826F0840(param_1,uVar14);
            (**(code **)(*piVar12 + 0x10))(uVar4 - 0x78,piVar12);
            cVar9 = fn_826EF920();
            if (cVar9 != '\0') goto LAB_826f0a90;
            iVar6 = *piVar1;
            lVar10 = (**(code **)(*piVar12 + 0x10))(uVar4 - 0x70,piVar12);
            pcVar2 = *(code **)(iVar6 + 0x1c);
          }
          else {
            lVar10 = uVar4 - 0xc0;
LAB_826f0a78:
            pcVar2 = *(code **)(*piVar1 + 0x1c);
          }
          (*pcVar2)(piVar1,lVar10);
          bVar3 = true;
        }
LAB_826f0a90:
        uVar14 = uVar14 - 1;
        iVar7 = iVar7 + -0xc;
      } while (uVar14 != 0xffffffff);
    }
    if (!bVar3) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,uVar4 - 0xa0);
    }
  }
  if ((bVar8 & 1) != 0) {
    uVar14 = param_2 - 1;
    bVar3 = false;
    if (uVar14 != 0xffffffff) {
      iVar7 = uVar14 * 0xc;
      do {
        if (bVar3) break;
        if (uVar14 < 0x10) {
          piVar12 = (int *)((int)puVar16 + iVar7 + 0x10);
        }
        else {
          piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar7 + -0xc0);
        }
        if (*piVar12 == 0) {
          cVar9 = fn_826EF920(uVar4 - 0xb0);
          if (cVar9 == '\0') {
            lVar10 = uVar4 - 0x98;
            pcVar2 = *(code **)(*piVar1 + 0x1c);
LAB_826f0c04:
            (*pcVar2)(piVar1,lVar10);
            bVar3 = true;
          }
        }
        else if (*piVar12 == 2) {
          if (uVar14 < 0x10) {
            iVar6 = (int)puVar16 + iVar7 + 0x10;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x28) + iVar7 + -0xc0;
          }
          piVar12 = *(int **)(iVar6 + 4);
          (**(code **)(*piVar12 + 0x18))(piVar12);
          fn_826F0840(param_1,uVar14);
          (**(code **)(*piVar12 + 0x10))(uVar4 - 0x70,piVar12);
          cVar9 = fn_826EF920();
          if (cVar9 == '\0') {
            iVar6 = *piVar1;
            lVar10 = (**(code **)(*piVar12 + 0x10))(uVar4 - 0x78,piVar12);
            pcVar2 = *(code **)(iVar6 + 0x1c);
            goto LAB_826f0c04;
          }
        }
        uVar14 = uVar14 - 1;
        iVar7 = iVar7 + -0xc;
      } while (uVar14 != 0xffffffff);
    }
    if (!bVar3) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,uVar4 - 0x90);
    }
  }
  if ((bVar8 & 4) != 0) {
    uVar14 = *puVar16;
    uVar15 = param_2 + 1;
    bVar3 = false;
    if (uVar15 < uVar14) {
      iVar7 = uVar15 * 0xc;
      do {
        if (bVar3) break;
        if (uVar15 < 0x10) {
          piVar12 = (int *)((int)puVar16 + iVar7 + 0x10);
        }
        else {
          piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar7 + -0xc0);
        }
        if (*piVar12 == 0) {
          cVar9 = fn_826EF920(uVar4 - 0xb0);
          if (cVar9 == '\0') {
            lVar10 = uVar4 - 0x88;
            pcVar2 = *(code **)(*piVar1 + 0x24);
LAB_826f0d8c:
            (*pcVar2)(piVar1,lVar10);
            bVar3 = true;
          }
        }
        else if (*piVar12 == 2) {
          if (uVar15 < 0x10) {
            iVar6 = (int)puVar16 + iVar7 + 0x10;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x28) + iVar7 + -0xc0;
          }
          piVar12 = *(int **)(iVar6 + 4);
          (**(code **)(*piVar12 + 0x18))(piVar12);
          fn_826F0840(param_1,uVar15);
          (**(code **)(*piVar12 + 0x10))(uVar4 - 0x70,piVar12);
          cVar9 = fn_826EF920();
          if (cVar9 == '\0') {
            iVar6 = *piVar1;
            lVar10 = (**(code **)(*piVar12 + 0x10))(uVar4 - 0x78,piVar12);
            pcVar2 = *(code **)(iVar6 + 0x24);
            goto LAB_826f0d8c;
          }
        }
        uVar15 = uVar15 + 1;
        iVar7 = iVar7 + 0xc;
      } while (uVar15 < uVar14);
    }
    if (!bVar3) {
      (**(code **)(*piVar1 + 0x24))(piVar1,uVar4 - 0x80);
    }
  }
  if ((bVar8 & 8) == 0) goto LAB_826f0fec;
  bVar3 = false;
  iVar7 = (**(code **)(*piVar1 + 0x2c))(piVar1);
  if (iVar7 == 1) {
    param_2 = param_2 - 1;
    if (param_2 != 0xffffffff) {
      iVar7 = param_2 * 0xc;
      do {
        if (param_2 < 0x10) {
          piVar12 = (int *)((int)puVar16 + iVar7 + 0x10);
        }
        else {
          piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar7 + -0xc0);
        }
        if (*piVar12 == 2) goto LAB_826f0f7c;
        param_2 = param_2 - 1;
        iVar7 = iVar7 + -0xc;
      } while (param_2 != 0xffffffff);
    }
LAB_826f0f80:
    if (!bVar3) goto LAB_826f0fec;
    if (param_2 < 0x10) {
      puVar16 = puVar16 + param_2 * 3 + 4;
    }
    else {
      puVar16 = (uint *)((param_2 - 0x10) * 0xc + *(int *)(param_1 + 0x28));
    }
    piVar12 = (int *)puVar16[1];
    (**(code **)(*piVar12 + 0x18))(piVar12);
    fn_826F0840(param_1,param_2);
  }
  else {
    if (iVar7 == 2) {
      param_2 = param_2 + 1;
      if (param_2 < *puVar16) {
        iVar7 = param_2 * 0xc;
        do {
          if (param_2 < 0x10) {
            piVar12 = (int *)((int)puVar16 + iVar7 + 0x10);
          }
          else {
            piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar7 + -0xc0);
          }
          if (*piVar12 == 2) goto LAB_826f0f7c;
          param_2 = param_2 + 1;
          iVar7 = iVar7 + 0xc;
        } while (param_2 < *puVar16);
      }
      goto LAB_826f0f80;
    }
    if (iVar7 != 3) goto LAB_826f0fec;
    cVar9 = (**(code **)(*piVar1 + 0x30))(piVar1);
    cVar11 = '\0';
    uVar14 = 0;
    if (*puVar16 != 0) {
      iVar7 = 0;
      do {
        if (uVar14 < 0x10) {
          piVar12 = (int *)((int)puVar16 + iVar7 + 0x10);
        }
        else {
          piVar12 = (int *)(*(int *)(param_1 + 0x28) + iVar7 + -0xc0);
        }
        if (*piVar12 == 2) {
          if (cVar11 == cVar9) {
            bVar3 = true;
            break;
          }
          cVar11 = cVar11 + '\x01';
        }
        uVar14 = uVar14 + 1;
        iVar7 = iVar7 + 0xc;
      } while (uVar14 < *puVar16);
    }
    if (!bVar3) goto LAB_826f0fec;
    if (uVar14 < 0x10) {
      puVar16 = puVar16 + uVar14 * 3 + 4;
    }
    else {
      puVar16 = (uint *)((uVar14 - 0x10) * 0xc + *(int *)(param_1 + 0x28));
    }
    piVar12 = (int *)puVar16[1];
    ((int (*)())fn_826F0840)(param_1);
  }
  (**(code **)(*piVar1 + 0x34))(piVar1,piVar12);
LAB_826f0fec:
  if (*(char *)(piVar1 + 2) == '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return;
LAB_826f0f7c:
  bVar3 = true;
  goto LAB_826f0f80;
}


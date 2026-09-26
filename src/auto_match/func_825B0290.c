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
extern int fn_8251F720();
extern int fn_82569C38();
extern int fn_82569CF8();
extern int fn_8265BF48();
extern int fn_828387B8();
extern int fn_82F65390();
extern unsigned int iStack_40;


int fn_825B0290(int param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iStack_40;
  int aiStack_3c [15];
  
  puVar14 = (undefined4 *)(*param_2 + param_3);
  iVar5 = *(int *)(*param_2 + param_3);
  if ((iVar5 == 0) || (iVar5 = fn_82F65390(iVar5,0xffffffff821c81b4,9), iVar5 != 0)) {
    return 0;
  }
  iStack_40 = puVar14[3];
  if (iStack_40 == 0) {
    iStack_40 = fn_8265BF48(*puVar14,0);
    puVar14[3] = iStack_40;
  }
  iVar5 = 0;
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar10 = 0;
    do {
      iVar7 = iVar10 + *(int *)(param_1 + 4);
      iVar15 = *(int *)(iVar7 + 0x14);
      if (iVar15 == 0) {
LAB_825b0390:
        iVar13 = iVar13 * 0x20 + *(int *)(param_1 + 4);
        if (iVar13 != 0) {
          iVar10 = *(int *)(param_1 + 0x10);
          pcVar6 = (char *)0x0;
          iVar15 = *(int *)(*(int *)(iVar10 + 4) + 0x34);
          if (iVar15 == 0) goto LAB_825b0474;
          uVar3 = *(uint *)(*(int *)(iVar10 + 4) + 0x2c);
          uVar8 = 0;
          if (uVar3 == 0) goto LAB_825b0474;
          iVar7 = 0;
          goto LAB_825b040c;
        }
        break;
      }
      if ((iVar7 == 0) || (iVar15 == 0)) {
        bVar4 = false;
      }
      else if ((*(int *)(iVar15 + 0x14) == iStack_40) ||
              (bVar4 = false, *(int *)(iVar15 + 0x18) == iStack_40)) {
        bVar4 = true;
      }
      if ((bVar4) || (*(int *)(*(int *)(iVar7 + 0x14) + 4) == 0)) goto LAB_825b0390;
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 0x20;
    } while (iVar13 < *(int *)(param_1 + 8));
  }
  iVar5 = fn_8251F720(&iStack_40,0);
  iVar5 = *(int *)(iVar5 + 0x14);
  fn_828387B8(iVar5,aiStack_3c);
  if (*(int *)(iVar5 + 0x2c) == 0) {
    return iVar5;
  }
  *(uint *)(aiStack_3c[0] + 0x2c) = *(uint *)(aiStack_3c[0] + 0x2c) & 0xffffffc3 | 4;
  return iVar5;
LAB_825b040c:
  do {
    if (((undefined4 *)(iVar7 + iVar15))[1] != 0) {
      pcVar12 = *(char **)(iVar7 + iVar15);
      pcVar11 = *(char **)param_2[0xc];
      do {
        cVar1 = *pcVar11;
        cVar2 = *pcVar12;
        if (cVar1 == '\0') break;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        pcVar6 = *(char **)(uVar8 * 8 + iVar15 + 4);
        break;
      }
    }
    uVar8 = uVar8 + 1;
    iVar7 = iVar7 + 8;
  } while (uVar8 < uVar3);
LAB_825b0474:
  iVar15 = *(int *)(iVar10 + 0x14);
  if (pcVar6 != (char *)0x0) {
    iVar7 = 0;
    if (0 < *(int *)(iVar10 + 0x18)) {
      iVar9 = 0;
      do {
        pcVar12 = *(char **)(iVar9 + iVar15 + 0x14);
        pcVar11 = pcVar6;
        do {
          cVar1 = *pcVar12;
          cVar2 = *pcVar11;
          if (cVar1 == '\0') break;
          pcVar12 = pcVar12 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          iVar15 = iVar7 * 0x18 + iVar15;
          break;
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 0x18;
      } while (iVar7 < *(int *)(iVar10 + 0x18));
    }
  }
  fn_82569C38(&iStack_40,iVar13,0);
  fn_82569CF8(iVar15,iVar13);
  if (*(int *)(iVar13 + 0x14) != 0) {
    iVar5 = *(int *)(*(int *)(iVar13 + 0x14) + 0x10);
  }
  return iVar5;
}


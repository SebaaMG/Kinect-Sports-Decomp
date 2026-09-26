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
extern int fn_82A1F2F8();
extern int fn_82A23760();
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219B9C;
extern unsigned int lbl_83219C04;
extern unsigned int lbl_83219C08;


void fn_82A23CB0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  
LAB_82a23cc4:
  while( true ) {
    RtlEnterCriticalSection(0xffffffff83219ba0);
    iVar4 = 0;
    puVar8 = &lbl_83219C04;
    while ((undefined4 *)*puVar8 == puVar8) {
      puVar8 = puVar8 + 2;
      iVar4 = iVar4 + 1;
      if ((undefined4 *)((int)&lbl_83219C08 + 3) < puVar8) goto LAB_82a23ed0;
    }
    piVar11 = &lbl_83219C04 + iVar4 * 2;
    piVar2 = (int *)(&lbl_83219C04)[iVar4 * 2];
    iVar4 = *piVar2;
    piVar1 = (int *)piVar2[1];
    *piVar1 = iVar4;
    *(int **)(iVar4 + 4) = piVar1;
    if (piVar2 == (int *)0x0) goto LAB_82a23ed0;
    iVar4 = fn_82A23760(piVar2);
    piVar1 = lbl_83219B9C;
    if (iVar4 == 0) break;
    if (piVar2[2] == 0) {
      iVar4 = piVar2[8];
      if (iVar4 != 0) goto LAB_82a23de8;
      piVar11 = lbl_83219B9C + 3;
      RtlEnterCriticalSection(piVar11);
      uVar6 = piVar1[1];
      uVar7 = 0;
      if (uVar6 != 0) {
        iVar9 = 0;
        do {
          iVar3 = *(int *)(iVar9 + *piVar1);
          if (*(int *)(iVar3 + 0x30) == 0) {
            *(undefined4 *)(iVar3 + 0x30) = 1;
            iVar4 = iVar3;
            break;
          }
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 4;
        } while (uVar7 < uVar6);
      }
      RtlLeaveCriticalSection(piVar11);
      if (iVar4 != 0) goto LAB_82a23de8;
      RtlLeaveCriticalSection(0xffffffff83219ba0);
      piVar2[5] = -0x3fffffff;
      goto LAB_82a23ea8;
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
  }
  iVar4 = *piVar11;
  piVar2[1] = (int)piVar11;
  *piVar2 = iVar4;
  *(int **)(iVar4 + 4) = piVar2;
  *piVar11 = (int)piVar2;
LAB_82a23ed0:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
LAB_82a23de8:
  uVar10 = (ulonglong)*(uint *)(iVar4 + 0x1c);
  iVar9 = *(int *)piVar2[3];
  uVar6 = *(uint *)(iVar9 + 8);
  if ((longlong)(ulonglong)uVar6 < (longlong)(uVar10 + *(ulonglong *)(piVar2 + 10))) {
    uVar10 = (ulonglong)uVar6 - (*(ulonglong *)(piVar2 + 10) & 0xffffffff);
  }
  *(int **)(iVar4 + 8) = piVar2;
  *(undefined8 *)(iVar4 + 0x10) = *(undefined8 *)(piVar2 + 10);
  uVar5 = fn_82A1F2F8();
  *(undefined4 *)(iVar4 + 0x28) = uVar5;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(int *)(iVar4 + 0x24) = (int)uVar10;
  *(int *)(iVar4 + 0xc) = iVar9;
  piVar2[8] = iVar4;
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  uVar6 = (**(code **)(lbl_83219B8C + 0x10))
                    (*(undefined4 *)(piVar2[3] + 8),0,0xffffffff82a20679,0,piVar2 + 5,
                     *(undefined4 *)(piVar2[8] + 0x18),uVar10 + 0x7ff & 0xfffff800,piVar2 + 10);
  if ((uVar6 & 0xc0000000) == 0xc0000000) {
    piVar2[5] = uVar6;
LAB_82a23ea8:
    (*(code *)piVar2[4])(piVar2);
  }
  goto LAB_82a23cc4;
}


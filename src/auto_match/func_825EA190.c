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
extern unsigned int *auStack_90;
extern int fn_82569E38();
extern int fn_8256A858();
extern int fn_8256AB40();
extern int fn_82F68CC0();


void fn_825EA190(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined1 auStack_90 [144];
  
  uVar11 = *(uint *)((*(int *)(param_1 + 0xc) + 1) * 4 + *(int *)(param_1 + 8));
  uVar12 = *(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 5;
  uVar10 = uVar12 * (uVar11 >> 2);
  if ((uVar12 == 3) || (uVar11 = uVar10 + (uVar11 >> 2), uVar12 != 4)) {
    if (uVar10 < uVar11) {
      iVar14 = uVar10 * 0x18;
      iVar13 = uVar11 - uVar10;
      do {
        piVar15 = (int *)(*(int *)((*(int *)(param_1 + 0xc) + 3) * 4 + *(int *)(param_1 + 8)) +
                         iVar14);
        if ((piVar15[4] != 0) && ((piVar15[2] != 0 || (piVar15[3] != 0)))) {
          piVar1 = *(int **)*piVar15;
          iVar7 = (**(code **)(*piVar1 + 0x1c))(piVar1);
          iVar8 = (**(code **)(*piVar1 + 0x3c))(piVar1);
          if (iVar7 != 0) {
            iVar2 = *(int *)(*(int *)(iVar7 + 0x10) + 0x50);
            puVar3 = *(undefined8 **)(*piVar15 + 4);
            uVar4 = *(undefined4 *)(**(int **)(*(int *)(iVar7 + 0x10) + 0x48) + 0x1c);
            if (iVar2 != 0) {
              if (*(char *)(*(int *)(iVar7 + 0x10) + 0x5c) == '\0') {
                uVar9 = fn_8256AB40(*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x48),iVar2);
                *(undefined1 *)(*(int *)(iVar7 + 0x10) + 0x5c) = uVar9;
              }
              if ((*(uint *)(*piVar15 + 0xc) & 1) == 0) {
                fn_82F68CC0(auStack_90,puVar3 + 6,0x10);
                fn_82569E38(iVar2,uVar4,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
                                  puVar3[5]);
              }
              else {
                puVar5 = *(undefined8 **)(*piVar15 + 8);
                fn_82F68CC0(auStack_90,puVar5 + 6,0x10);
                fn_82569E38(iVar2,uVar4,*puVar5,puVar5[1],puVar5[2],puVar5[3],puVar5[4],
                                  puVar5[5]);
              }
            }
            iVar7 = *(int *)(iVar8 + 0x18);
            iVar8 = *(int *)(iVar8 + 0x1c);
            if ((iVar7 == 0) || (bVar6 = true, iVar8 == 0)) {
              bVar6 = false;
            }
            if (bVar6) {
              if ((*(uint *)(*piVar15 + 0xc) & 1) == 0) {
                fn_82F68CC0(auStack_90,puVar3 + 6,0x10);
                fn_82569E38(iVar7,iVar8,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
                                  puVar3[5]);
              }
              else {
                puVar3 = *(undefined8 **)(*piVar15 + 8);
                fn_82F68CC0(auStack_90,puVar3 + 6,0x10);
                fn_82569E38(iVar7,iVar8,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],
                                  puVar3[5]);
              }
            }
          }
        }
        iVar13 = iVar13 + -1;
        iVar14 = iVar14 + 0x18;
      } while (iVar13 != 0);
    }
  }
  else {
    fn_8256A858();
  }
  return;
}


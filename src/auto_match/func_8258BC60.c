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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82297428();
extern int fn_82297DB0();
extern int fn_822A32C0();
extern int fn_82357530();
extern int fn_82522ED8();
extern int fn_8265C9E0();
extern int fn_82A1E740();
extern int fn_82F63CA0();


void fn_8258BC60(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [112];
  
  piVar11 = (int *)*param_1;
  if (piVar11 != (int *)param_1[1]) {
    piVar10 = piVar11 + 1;
    do {
      iVar1 = *piVar11;
      if (*(int *)(iVar1 + 0x210) == 0x3e5) {
        piVar11 = piVar11 + 1;
        piVar10 = piVar10 + 1;
      }
      else {
        auStack_80[0] = 0;
        puVar7 = (uint *)fn_82A1E740(iVar1 + 0x210,auStack_80,1);
        if (*(int *)(iVar1 + 0x22c) != 0) {
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)fn_8265C9E0(0x10);
            if (puVar7 == (uint *)0x0) {
              puVar7 = (uint *)0x0;
            }
            else {
              *puVar7 = 0;
              puVar7[1] = 0;
              puVar7[2] = 0;
            }
            iVar2 = *(int *)(iVar1 + 0x20c);
            uVar12 = 0;
            if (*(int *)(iVar2 + 4) != 0) {
              iVar13 = 0;
              do {
                fn_82297428(auStack_70,*(undefined4 *)(*(int *)(iVar2 + 8) + iVar13 + 0x39));
                puVar9 = (undefined1 *)puVar7[1];
                if ((puVar9 <= auStack_70) || (bVar6 = true, auStack_70 < (undefined1 *)*puVar7)) {
                  bVar6 = false;
                }
                if (bVar6) {
                  uVar3 = *puVar7;
                  if (puVar9 == (undefined1 *)puVar7[2]) {
                    fn_82357530(puVar7);
                  }
                  uVar8 = puVar7[1];
                  if (uVar8 != 0) {
                    puVar9 = (undefined1 *)(((int)(auStack_70 + -uVar3) / 0x1c) * 0x1c + *puVar7);
LAB_8258bdac:
                    fn_822A32C0(uVar8,puVar9);
                  }
                }
                else {
                  if (puVar9 == (undefined1 *)puVar7[2]) {
                    fn_82357530(puVar7);
                  }
                  uVar8 = puVar7[1];
                  if (uVar8 != 0) {
                    puVar9 = auStack_70;
                    goto LAB_8258bdac;
                  }
                }
                puVar7[1] = puVar7[1] + 0x1c;
                fn_82297DB0(auStack_70,1,0);
                iVar2 = *(int *)(iVar1 + 0x20c);
                uVar12 = uVar12 + 1;
                iVar13 = iVar13 + 0x41;
              } while (uVar12 < *(uint *)(iVar2 + 4));
            }
            piVar4 = *(int **)(iVar1 + 0x22c);
            pcVar5 = *(code **)*piVar4;
          }
          else {
            piVar4 = *(int **)(iVar1 + 0x22c);
            pcVar5 = *(code **)(*piVar4 + 4);
          }
          (*pcVar5)(piVar4,puVar7);
        }
        fn_82F63CA0(piVar11,piVar10,(param_1[1] - (int)piVar10 >> 2) << 2);
        param_1[1] = param_1[1] + -4;
        fn_82522ED8(*(undefined4 *)(iVar1 + 0x20c));
        fn_82522ED8(iVar1);
      }
    } while (piVar11 != (int *)param_1[1]);
  }
  return;
}


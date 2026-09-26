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
extern int fn_82569B10();
extern unsigned int iStack_30;


void fn_8256B850(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iStack_30;
  
  iVar3 = fn_82569B10();
  iVar3 = *(int *)(iVar3 + 0x70);
  uVar6 = (uint)*(ushort *)(iVar3 + 6);
  if (uVar6 != *(ushort *)(iVar3 + 2)) {
    uVar5 = (uint)*(ushort *)(iVar3 + 4);
    if (uVar6 < uVar5) {
      iVar3 = *(ushort *)(iVar3 + 2) - uVar5;
    }
    else {
      iVar3 = -uVar5;
    }
    if ((uVar6 + iVar3 != -1) && ((*(byte *)(param_1 + 0x28) & 0x80) != 0)) {
      iVar3 = fn_82569B10();
      puVar2 = *(ushort **)(iVar3 + 0x70);
      if (puVar2[3] == puVar2[1]) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)((uint)puVar2[2] * (uint)*puVar2 + *(int *)(puVar2 + 4));
      }
      iVar3 = *piVar7;
      if (iVar3 == param_1) {
        iVar3 = fn_82569B10();
        iVar3 = *(int *)(iVar3 + 0x70);
        if ((uint)*(ushort *)(iVar3 + 4) == (uint)*(ushort *)(iVar3 + 6)) {
          *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(iVar3 + 2);
        }
        else {
          uVar6 = *(ushort *)(iVar3 + 4) + 1;
          *(ushort *)(iVar3 + 4) =
               (short)uVar6 - (short)(uVar6 / *(ushort *)(iVar3 + 2)) * *(ushort *)(iVar3 + 2);
        }
      }
      else {
        do {
          iVar4 = fn_82569B10();
          puVar2 = *(ushort **)(iVar4 + 0x70);
          if (puVar2[3] == puVar2[1]) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            puVar8 = (undefined8 *)((uint)puVar2[2] * (uint)*puVar2 + *(int *)(puVar2 + 4));
          }
          uVar9 = *puVar8;
          iVar4 = fn_82569B10();
          iVar4 = *(int *)(iVar4 + 0x70);
          if ((uint)*(ushort *)(iVar4 + 4) == (uint)*(ushort *)(iVar4 + 6)) {
            *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(iVar4 + 2);
          }
          else {
            uVar6 = *(ushort *)(iVar4 + 4) + 1;
            *(ushort *)(iVar4 + 4) =
                 (short)uVar6 - (short)(uVar6 / *(ushort *)(iVar4 + 2)) * *(ushort *)(iVar4 + 2);
          }
          iStack_30 = (int)((ulonglong)uVar9 >> 0x20);
          if (iStack_30 != param_1) {
            iVar4 = fn_82569B10();
            puVar2 = *(ushort **)(iVar4 + 0x70);
            uVar1 = puVar2[1];
            if ((uint)puVar2[3] == (uint)uVar1) {
              puVar2[2] = 0;
              puVar2[3] = 0;
            }
            else {
              uVar6 = puVar2[3] + 1;
              puVar2[3] = (short)uVar6 - (short)(uVar6 / uVar1) * uVar1;
            }
            *(undefined8 *)((uint)puVar2[3] * (uint)*puVar2 + *(int *)(puVar2 + 4)) = uVar9;
          }
          iVar4 = fn_82569B10();
          puVar2 = *(ushort **)(iVar4 + 0x70);
          if (puVar2[3] == puVar2[1]) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)((uint)puVar2[2] * (uint)*puVar2 + *(int *)(puVar2 + 4));
          }
        } while (*piVar7 != iVar3);
      }
    }
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0x7f;
  return;
}


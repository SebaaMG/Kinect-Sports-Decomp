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
extern int fn_82F691F0();


void fn_82C2EB58(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  if (*(int *)(param_1 + 0x15c) != 0) {
    iVar4 = *(int *)(param_1 + 0xf4);
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        if (0 < iVar4) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(**(undefined4 **)(iVar9 * 4 + *(int *)(param_1 + 0x15c)),0,0x1c);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
    }
    uVar8 = 0;
    if (0 < iVar4) {
      iVar11 = 0;
      iVar9 = 0;
      do {
        iVar12 = 0;
        piVar10 = (int *)(iVar9 + *(int *)(param_1 + 0x158));
        if (0 < *(int *)(*(int *)(param_1 + 0x154) + iVar11)) {
          do {
            uVar7 = 0;
            uVar3 = (piVar10[1] + *piVar10 + -1) * (1 << (uVar8 & 0x3f));
            if (0 < iVar4) {
              iVar1 = 0;
              iVar2 = 0;
              do {
                piVar5 = (int *)(iVar2 + *(int *)(param_1 + 0x158) + 4);
                cVar6 = '\0';
                iVar4 = (1 << ((uint)uVar7 & 0x3f)) * *piVar5;
                while (iVar4 < (int)(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0))
                      ) {
                  piVar5 = piVar5 + 1;
                  cVar6 = cVar6 + '\x01';
                  iVar4 = *piVar5 * ((uint)(0x100000001 << (uVar7 & 0x1f)) |
                                    (uint)(0x100000001 >> 0x40 - (uVar7 & 0x1f)));
                }
                uVar7 = uVar7 + 1;
                iVar2 = iVar2 + 0x74;
                piVar5 = (int *)(*(int *)(iVar11 + *(int *)(param_1 + 0x15c)) + iVar1);
                iVar1 = iVar1 + 4;
                *(char *)(*piVar5 + iVar12) = cVar6;
                iVar4 = *(int *)(param_1 + 0xf4);
              } while ((int)uVar7 < iVar4);
            }
            iVar12 = iVar12 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar12 < *(int *)(*(int *)(param_1 + 0x154) + iVar11));
        }
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x74;
        iVar11 = iVar11 + 4;
      } while ((int)uVar8 < iVar4);
    }
  }
  return;
}


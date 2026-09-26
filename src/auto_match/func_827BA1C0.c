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
extern unsigned int uStack_60;


void fn_827BA1C0(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  short *psVar8;
  undefined4 uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_60;
  
  *(undefined2 *)(param_1 + 0x58) = 0x7fff;
  sVar14 = 0x7fff;
  *(undefined2 *)(param_1 + 0x5a) = 0x7fff;
  sVar10 = -0x7fff;
  *(undefined2 *)(param_1 + 0x5c) = 0x8001;
  sVar13 = 0x7fff;
  *(undefined2 *)(param_1 + 0x5e) = 0x8001;
  sVar11 = -0x7fff;
  uVar12 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      piVar6 = (int *)(*(int *)((uVar12 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x10)) +
                      (uVar12 & 0xf) * 8);
      uVar3 = piVar6[1];
      if (2 < uVar3) {
        iVar4 = *piVar6;
        iVar15 = 0;
        uVar5 = 0;
        uVar7 = (iVar4 + uVar3) - 1;
        uStack_60 = *(undefined4 *)
                     (*(int *)((uVar7 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x20)) +
                     (uVar7 * 4 & 0xfc));
        iVar16 = 0;
        if (uVar3 != 0) {
          do {
            uVar7 = iVar4 + uVar5;
            psVar8 = (short *)(*(int *)((uVar7 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x20)) +
                              (uVar7 * 4 & 0xfc));
            sVar1 = *psVar8;
            if (sVar1 < sVar14) {
              sVar14 = sVar1;
            }
            sVar2 = psVar8[1];
            if (sVar2 < sVar13) {
              sVar13 = sVar2;
            }
            if (sVar10 < sVar1) {
              sVar10 = sVar1;
            }
            if (sVar11 < sVar2) {
              sVar11 = sVar2;
            }
            uVar5 = uVar5 + 1;
            iVar15 = ((int)(((U64)(uStack_60) >> 0) & 0xFFFF) * (int)sVar2 - (int)(((U64)(uStack_60) >> 16) & 0xFFFF) * (int)sVar1) +
                     iVar16;
            uStack_60 = *(undefined4 *)psVar8;
            iVar16 = iVar15;
          } while (uVar5 < uVar3);
        }
        if ((((sVar14 < *(short *)(param_1 + 0x58)) || (sVar13 < *(short *)(param_1 + 0x5a))) ||
            (*(short *)(param_1 + 0x5c) < sVar10)) || (*(short *)(param_1 + 0x5e) < sVar11)) {
          *(short *)(param_1 + 0x58) = sVar14;
          *(short *)(param_1 + 0x5a) = sVar13;
          uVar9 = 2;
          *(short *)(param_1 + 0x5c) = sVar10;
          *(short *)(param_1 + 0x5e) = sVar11;
          if (iVar15 < 1) {
            uVar9 = 1;
          }
          *(undefined4 *)(param_1 + 0x60) = uVar9;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 4));
  }
  return;
}


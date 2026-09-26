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
extern unsigned int lbl_7FEA1804;
extern unsigned int lbl_83219DD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A459A8(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_r0;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  RtlEnterCriticalSection(0xffffffff8315d948);
  enforceInOrderExecutionIO();
  piVar4 = &lbl_83219DD0;
  lVar8 = 0x140;
  do {
    puVar1 = (uint *)*piVar4;
    if (puVar1 != (uint *)0x0) {
      if (((puVar1[1] & 4) != 0) && ((puVar1[1] & 0x20000) == 0)) {
        uVar5 = 0;
        if (*puVar1 != 0) {
          iVar6 = 0;
          do {
            puVar7 = (uint *)(iVar6 + puVar1[2]);
            if ((*puVar7 & 0x300000) != 0) {
              altv207_13(in_vs32,in_vs42);
              puVar3 = (undefined4 *)(in_r0 + (int)puVar7 & 0xfffffff0);
              *puVar3 = in_register_000103f0;
              puVar3[1] = in_register_000103f4;
              puVar3[2] = in_register_000103f8;
              puVar3[3] = in_vr63;
              uVar2 = *puVar7;
              if ((uVar2 >> 0x14 & 1) == 0) {
                puVar7[5] = 0;
                puVar7[0x15] = 0;
                *puVar7 = uVar2 & 0xfffff000;
              }
              if ((uVar2 >> 0x14 & 2) == 0) {
                puVar7[6] = 0;
                puVar7[0x16] = 0;
                puVar7[1] = puVar7[1] & 0xfffff000;
              }
              if ((uVar2 >> 0x14 & 3) == 0) {
                puVar7[4] = puVar7[4] & 0x7fffffff;
              }
            }
            uVar2 = 1 << (*(ushort *)(puVar7 + 0x14) & 0x1f);
            *(uint *)(((*(ushort *)(puVar7 + 0x14) >> 5) + 0x1ffa8690) * 4) =
                 uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            enforceInOrderExecutionIO();
            uVar5 = uVar5 + 1;
            iVar6 = iVar6 + 0x60;
          } while (uVar5 < *puVar1);
        }
        puVar1[1] = puVar1[1] | 0x20000;
      }
    }
    piVar4 = piVar4 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lbl_7FEA1804 = 0x3000000;
  enforceInOrderExecutionIO();
  RtlLeaveCriticalSection(0xffffffff8315d948);
  return;
}


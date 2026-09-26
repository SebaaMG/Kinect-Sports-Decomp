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
extern unsigned int lbl_7FEA1818;
extern unsigned int lbl_7FEA1819;
extern unsigned int lbl_7FEA181A;
extern unsigned int lbl_7FEA181B;


undefined8 fn_8307DF10(uint *param_1)

{
  undefined4 *puVar1;
  int in_r0;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  if ((param_1[1] & 0x20000) == 0) {
    uVar5 = 0;
    if (*param_1 != 0) {
      iVar4 = 0;
      uVar3 = param_1[2];
      do {
        if ((ulonglong)*(ushort *)(uVar3 + 0x50) ==
            (((ulonglong)lbl_7FEA181B << 0x18 | (ulonglong)lbl_7FEA181A << 0x10 |
              (ulonglong)lbl_7FEA1819 << 8 | (ulonglong)lbl_7FEA1818) ^ 0x200)) {
          return 0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x60;
        uVar3 = iVar4 + param_1[2];
      } while (uVar5 < *param_1);
    }
    uVar5 = 0;
    if (*param_1 != 0) {
      iVar4 = 0;
      do {
        puVar6 = (uint *)(iVar4 + param_1[2]);
        puVar2 = puVar6 + 4;
        altv207_13(in_vs37,in_vs42);
        altv207_13(in_vs37,in_vs39);
        altv207_13(in_vs32,in_vs37);
        puVar1 = (undefined4 *)(in_r0 + (int)puVar6 & 0xfffffff0);
        *puVar1 = in_register_000103d0;
        puVar1[1] = in_register_000103d4;
        puVar1[2] = in_register_000103d8;
        puVar1[3] = in_vr61;
        uVar3 = *puVar6;
        puVar1 = (undefined4 *)(in_r0 + (int)puVar2 & 0xfffffff0);
        *puVar1 = in_register_000103f0;
        puVar1[1] = in_register_000103f4;
        puVar1[2] = in_register_000103f8;
        puVar1[3] = in_vr63;
        puVar1 = (undefined4 *)((uint)(puVar6 + 8) & 0xfffffff0);
        *puVar1 = in_register_000103e0;
        puVar1[1] = in_register_000103e4;
        puVar1[2] = in_register_000103e8;
        puVar1[3] = in_vr62;
        if ((uVar3 >> 0x14 & 1) == 0) {
          puVar6[5] = 0;
          *puVar6 = uVar3 & 0xfffff000;
          *(undefined4 *)(iVar4 + param_1[2] + 0x54) = 0;
        }
        if ((uVar3 >> 0x14 & 2) == 0) {
          puVar6[6] = 0;
          puVar6[1] = puVar6[1] & 0xfffff000;
          *(undefined4 *)(iVar4 + param_1[2] + 0x58) = 0;
        }
        if ((uVar3 >> 0x14 & 3) == 0) {
          *puVar2 = *puVar2 & 0x7fffffff;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x60;
      } while (uVar5 < *param_1);
    }
    param_1[1] = param_1[1] | 0x20000;
  }
  return 1;
}


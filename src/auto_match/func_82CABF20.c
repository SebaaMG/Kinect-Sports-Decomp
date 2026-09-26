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
extern unsigned int *auStack_80;
extern unsigned int uStack_88;


undefined8 fn_82CABF20(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uStack_88;
  uint auStack_80 [32];
  
  puVar5 = &uStack_88;
  uVar10 = 0;
  *param_1 = param_2 << 6 | *param_1 & 0x3f;
  lVar11 = 10;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar9 = 0;
  if (0 < param_2) {
    do {
      uVar2 = param_1[1] & 0x3f;
      if (0x13 < uVar2) {
        return 0xfffffffffffffffd;
      }
      uVar4 = param_1[1] & 0x3f;
      uVar8 = 1 << (0x14 - uVar2 & 0x3f);
      uVar1 = auStack_80[uVar4];
      param_1 = param_1 + 1;
      *param_1 = ((int)uVar1 >> (0x14 - uVar2 & 0x3f)) << 6 | uVar2;
      if ((uVar8 & uVar1) == 0) {
        uVar3 = uVar8 + uVar1;
      }
      else {
        uVar3 = auStack_80[uVar4 - 1];
      }
      auStack_80[uVar4] = uVar3;
      if (uVar3 == 0x100000) {
        uVar10 = uVar2;
      }
      uVar4 = uVar2 - 1;
      if ((int)uVar10 < (int)uVar4) {
        puVar7 = auStack_80 + uVar4;
        do {
          uVar6 = *puVar7;
          if (uVar6 != uVar1) break;
          uVar8 = uVar8 * 2;
          if ((uVar6 & uVar8) == 0) {
            uVar6 = uVar6 + uVar8;
          }
          else {
            uVar6 = puVar7[-1];
          }
          *puVar7 = uVar6;
          if (uVar6 == 0x100000) {
            uVar10 = uVar4;
          }
          uVar4 = uVar4 - 1;
          puVar7 = puVar7 + -1;
        } while ((int)uVar10 < (int)uVar4);
      }
      uVar8 = uVar2 + 1;
      if (uVar8 < 0x14) {
        puVar7 = auStack_80 + uVar2;
        do {
          if (puVar7[1] != uVar1) break;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar3;
        } while ((int)uVar8 < 0x14);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2);
  }
  return 0;
}


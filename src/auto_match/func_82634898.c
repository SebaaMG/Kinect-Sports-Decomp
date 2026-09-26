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
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82634898(int param_1,char param_2,char param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  
  iVar2 = *(int *)(param_1 + 0x100);
  uVar7 = *(uint *)(param_1 + 0x104);
  if ((param_2 != '\0') &&
     (iVar1 = (int)(uVar7 - iVar2) / 0xc, lVar11 = (longlong)iVar1, iVar1 != 0)) {
    puVar14 = (uint *)(iVar2 + 8);
    lVar12 = 0;
    do {
      uStack_b8 = puVar14[-2];
      uStack_b4 = (uint)*(ushort *)((int)puVar14 + -2);
      uStack_c0 = *puVar14 << 0x10 | (uint)*(ushort *)(puVar14 + -1);
      uStack_bc = (uint)*(ushort *)puVar14;
      (*param_4)(1,0,0,lVar12,&uStack_b8,param_5);
      (*param_4)(1,0,0,lVar12 + 1,&uStack_c0,param_5);
      lVar11 = lVar11 + -1;
      lVar12 = lVar12 + 2;
      puVar14[-2] = uStack_b8;
      puVar14[-1] = uStack_c0 << 0x10 | uStack_b4 & 0xffff;
      *puVar14 = uStack_bc << 0x10 | uStack_c0 >> 0x10;
      puVar14 = puVar14 + 3;
    } while (lVar11 != 0);
  }
  if (param_3 != '\0') {
    iVar1 = (int)(uVar7 - iVar2) / 0xc;
    do {
      bVar5 = false;
      if (iVar1 == 0) {
        return;
      }
      puVar14 = (uint *)(iVar2 + 8);
      lVar11 = (longlong)iVar1;
      uVar8 = uVar7;
      do {
        puVar9 = &uStack_b0;
        lVar12 = 2;
        uStack_b0 = puVar14[-2];
        uStack_ac = puVar14[-1] & 0xffff;
        uStack_a8 = puVar14[-1] >> 0x10 | *puVar14 << 0x10;
        uStack_a4 = *puVar14 >> 0x10;
        do {
          uVar3 = puVar9[1];
          if ((1 << (uVar3 >> 0xc & 0xf) & 0x607eU) != 0) {
            uVar4 = *puVar9;
            uVar6 = uVar4 >> 0xc & 7;
            if (uVar6 != 0) {
              uVar15 = (uVar4 & 0xfff) * 0xc + iVar2;
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar10 = 0;
                do {
                  if (uVar8 < uVar15) {
                    bVar5 = true;
                    break;
                  }
                  if (uVar15 == uVar8) {
                    (*param_4)(0,(1 << (uVar10 & 0x3f) & uVar4 >> 0x10 & 0xfff) != 0,
                               (1 << (uVar13 & 0x3f) & ((uVar3 & 3) << 4 | uVar4 >> 0x1c)) != 0,
                               (uVar4 & 0xfff) + uVar13,uVar15,param_5);
                    uVar8 = uVar15 + 0xc;
                  }
                  uVar13 = uVar13 + 1;
                  uVar10 = uVar10 + 2;
                  uVar15 = uVar15 + 0xc;
                } while (uVar13 < uVar6);
              }
            }
          }
          lVar12 = lVar12 + -1;
          puVar9 = puVar9 + 2;
        } while (lVar12 != 0);
        lVar11 = lVar11 + -1;
        puVar14 = puVar14 + 3;
      } while (lVar11 != 0);
      if (uVar7 == uVar8) {
        if (!bVar5) {
          return;
        }
        uVar8 = uVar8 + 0xc;
      }
      uVar7 = uVar8;
    } while (bVar5);
  }
  return;
}


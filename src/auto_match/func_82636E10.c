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
extern unsigned int *auStack_c0;
extern unsigned int iStack_a8;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82636E10(uint *param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint auStack_c0 [4];
  uint uStack_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  uVar1 = *param_1;
  uVar7 = 0;
  uVar2 = param_1[1];
  uVar13 = 0;
  puVar11 = param_1 + 5;
  do {
    uVar3 = *puVar11;
    if (uVar3 != 0) {
      uVar12 = 0;
      puVar15 = (uint *)((int)param_1 + uVar3 + 0x14);
      uVar3 = *(uint *)((int)param_1 + uVar3 + 0x10);
      puVar17 = puVar15;
      do {
        while( true ) {
          if ((uint *)((uVar3 & 0xfffffffc) + (int)puVar15) <= puVar17) goto LAB_82637064;
          uVar10 = (ushort)*puVar17;
          uVar9 = (ulonglong)*(ushort *)puVar17;
          puVar16 = puVar17 + 1;
          if (uVar10 == 0) break;
          if (uVar12 == 0) {
            if ((uVar10 & 0xf) != 0) {
              return 0xffffffff80004005;
            }
            puVar17 = puVar17 + 2;
            puVar14 = (undefined4 *)(*puVar16 + uVar2 + (int)param_1);
            do {
              if (0x1ff < uVar9) {
                return 0xffffffff80004005;
              }
              uVar8 = uVar9;
              if ((~uVar1 & 1) != 0) {
                uVar8 = uVar9 - 0x100;
              }
              uStack_98 = puVar14[2];
              uStack_a0 = *puVar14;
              uStack_9c = puVar14[1];
              uStack_94 = puVar14[3];
              uVar10 = uVar10 - 4;
              puVar14 = puVar14 + 4;
              uVar7 = (*param_3)(param_2,uVar13,1,uVar8,&uStack_a0);
              if ((int)uVar7 < 0) {
                return uVar7;
              }
              uVar9 = uVar9 + 1 & 0xffff;
            } while (uVar10 != 0);
          }
          else if (uVar12 == 1) {
            do {
              if (uVar9 < 0x2320) {
                return 0xffffffff80004005;
              }
              if (0x239f < uVar9) {
                return 0xffffffff80004005;
              }
              uVar4 = *puVar16;
              uStack_a4 = 0;
              uStack_b0 = uVar4 & 0xff;
              uStack_ac = uVar4 >> 8 & 0xff;
              iStack_a8 = (int)(char)(uVar4 >> 0x10);
              uVar10 = uVar10 - 1;
              puVar16 = puVar16 + 1;
              uVar7 = (*param_3)(param_2,uVar13,2,(uVar9 - 0x2320 & 0xffffffff) >> 2,&uStack_b0);
              if ((int)uVar7 < 0) {
                return uVar7;
              }
              uVar9 = uVar9 + 4 & 0xffff;
              puVar17 = puVar16;
            } while (uVar10 != 0);
          }
          else {
            do {
              if (uVar9 < 0x2300) {
                return 0xffffffff80004005;
              }
              if (0x231f < uVar9) {
                return 0xffffffff80004005;
              }
              uVar4 = *puVar16;
              uVar5 = puVar16[1];
              uVar10 = uVar10 - 2;
              puVar16 = puVar16 + 2;
              uVar8 = 0;
              do {
                uVar6 = 1 << ((uint)uVar8 & 0x3f);
                if ((uVar6 & uVar4) == 0) {
                  auStack_c0[0] = (uint)((uVar6 & uVar5) != 0);
                  uVar7 = (*param_3)(param_2,uVar13,0,uVar8 + (uVar9 - 0x2300 & 0x1ffffffc) * 8,
                                     auStack_c0);
                  if ((int)uVar7 < 0) {
                    return uVar7;
                  }
                }
                uVar8 = uVar8 + 1;
              } while ((uVar8 & 0xffffffff) < 0x20);
              uVar9 = uVar9 + 4 & 0xffff;
              puVar17 = puVar16;
            } while (uVar10 != 0);
          }
        }
        uVar12 = uVar12 + 1;
        puVar17 = puVar16;
      } while (uVar12 < 3);
    }
LAB_82637064:
    uVar13 = uVar13 + 1;
    puVar11 = puVar11 + 2;
    if (1 < (uVar13 & 0xffffffff)) {
      return uVar7;
    }
  } while( true );
}


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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack00000044;
extern unsigned int iStack_100;
extern unsigned int iStack_118;
extern unsigned int iStack_120;
extern unsigned int iStack_134;
extern unsigned int iStack_138;
extern unsigned int iStack_144;
extern unsigned int iStack_148;
extern unsigned int iStack_154;
extern unsigned int iStack_160;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int uStack00000024;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_15c;


void fn_82ED8350(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                  int param_7,short *param_8)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  int iVar19;
  ulonglong uVar18;
  int iVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  undefined4 uVar24;
  uint *puVar25;
  short *psVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  byte *pbVar33;
  int iVar34;
  undefined2 *puVar35;
  int iVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  uint uStack00000024;
  int iStack00000034;
  int iStack0000003c;
  int iStack00000044;
  short *psStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int *in_stack_0000009c;
  int *in_stack_000000a4;
  int *in_stack_000000ac;
  int *in_stack_000000b4;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  int iStack_160;
  undefined4 uStack_15c;
  uint *puStack_158;
  int iStack_154;
  int iStack_148;
  int iStack_144;
  uint *puStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_120;
  int iStack_118;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  int iStack_100;
  
  puVar22 = (uint *)(*(int *)(param_1 + 0x1e54) + param_4 * 0x114);
  uStack_15c = *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1);
  uVar24 = *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1);
  dVar40 = lbl_82005710;
  dVar42 = lbl_82005730;
  uStack00000024 = param_3;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  iStack00000044 = param_7;
  psStack0000004c = param_8;
  uStack_104 = param_2;
  if (param_2 < param_3) {
    do {
      uStack_10c = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          if (puVar22[0x15] == 0) {
            puVar25 = puVar22 + 0x20;
            iStack_134 = 0;
            iStack_148 = 0;
            iStack_154 = 0;
            iStack_138 = 0;
            iStack_160 = 0;
            iStack_144 = iStack00000034;
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if (*(int *)(param_1 + 0x600) != 0) {
              uVar28 = *puVar22 >> 0x16 & 3;
              uStack_15c = *(undefined4 *)((uVar28 + 5000) * 4 + param_1);
              uVar24 = *(undefined4 *)((uVar28 + 0x1385) * 4 + param_1);
            }
            puStack_158 = puVar22 + 0x2d;
            iVar20 = 0x4a - (int)puVar25;
            pbVar16 = (byte *)((int)puVar22 + (0x86 - (int)puVar25));
            pbVar15 = (byte *)((int)puVar22 + (0x8c - (int)puVar25));
            iVar34 = in_stack_0000007c - (int)psStack0000004c;
            dVar41 = (double)*(float *)(puVar22[0x19] * 4 + -0x7ce75fd4);
            iVar7 = iStack00000044 - in_stack_00000054;
            iVar12 = iStack0000003c - (int)psStack0000004c;
            pbVar33 = (byte *)((int)puVar22 + (0x38 - (int)puVar25));
            iVar14 = in_stack_00000084 - iStack00000034;
            iVar19 = in_stack_0000005c - (int)psStack0000004c;
            iVar13 = in_stack_0000006c - (int)psStack0000004c;
            uStack_108 = 6;
            psVar26 = psStack0000004c;
            iVar21 = in_stack_00000054;
            puStack_13c = puVar22;
            do {
              puStack_13c = puStack_13c + 1;
              iVar31 = 0;
              iVar23 = 0;
              iVar8 = 0;
              iStack_120 = 0;
              iStack_100 = 0;
              iVar10 = 0;
              iVar9 = 0;
              iStack_118 = 0;
              iVar27 = 0;
              iVar29 = 0;
              if (*(byte *)((int)puVar25 + (int)((int)puVar22 + iVar20)) == 0) {
                if (*puStack_13c != 0) {
                  iVar9 = 0;
                  bVar3 = true;
                  iVar23 = *(int *)(*(int *)(param_1 + 0x7604) + 4);
                  if (0 < (longlong)*(short *)((int)psVar26 + iVar12) + -2) {
                    puVar35 = (undefined2 *)(iStack_144 + -4);
                    iVar10 = 0;
                    do {
                      puVar2 = puVar35 + 3;
                      puVar35 = puVar35 + 2;
                      iVar8 = fn_82F2A8A8(param_1,*puVar2,*puVar35,uVar24,in_stack_000000bc,
                                           in_stack_000000c4);
                      iVar9 = iVar9 + 2;
                      iVar10 = iVar8 + iVar10;
                    } while (iVar9 < *(short *)((int)psVar26 + iVar12) + -2);
                  }
                  puVar35 = (undefined2 *)(iVar9 * 2 + iStack_144);
                  iVar9 = fn_82F2A9C8(param_1,puVar35[1],*puVar35,uStack_15c,in_stack_000000bc
                                            ,in_stack_000000c4);
                  iVar9 = iVar9 + iVar10;
                }
                bVar17 = *(byte *)puVar25;
                if (bVar17 != 0) {
                  iVar10 = (char)bVar17 * 8;
                  bVar4 = true;
                  iStack_120 = *(int *)(*(int *)(param_1 + 0x7604) + iVar10 + 4);
                  iStack_148 = *(int *)(iVar10 + -0x7ce520bc) + iStack_148;
                  if (((int)(char)bVar17 & 2U) != 0) {
                    iVar10 = 0;
                    if (0 < (longlong)*psVar26 + -2) {
                      puVar35 = (undefined2 *)(iVar21 + iVar7 + -4);
                      do {
                        puVar2 = puVar35 + 3;
                        puVar35 = puVar35 + 2;
                        iVar8 = fn_82F2A8A8(param_1,*puVar2,*puVar35,uVar24,in_stack_000000bc,
                                             in_stack_000000c4);
                        iVar10 = iVar10 + 2;
                        iVar27 = iVar8 + iVar27;
                      } while (iVar10 < *psVar26 + -2);
                    }
                    puVar35 = (undefined2 *)(iVar10 * 2 + iVar21 + iVar7);
                    iVar10 = fn_82F2A9C8(param_1,puVar35[1],*puVar35,uStack_15c,
                                               in_stack_000000bc,in_stack_000000c4);
                    iVar27 = iVar10 + iVar27;
                  }
                  if ((*puVar25 & 0x1000000) != 0) {
                    iVar10 = 0;
                    if (0 < (longlong)*(short *)((int)psVar26 + iVar19) + -2) {
                      puVar35 = (undefined2 *)(iVar21 + -4);
                      do {
                        puVar2 = puVar35 + 3;
                        puVar35 = puVar35 + 2;
                        iVar8 = fn_82F2A8A8(param_1,*puVar2,*puVar35,uVar24,in_stack_000000bc,
                                             in_stack_000000c4);
                        iVar10 = iVar10 + 2;
                        iVar27 = iVar8 + iVar27;
                      } while (iVar10 < *(short *)((int)psVar26 + iVar19) + -2);
                    }
                    puVar35 = (undefined2 *)(iVar10 * 2 + iVar21);
                    iVar10 = fn_82F2A9C8(param_1,puVar35[1],*puVar35,uStack_15c,
                                               in_stack_000000bc,in_stack_000000c4);
                    iVar27 = iVar10 + iVar27;
                  }
                }
                bVar17 = *(byte *)((int)puVar25 + (int)pbVar16);
                if (bVar17 != 0) {
                  bVar5 = true;
                  iStack_154 = *(int *)((char)bVar17 * 8 + -0x7ce520bc) + iStack_154;
                  iStack_100 = *(int *)((char)*(byte *)puVar25 * 8 + *(int *)(param_1 + 0x7604) +
                                       0x1c);
                  if (((int)(char)bVar17 & 2U) != 0) {
                    iVar10 = 0;
                    if (0 < (longlong)*(short *)((int)psVar26 + iVar13) + -2) {
                      puVar35 = (undefined2 *)
                                (iVar21 + (in_stack_00000064 - in_stack_00000054) + -4);
                      do {
                        puVar2 = puVar35 + 3;
                        puVar35 = puVar35 + 2;
                        iVar8 = fn_82F2A8A8(param_1,*puVar2,*puVar35,uVar24,in_stack_000000bc,
                                             in_stack_000000c4);
                        iVar10 = iVar10 + 2;
                        iVar29 = iVar8 + iVar29;
                      } while (iVar10 < *(short *)((int)psVar26 + iVar13) + -2);
                    }
                    puVar35 = (undefined2 *)
                              (iVar10 * 2 + iVar21 + (in_stack_00000064 - in_stack_00000054));
                    iVar10 = fn_82F2A9C8(param_1,puVar35[1],*puVar35,uStack_15c,
                                               in_stack_000000bc,in_stack_000000c4);
                    iVar29 = iVar10 + iVar29;
                  }
                  if ((*(byte *)((int)puVar25 + (int)pbVar16) & 1) != 0) {
                    iVar10 = 0;
                    if (0 < (longlong)*(short *)((int)psVar26 + iVar34) + -2) {
                      puVar35 = (undefined2 *)
                                (iVar21 + (in_stack_00000074 - in_stack_00000054) + -4);
                      do {
                        puVar2 = puVar35 + 3;
                        puVar35 = puVar35 + 2;
                        iVar8 = fn_82F2A8A8(param_1,*puVar2,*puVar35,uVar24,in_stack_000000bc,
                                             in_stack_000000c4);
                        iVar10 = iVar10 + 2;
                        iVar29 = iVar8 + iVar29;
                      } while (iVar10 < *(short *)((int)psVar26 + iVar34) + -2);
                    }
                    puVar35 = (undefined2 *)
                              (iVar10 * 2 + iVar21 + (in_stack_00000074 - in_stack_00000054));
                    iVar10 = fn_82F2A9C8(param_1,puVar35[1],*puVar35,uStack_15c,
                                               in_stack_000000bc,in_stack_000000c4);
                    iVar29 = iVar10 + iVar29;
                  }
                }
                puVar35 = (undefined2 *)(iVar14 + iStack_144);
                bVar17 = *(byte *)((int)puVar25 + (int)pbVar15);
                if (bVar17 != 0) {
                  iVar10 = 0;
                  bVar6 = true;
                  uVar28 = 3;
                  iStack_118 = *(int *)(*(int *)(param_1 + 0x7604) + 0x3c);
                  iVar31 = *(int *)(*(int *)(param_1 + 0x7608) + (char)bVar17 * 8 + 4);
                  do {
                    if ((1 << (uVar28 & 0x3f) & (int)(char)*(byte *)((int)puVar25 + (int)pbVar15))
                        != 0) {
                      iVar36 = 0;
                      iVar8 = (int)(iVar10 + (-0xb4 - (int)puVar22) + (int)puStack_158) * 2;
                      if (0 < (longlong)*(short *)(iVar8 + in_stack_0000008c) + -2) {
                        do {
                          uVar1 = *puVar35;
                          puVar2 = puVar35 + 1;
                          puVar35 = puVar35 + 2;
                          iVar11 = fn_82F2A8A8(param_1,*puVar2,uVar1,uVar24,in_stack_000000bc,
                                                in_stack_000000c4);
                          iVar36 = iVar36 + 2;
                          iVar31 = iVar11 + iVar31;
                        } while (iVar36 < *(short *)(iVar8 + in_stack_0000008c) + -2);
                      }
                      uVar1 = *puVar35;
                      puVar2 = puVar35 + 1;
                      puVar35 = puVar35 + 2;
                      iVar8 = fn_82F2A9C8(param_1,*puVar2,uVar1,uStack_15c,in_stack_000000bc,
                                                in_stack_000000c4);
                      iVar31 = iVar8 + iVar31;
                    }
                    uVar28 = uVar28 - 1;
                    iVar10 = iVar10 + 1;
                  } while (-1 < (int)uVar28);
                }
                if ((((iVar9 == 0) && (iVar27 == 0)) && (iVar29 == 0)) && (iVar31 == 0)) {
                  uVar28 = 0;
                  uVar30 = 0;
                  uVar32 = 0;
                }
                else {
                  dVar38 = SQRT((double)(longlong)(int)puStack_158[-6]);
                  dVar37 = (SQRT((double)(longlong)(int)*puStack_158) - dVar38) * dVar41;
                  dVar39 = (SQRT((double)(longlong)(int)puStack_158[6]) - dVar38) * dVar41;
                  dVar38 = (SQRT((double)(longlong)(int)puStack_158[0x12]) - dVar38) * dVar41;
                  if (dVar37 <= dVar40) {
                    uVar28 = (int)(dVar37 - dVar42) + iVar27;
                    uVar28 = 0xffffffffU - ((int)uVar28 >> 0x1f) & uVar28;
                  }
                  else {
                    uVar28 = (int)(dVar37 + dVar42) + iVar27;
                  }
                  if (dVar39 <= dVar40) {
                    uVar30 = (int)(dVar39 - dVar42) + iVar29;
                    uVar30 = 0xffffffffU - ((int)uVar30 >> 0x1f) & uVar30;
                  }
                  else {
                    uVar30 = (int)(dVar39 + dVar42) + iVar29;
                  }
                  if (dVar38 <= dVar40) {
                    uVar32 = (int)(dVar38 - dVar42) + iVar31;
                    uVar32 = 0xffffffffU - ((int)uVar32 >> 0x1f) & uVar32;
                  }
                  else {
                    uVar32 = (int)(dVar38 + dVar42) + iVar31;
                  }
                }
                iVar8 = iVar9 + iVar23;
                iStack_148 = uVar28 + iStack_148;
                iStack_134 = iVar9 + iStack_134;
                iStack_154 = uVar30 + iStack_154;
                iStack_138 = uVar32 + iStack_138;
                iStack_120 = uVar28 + iStack_120;
                iStack_100 = uVar30 + iStack_100;
                iStack_118 = uVar32 + iStack_118;
                if (iStack_120 < iVar8) {
                  if (iStack_100 <= iStack_120) {
                    if (iStack_100 <= iStack_118) {
                      iStack_160 = iStack_100 + iStack_160;
                      *(byte *)((int)puVar25 + (int)pbVar33) = 2;
                      goto LAB_82ed8c64;
                    }
                    goto LAB_82ed8c54;
                  }
                  if (iStack_118 < iStack_120) goto LAB_82ed8c54;
                  bVar17 = 1;
                }
                else {
                  if (iStack_100 < iVar8) {
                    if (iStack_100 <= iStack_118) {
                      iStack_160 = iStack_100 + iStack_160;
                      *(byte *)((int)puVar25 + (int)pbVar33) = 2;
                      goto LAB_82ed8c64;
                    }
                  }
                  else if (iVar8 <= iStack_118) goto LAB_82ed8c30;
LAB_82ed8c54:
                  bVar17 = 4;
                  iStack_120 = iStack_118;
                }
                iStack_160 = iStack_120 + iStack_160;
                *(byte *)((int)puVar25 + (int)pbVar33) = bVar17;
              }
              else {
LAB_82ed8c30:
                iStack_160 = iVar8 + iStack_160;
                *(byte *)((int)puVar25 + (int)pbVar33) = 0;
              }
LAB_82ed8c64:
              puStack_158 = puStack_158 + 1;
              uVar18 = (ulonglong)uStack_108;
              iVar21 = iVar21 + 0x80;
              iStack_144 = iStack_144 + 0x100;
              uStack_108 = (uint)(uVar18 - 1);
              puVar25 = (uint *)((int)puVar25 + 1);
              psVar26 = psVar26 + 1;
            } while (uVar18 - 1 != 0);
            *in_stack_00000094 = iStack_134 + *in_stack_00000094;
            *in_stack_0000009c = *in_stack_0000009c + iStack_148;
            *in_stack_000000a4 = *in_stack_000000a4 + iStack_154;
            *in_stack_000000ac = *in_stack_000000ac + iStack_138;
            if (bVar3) {
              iStack_134 = *(int *)(*(int *)(param_1 + 0x7600) + 0x44) + iStack_134;
            }
            if (bVar4) {
              bVar17 = *(byte *)(puVar22 + 0x20);
              for (iVar20 = 0; (bVar17 == 0 && (iVar20 < 6)); iVar20 = iVar20 + 1) {
                bVar17 = *(byte *)((int)puVar22 + iVar20 + 0x81);
              }
              iVar20 = (char)*(byte *)((int)puVar22 + iVar20 + 0x80) * 8;
              iStack_148 = (*(int *)(*(int *)(param_1 + 0x7600) + iVar20 + 0x44) -
                           *(int *)(iVar20 + -0x7ce520bc)) + iStack_148;
            }
            if (bVar5) {
              bVar17 = *(byte *)((int)puVar22 + 0x86);
              for (iVar20 = 0; (bVar17 == 0 && (iVar20 < 6)); iVar20 = iVar20 + 1) {
                bVar17 = *(byte *)((int)puVar22 + iVar20 + 0x87);
              }
              iVar20 = (char)*(byte *)((int)puVar22 + iVar20 + 0x86) * 8;
              iStack_154 = (*(int *)(*(int *)(param_1 + 0x7600) + iVar20 + 0x5c) -
                           *(int *)(iVar20 + -0x7ce520bc)) + iStack_154;
            }
            if (bVar6) {
              iStack_138 = *(int *)(*(int *)(param_1 + 0x7600) + 0x7c) + iStack_138;
            }
            uVar28 = *puVar22;
            if (iStack_148 < iStack_134) {
              if (iStack_148 < iStack_154) {
                if (iStack_138 < iStack_148) goto LAB_82ed8ed0;
                uVar28 = uVar28 & 0xf8ffffff | 0x1000000;
                iStack_134 = iStack_148;
              }
              else {
                if (iStack_138 < iStack_154) goto LAB_82ed8ed0;
                uVar28 = uVar28 & 0xf8ffffff | 0x2000000;
                iStack_134 = iStack_154;
              }
LAB_82ed8ed4:
              *puVar22 = uVar28;
            }
            else {
              if (iStack_154 < iStack_134) {
                if (iStack_154 <= iStack_138) {
                  uVar28 = uVar28 & 0xf8ffffff | 0x2000000;
                  iStack_134 = iStack_154;
                  goto LAB_82ed8ed4;
                }
LAB_82ed8ed0:
                uVar28 = uVar28 & 0xf8ffffff | 0x4000000;
                iStack_134 = iStack_138;
                goto LAB_82ed8ed4;
              }
              if (iStack_138 < iStack_134) goto LAB_82ed8ed0;
              *puVar22 = uVar28 & 0xf8ffffff;
            }
            iVar20 = 0;
            puVar25 = puVar22;
            do {
              puVar25 = puVar25 + 1;
              bVar17 = *(byte *)(iVar20 + (int)(puVar22 + 0xe));
              if (bVar17 == 0) {
                if (*puVar25 != 0) {
                  iVar21 = *(int *)(*(int *)(param_1 + 0x7604) + 4);
                  iVar20 = *(int *)(*(int *)(param_1 + 0x7600) + 4);
LAB_82ed8fec:
                  iStack_160 = (iVar20 - iVar21) + iStack_160;
                  break;
                }
              }
              else if (bVar17 == 1) {
                if (*(byte *)((int)puVar22 + iVar20 + 0x80) != 0) {
                  iVar20 = (char)*(byte *)((int)puVar22 + iVar20 + 0x80) * 8;
                  iStack_160 = (*(int *)(*(int *)(param_1 + 0x7600) + iVar20 + 4) -
                               *(int *)(*(int *)(param_1 + 0x7604) + iVar20 + 4)) + iStack_160;
                  break;
                }
              }
              else if (bVar17 == 2) {
                if (*(byte *)((int)puVar22 + iVar20 + 0x86) != 0) {
                  iVar20 = (char)*(byte *)((int)puVar22 + iVar20 + 0x86) * 8;
                  iStack_160 = (*(int *)(*(int *)(param_1 + 0x7600) + iVar20 + 0x1c) -
                               *(int *)(*(int *)(param_1 + 0x7604) + iVar20 + 0x1c)) + iStack_160;
                  break;
                }
              }
              else if (*(byte *)((int)puVar22 + iVar20 + 0x8c) != 0) {
                iVar21 = *(int *)(*(int *)(param_1 + 0x7604) + 0x3c);
                iVar20 = *(int *)(*(int *)(param_1 + 0x7600) + 0x3c);
                goto LAB_82ed8fec;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < 6);
            if (iStack_160 < iStack_134) {
              *puVar22 = *puVar22 | 0x10000000;
              if (iStack_160 != 0) {
                *in_stack_000000b4 = *in_stack_000000b4 + iStack_160;
              }
            }
            else {
              *puVar22 = *puVar22 & 0xefffffff;
              *in_stack_000000b4 = *in_stack_000000b4 + iStack_134;
              *(byte *)(puVar22 + 0xe) = *(byte *)puVar22 & 7;
              *(byte *)((int)puVar22 + 0x39) = *(byte *)puVar22 & 7;
              *(byte *)((int)puVar22 + 0x3a) = *(byte *)puVar22 & 7;
              *(byte *)((int)puVar22 + 0x3b) = *(byte *)puVar22 & 7;
              *(byte *)(puVar22 + 0xf) = *(byte *)puVar22 & 7;
              *(byte *)((int)puVar22 + 0x3d) = *(byte *)puVar22 & 7;
            }
          }
          puVar22 = puVar22 + 0x45;
          iStack00000044 = iStack00000044 + 0x300;
          in_stack_00000064 = in_stack_00000064 + 0x300;
          iStack00000034 = iStack00000034 + 0x600;
          in_stack_00000054 = in_stack_00000054 + 0x300;
          in_stack_00000074 = in_stack_00000074 + 0x300;
          uStack_10c = uStack_10c + 1;
          in_stack_00000084 = in_stack_00000084 + 0x600;
          iStack0000003c = iStack0000003c + 0xc;
          psStack0000004c = psStack0000004c + 6;
          in_stack_0000005c = in_stack_0000005c + 0xc;
          in_stack_0000006c = in_stack_0000006c + 0xc;
          in_stack_0000007c = in_stack_0000007c + 0xc;
          in_stack_0000008c = in_stack_0000008c + 0x30;
        } while (uStack_10c < *(uint *)(param_1 + 0x2d0));
      }
      uStack_104 = uStack_104 + 1;
    } while (uStack_104 < uStack00000024);
  }
  return;
}


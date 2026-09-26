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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82566018();
extern int fn_825F05D8();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int lbl_821C6584;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8258D3D8(int param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 in_r0;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 in_vs32 [16];
  undefined1 auVar16 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar19 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar20 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  piVar12 = (int *)param_2;
  iVar9 = (**(code **)(*piVar12 + 0x1c))(param_2);
  iVar15 = 0;
  puVar1 = *(uint **)(*(int *)(iVar9 + 0x10) + 0x40);
  if (puVar1 != (uint *)0x0) {
    iVar9 = 0;
    uVar14 = (ulonglong)*puVar1;
    if (0 < (int)puVar1[1]) {
      do {
        if ((uVar14 & 0xffffffff) == 0) break;
        if (*(int *)(param_1 + 0x1fc) != 0) {
          puVar10 = (undefined4 *)fn_8265C9E0(0x460);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = &lbl_821C6584;
            puVar10[1] = 1;
            puVar10[2] = 1;
            if (puVar10 + 4 != (undefined4 *)0x0) {
              fn_82230300(puVar10 + 4,0,0);
              puVar10[0xb] = 0;
              puVar10[0xc] = 0;
              puVar10[0xd] = 0;
              puVar10[0xf] = 0;
              puVar10[0x10] = 0;
              puVar10[0x11] = 0;
              puVar10[0x14] = 0;
              puVar10[0x15] = 0;
              puVar10[0x30] = 0;
              puVar10[0x32] = 0;
              puVar10[0x33] = 0;
              puVar10[0x31] = 0xbc000000;
              fn_82F691F0(puVar10 + 0x38,0,0x380);
            }
          }
          puVar10[0x33] = param_1;
          puVar10[0x16] = 0;
          puStack_b0 = puVar10 + 4;
          puVar10[0x34] = param_1 + 0x1e0;
          puStack_ac = puVar10;
          iVar11 = fn_825F05D8(puStack_b0,param_2,uVar14,param_3);
          if (iVar11 == 0) {
            fn_82566018(param_1 + 0x1d0,&puStack_b0);
            puVar10 = puStack_ac;
          }
          if (puVar10 != (undefined4 *)0x0) {
            fn_822315A0(puVar10);
          }
        }
        iVar9 = iVar9 + 1;
        uVar14 = uVar14 + 0x3c;
      } while (iVar9 < (int)puVar1[1]);
    }
  }
  if ((param_2 != -0x98) && (uVar13 = 0, piVar12[0x27] != 0)) {
    iVar9 = 0;
    do {
      iVar6 = (int)in_r0;
      pfVar5 = (float *)(iVar6 + (int)param_3 & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar19, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar16, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar21, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar20, &_vt3, 16); }
      pfVar7 = (float *)(iVar6 + piVar12[0x29] + iVar15 & 0xfffffff0);{ V16 _vt4 = vectorMergeHighWord(auVar19,auVar21); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar16,auVar20); memcpy(auVar17, &_vt5, 16); }
      pfVar8 = (float *)(piVar12[0x29] + iVar15 + 0x30U & 0xfffffff0);
      fVar23 = *pfVar8;
      fVar24 = pfVar8[1];
      fVar25 = pfVar8[2];
      fVar26 = pfVar8[3];{ V16 _vt6 = vectorMergeLowWord(auVar19,auVar21); memcpy(auVar22, &_vt6, 16); }
      iVar11 = **(int **)(piVar12[0x2f] + iVar9);{ V16 _vt7 = vectorMergeLowWord(auVar16,auVar20); memcpy(auVar16, &_vt7, 16); }
      fVar2 = *pfVar7 * in_register_00010080 + pfVar7[1] * in_register_00010084 +
              pfVar7[2] * in_register_00010088 + pfVar7[3] * in_vr8;
      fVar3 = *pfVar7 * in_register_00010060 + pfVar7[1] * in_register_00010064 +
              pfVar7[2] * in_register_00010068 + pfVar7[3] * in_vr6;
      fVar4 = fVar23 * *pfVar5 + fVar24 * pfVar5[1] + fVar25 * pfVar5[2] + fVar26 * pfVar5[3];
      in_register_00010060 =
           fVar23 * in_register_00010060 + fVar24 * in_register_00010064 +
           fVar25 * in_register_00010068 + fVar26 * in_vr6;
      in_register_00010080 =
           fVar23 * in_register_00010080 + fVar24 * in_register_00010084 +
           fVar25 * in_register_00010088 + fVar26 * in_vr8;{ V16 _vt8 = vectorMergeHighWord(auVar20,auVar19); memcpy(auVar21, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs36,in_vs43); memcpy(auVar20, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar19, &_vt10, 16); }
      vectorMergeHighWord(auVar21,auVar20);{ V16 _vt11 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(in_vs43, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs41,in_vs33); memcpy(in_vs41, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs39,in_vs61); memcpy(in_vs39, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(auVar22,auVar16); memcpy(auVar16, &_vt14, 16); }
      pfVar5 = (float *)((uint)(auStack_a0 + iVar6) & 0xfffffff0);
      *pfVar5 = fVar2;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar2;
      pfVar5[3] = fVar2;
      vectorMergeHighWord(in_vs41,auVar19);{ V16 _vt15 = vectorMergeHighWord(auVar18,auVar17); memcpy(in_vs45, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(in_vs39,in_vs43); memcpy(in_vs44, &_vt16, 16); }{ V16 _vt17 = vectorMergeHighWord(in_vs45,auVar16); memcpy(in_vs32, &_vt17, 16); }
      pfVar5 = (float *)((uint)(auStack_90 + iVar6) & 0xfffffff0);
      *pfVar5 = fVar3;
      pfVar5[1] = fVar3;
      pfVar5[2] = fVar3;
      pfVar5[3] = fVar3;
      pfVar5 = (float *)((uint)(auStack_80 + iVar6) & 0xfffffff0);
      *pfVar5 = fVar2;
      pfVar5[1] = fVar2;
      pfVar5[2] = fVar2;
      pfVar5[3] = fVar2;
      pfVar5 = (float *)((uint)(auStack_70 + iVar6) & 0xfffffff0);
      *pfVar5 = fVar4;
      pfVar5[1] = fVar4;
      pfVar5[2] = fVar4;
      pfVar5[3] = fVar4;
      in_register_00010064 = in_register_00010060;
      in_register_00010068 = in_register_00010060;
      in_vr6 = in_register_00010060;
      in_register_00010084 = in_register_00010080;
      in_register_00010088 = in_register_00010080;
      in_vr8 = in_register_00010080;
      if (iVar11 != 0) {
        fn_8258D3D8(param_1,iVar11,auStack_a0);
      }
      uVar13 = uVar13 + 1;
      iVar9 = iVar9 + 4;
      iVar15 = iVar15 + 0x40;
    } while (uVar13 < (uint)piVar12[0x27]);
  }
  return;
}


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
extern int fn_82541288();
extern int fn_82F68CC0();
extern unsigned int lbl_83282270;
extern unsigned int lbl_83282278;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82622CC0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int in_r0;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 in_vs32 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar15 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  float in_register_00010050;
  float in_register_00010054;
  float in_register_00010058;
  float in_vr5;
  undefined1 auStack_70 [80];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar9 = 0;
  **(undefined4 **)(param_1 + 0x18) = *param_2;
  do {
    iVar8 = (*(int *)(param_1 + 0x10) * 2 + uVar9) * 0x140 + *(int *)(param_1 + 4);
    iVar7 = uVar9 * 0x40 + *(int *)(param_1 + 0x18);
    pfVar4 = (float *)(iVar8 + 0x500U & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs45,in_vs32); memcpy(auVar12, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar11, &_vt1, 16); }
    pfVar5 = (float *)(iVar8 + 0x4d0U & 0xfffffff0);{ V16 _vt2 = vectorMergeLowWord(in_vs45,in_vs32); memcpy(auVar10, &_vt2, 16); }
    pfVar6 = (float *)(in_r0 + iVar8 + 0x4a0 & 0xfffffff0);{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar14, &_vt3, 16); }
    vectorMergeHighWord(auVar12,auVar11);{ V16 _vt4 = vectorMergeLowWord(auVar12,auVar11); memcpy(auVar13, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar10,auVar14); memcpy(auVar12, &_vt5, 16); }{ V16 _vt6 = vectorMergeLowWord(auVar10,auVar14); memcpy(auVar10, &_vt6, 16); }
    fVar1 = *pfVar6 * in_register_00010050 + pfVar6[1] * in_register_00010054 +
            pfVar6[2] * in_register_00010058 + pfVar6[3] * in_vr5;
    fVar2 = *pfVar6 * *pfVar4 + pfVar6[1] * pfVar4[1] + pfVar6[2] * pfVar4[2] +
            pfVar6[3] * pfVar4[3];
    fVar3 = *pfVar5 * *pfVar4 + pfVar5[1] * pfVar4[1] + pfVar5[2] * pfVar4[2] +
            pfVar5[3] * pfVar4[3];
    in_register_00010050 =
         *pfVar5 * in_register_00010050 + pfVar5[1] * in_register_00010054 +
         pfVar5[2] * in_register_00010058 + pfVar5[3] * in_vr5;{ V16 _vt7 = vectorMergeHighWord(auVar14,auVar11); memcpy(auVar14, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar15, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar11, &_vt9, 16); }
    vectorMergeHighWord(auVar14,auVar15);{ V16 _vt10 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(in_vs44, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar13,auVar10); memcpy(auVar10, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(in_vs40,in_vs33); memcpy(in_vs40, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs43,in_vs61); memcpy(in_vs43, &_vt13, 16); }
    pfVar4 = (float *)(in_r0 + iVar7 + 0xaa20 & 0xfffffff0);
    *pfVar4 = fVar2;
    pfVar4[1] = fVar2;
    pfVar4[2] = fVar2;
    pfVar4[3] = fVar2;{ V16 _vt14 = vectorMergeHighWord(in_vs39,auVar12); memcpy(auVar12, &_vt14, 16); }
    vectorMergeHighWord(in_vs40,auVar11);{ V16 _vt15 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(in_vs45, &_vt15, 16); }{ V16 _vt16 = vectorMergeHighWord(auVar12,auVar10); memcpy(in_vs32, &_vt16, 16); }
    pfVar4 = (float *)(iVar7 + 0xaa30U & 0xfffffff0);
    *pfVar4 = fVar1;
    pfVar4[1] = fVar1;
    pfVar4[2] = fVar1;
    pfVar4[3] = fVar1;
    pfVar4 = (float *)(iVar7 + 0xaa40U & 0xfffffff0);
    *pfVar4 = fVar2;
    pfVar4[1] = fVar2;
    pfVar4[2] = fVar2;
    pfVar4[3] = fVar2;
    pfVar4 = (float *)(iVar7 + 0xaa50U & 0xfffffff0);
    *pfVar4 = fVar3;
    pfVar4[1] = fVar3;
    pfVar4[2] = fVar3;
    pfVar4[3] = fVar3;
    if (uVar9 == 0) {
      iVar8 = 0xa864;
LAB_82622e38:
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar8) =
           *(undefined4 *)
            ((*(int *)(param_1 + 0x10) * 2 + uVar9) * 0x140 + *(int *)(param_1 + 4) + 0x524);
    }
    else {
      if (uVar9 == 1) {
        iVar8 = 0xa868;
        goto LAB_82622e38;
      }
      if (uVar9 < 3) {
        iVar8 = 0xa86c;
        goto LAB_82622e38;
      }
    }
    uVar9 = uVar9 + 1;
    in_register_00010054 = in_register_00010050;
    in_register_00010058 = in_register_00010050;
    in_vr5 = in_register_00010050;
    if (1 < (int)uVar9) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xa870) =
           (&lbl_83282270)[*(int *)(*(int *)(param_1 + 0x10) * 4 + *(int *)(param_1 + 0x14))];
      fn_82F68CC0(auStack_70,(ulonglong)*(uint *)(param_1 + 4) + 0x440,0x60);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xac30) = uStack_20;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xac34) = uStack_1c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xa874) = lbl_83282278;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xabb8) = *(undefined4 *)(param_1 + 0x10);
      fn_82541288((double)*(float *)(*(int *)(param_1 + 0x10) * 0x20 + *(int *)(param_1 + 4) +
                                          0xab4),*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      return;
    }
  } while( true );
}


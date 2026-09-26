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
#define TBLr 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE50D8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_78;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


char * fn_82D50E50(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_register_00010160;
  undefined4 in_register_00010164;
  undefined4 in_register_00010168;
  undefined4 in_vr22;
  undefined4 in_register_00010170;
  undefined4 in_register_00010174;
  undefined4 in_register_00010178;
  undefined4 in_vr23;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtrcTransform";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  puVar6 = &uStack_78;
  puVar7 = (undefined8 *)(param_3 + -8);
  lVar8 = 6;
  do {
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs44,in_vs43);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  piVar2 = *(int **)(param_2 + 0x14);{ V16 _vt0 = vectorMergeHighWord(in_vs34,in_vs32); memcpy(auVar12, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs63,in_vs33); memcpy(auVar11, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs62,in_vs32); memcpy(auVar10, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs60,in_vs61); memcpy(auVar9, &_vt3, 16); }
  vectorMergeHighWord(auVar11,auVar12);
  vectorMergeHighWord(auVar9,auVar10);
  puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010170;
  puVar1[1] = in_register_00010174;
  puVar1[2] = in_register_00010178;
  puVar1[3] = in_vr23;
  puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010160;
  puVar1[1] = in_register_00010164;
  puVar1[2] = in_register_00010168;
  puVar1[3] = in_vr22;
  (**(code **)(*piVar2 + 0x20))(param_1,piVar2,auStack_70,param_4);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + -1;
  if (*param_1 != '\0') {
    puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    uVar13 = puVar1[1];
    uVar14 = puVar1[2];
    uVar15 = puVar1[3];
    puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar1;
    puVar4[1] = uVar13;
    puVar4[2] = uVar14;
    puVar4[3] = uVar15;
    fn_82CE50D8(param_4,param_2 + 0x30,auStack_80);
    *(undefined4 *)((*(int *)(param_4 + 0x40) + 8) * 4 + param_4) = 0;
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return param_1;
}


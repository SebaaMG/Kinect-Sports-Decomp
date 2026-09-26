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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82CE6768();
extern unsigned int iStack_a4;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_ac;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D3D508(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int in_r0;
  int iVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined1 in_vs62 [16];
  undefined1 in_vs63 [16];
  undefined4 in_register_00010160;
  undefined4 in_register_00010164;
  undefined4 in_register_00010168;
  undefined4 in_vr22;
  undefined4 in_register_00010170;
  undefined4 in_register_00010174;
  undefined4 in_register_00010178;
  undefined4 in_vr23;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtrcCxTransform";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  ppuVar5 = &puStack_a8;
  puVar6 = (undefined8 *)(param_2 + -8);
  lVar7 = 6;
  do {
    puVar6 = puVar6 + 1;
    ppuVar5 = ppuVar5 + 2;
    *(undefined8 *)ppuVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar2 = *(undefined4 *)(param_3 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs44,in_vs43);{ V16 _vt0 = vectorMergeHighWord(in_vs34,in_vs32); memcpy(auVar11, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs63,in_vs33); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs62,in_vs32); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs60,in_vs61); memcpy(auVar8, &_vt3, 16); }
  vectorMergeHighWord(auVar10,auVar11);
  vectorMergeHighWord(auVar8,auVar9);
  puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010170;
  puVar1[1] = in_register_00010174;
  puVar1[2] = in_register_00010178;
  puVar1[3] = in_vr23;
  puVar1 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010160;
  puVar1[1] = in_register_00010164;
  puVar1[2] = in_register_00010168;
  puVar1[3] = in_vr22;
  fn_82CE6768(auStack_70,uVar2);
  piStack_b0 = *(int **)(param_1 + 0x18);
  puStack_a8 = auStack_70;
  uStack_ac = 0;
  iStack_a4 = param_3;
  (**(code **)(*piStack_b0 + 0x24))(piStack_b0,auStack_a0,&piStack_b0,param_4);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}


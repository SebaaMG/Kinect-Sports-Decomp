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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int fStack_60;
extern int fn_82D76758();
extern int fn_82D76848();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D656C0(int *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  float fStack_60;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtSphereTri";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  iVar4 = *param_2;
  iVar2 = *param_1;
  iVar5 = iVar4 + 0x20;
  fn_82D76758(iVar5,auStack_90);
  vectorSubtractFloatingPoint(in_vs44,in_vs45);{ V16 _vt0 = vectorMergeHighWord(in_vs39,in_vs32); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs37,in_vs38); memcpy(auVar6, &_vt1, 16); }
  vectorMergeHighWord(auVar6,auVar7);
  puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_82D76848(auStack_80,iVar5,auStack_90,auStack_70,0);
  if (fStack_60 < *(float *)(iVar4 + 0x10) + *(float *)(iVar2 + 0x10)) {
    (**(code **)(*param_4 + 4))(param_4,param_1,param_2);
  }
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


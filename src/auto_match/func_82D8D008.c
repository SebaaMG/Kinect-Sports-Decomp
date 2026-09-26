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
extern int fn_82CE50D8();
extern unsigned int iStack_5c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_60;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D8D008(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 in_vs32 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs60 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010150;
  undefined4 in_register_00010154;
  undefined4 in_register_00010158;
  undefined4 in_vr21;
  char acStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  int iStack_5c;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(undefined4 **)(iVar4 + 4);
  if (puVar6 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar6 = "TtrcPhantom";
    uVar2 = TBLr;
    puVar6[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar6 + 3;
  }
  uStack_60 = *(undefined4 *)(param_2 + 0x24);
  if ((*(char *)(param_2 + 0x20) == '\0') ||
     (iStack_5c = *(int *)(*(int *)(param_1 + 8) + 0x7c), iStack_5c == 0)) {
    iStack_5c = 0;
  }
  else {
    iStack_5c = iStack_5c + 0x10;
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xd4);
  puVar6 = *(undefined4 **)(param_1 + 0xd0);
  while (uVar5 = uVar5 - 1, -1 < (longlong)uVar5) {
    piVar1 = *(int **)*puVar6;
    if (piVar1 != (int *)0x0) {
      vectorSubtractFloatingPoint(in_vs45,in_vs42);{ V16 _vt0 = vectorMergeHighWord(in_vs38,in_vs32); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs36,in_vs37); memcpy(auVar7, &_vt1, 16); }
      vectorMergeHighWord(auVar7,auVar8);
      puVar3 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      vectorSubtractFloatingPoint(in_vs44,in_vs60);{ V16 _vt2 = vectorMergeHighWord(in_vs58,in_vs32); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs56,in_vs57); memcpy(auVar7, &_vt3, 16); }
      vectorMergeHighWord(auVar7,auVar8);
      puVar3 = (undefined4 *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
      *puVar3 = in_register_00010150;
      puVar3[1] = in_register_00010154;
      puVar3[2] = in_register_00010158;
      puVar3[3] = in_vr21;
      (**(code **)(*piVar1 + 0x20))(acStack_90,piVar1,auStack_80,param_3);
      if (acStack_90[0] != '\0') {
        *(undefined4 *)(param_3 + 0x50) = *puVar6;
      }
    }
    puVar6 = puVar6 + 1;
  }
  if (*(int *)(param_3 + 0x50) != 0) {
    fn_82CE50D8(param_3,*(undefined4 *)(*(int *)(param_3 + 0x50) + 8),param_3);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(undefined4 **)(iVar4 + 4);
  if (puVar6 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar6 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar6[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar6 + 3;
  }
  return;
}


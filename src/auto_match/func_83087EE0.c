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
extern unsigned int *auStack_50;
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


double fn_83087EE0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs60 [16];
  undefined1 in_vs61 [16];
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010150;
  undefined4 in_register_00010154;
  undefined4 in_register_00010158;
  undefined4 in_vr21;
  undefined1 auStack_50 [80];
  
  piVar1 = *(int **)(*(char *)(param_2 + 5) + param_2);
  param_2 = *(char *)(param_2 + 5) + param_2;
  iVar4 = *(int *)(param_1 + 0x10) * param_3 + *(int *)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar5 = param_3 * 0x30 + *(int *)(param_1 + 4);
    pcVar3 = (char *)(**(code **)(**(int **)(param_1 + 8) + 4))
                               (auStack_50,*(int **)(param_1 + 8),iVar5,param_2);
    if (*pcVar3 != '\0') {
      vectorSubtractFloatingPoint(in_vs44,in_vs43);{ V16 _vt0 = vectorMergeHighWord(in_vs39,in_vs32); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs37,in_vs38); memcpy(auVar6, &_vt1, 16); }
      vectorMergeHighWord(auVar6,auVar7);
      puVar2 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
      *puVar2 = in_register_00010020;
      puVar2[1] = in_register_00010024;
      puVar2[2] = in_register_00010028;
      puVar2[3] = in_vr2;
      vectorSubtractFloatingPoint(in_vs60,in_vs61);{ V16 _vt2 = vectorMergeHighWord(in_vs58,in_vs32); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs56,in_vs57); memcpy(auVar6, &_vt3, 16); }
      vectorMergeHighWord(auVar6,auVar7);
      puVar2 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
      *puVar2 = in_register_00010150;
      puVar2[1] = in_register_00010154;
      puVar2[2] = in_register_00010158;
      puVar2[3] = in_vr21;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x24);
      (**(code **)(*piVar1 + 0x24))(piVar1,param_1 + 0x20,param_2,iVar4);
    }
  }
  return (double)*(float *)(iVar4 + 4);
}


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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82441F88();
extern int fn_8252A1B0();
extern int fn_825327A8();
extern int fn_8255AE78();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329EA20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorConditionalSelect();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82442338(undefined8 param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 in_vs33 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vr0 [16];
  undefined1 auVar7 [16];
  undefined1 in_vr1 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 in_vr77 [16];
  
  iVar1 = **(int **)(param_2 + 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 1)) {
    *(undefined4 *)(iVar1 + 0x1d0) = 0;
  }
  *(undefined4 *)(*(int *)(param_2 + 4) + 0x2c) = 1;
  *(undefined4 *)(*(int *)(param_2 + 4) + 0x28) = 1;
  puVar2 = (undefined4 *)((uint)(&lbl_8329EA20 + (int)in_r0) & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  vectorConditionalSelect(in_vs33,in_vs45,in_vs44);
  puVar3 = (undefined4 *)(*(int *)(param_2 + 8) + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x60); memcpy(auVar5, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt1 = loadVectorLeftIndexed128((ulonglong)*(uint *)(param_2 + 8),0x24); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr1,in_vr77,4,3); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr77,4,3); memcpy(auVar7, &_vt3, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar8,auVar7,3,2);
  fn_8255AE78(param_1);
  vectorAddFloatingPoint(auVar5,auVar6);
  fn_82441F88(param_2);
  dVar4 = (double)lbl_821CC160;
  if (**(int **)(param_2 + 4) != 0) {
    fn_8252A1B0(**(int **)(param_2 + 4),ZEXT48(&stack0x00000000) - 0x58,0);
  }
  *(undefined1 *)(*(int *)(param_2 + 8) + 0x28) = param_4;
  if (**(int **)(param_2 + 8) != 1) {
    fn_825327A8(**(undefined4 **)(param_2 + 4),0xffffffff821b998c);
    **(undefined4 **)(param_2 + 8) = 1;
    *(float *)(*(int *)(param_2 + 8) + 4) = (float)dVar4;
  }
  return;
}


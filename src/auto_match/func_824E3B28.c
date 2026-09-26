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
extern unsigned int *auStack_30;
extern unsigned int fStack_28;
extern int fn_8225C590();
extern int fn_82274768();
extern int fn_82275128();
extern int fn_8234FC08();
extern int fn_8249ABC0();
extern int fn_8249B450();
extern int fn_8249BDC0();
extern int fn_824E3740();
extern int fn_82512A48();
extern int fn_8251E0B8();
extern int fn_8258C000();
extern int fn_8258D680();
extern int fn_8265CA20();
extern int fn_82F4E760();
extern int fn_82F4EC18();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_824E3B28(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  float *pfVar4;
  undefined8 in_r0;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  double dVar8;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_vr68;
  undefined1 auStack_30 [8];
  float fStack_28;
  
  pcVar2 = *(char **)(param_1 + 0xd50);
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar2 = *(char **)pcVar2;
  }
  pcVar6 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar6 - (int)pcVar2 != 1) {
      fn_8258C000();
      fn_8258D680();
    }
  }
  fn_8251E0B8(param_1 + 0x30c,0);
  iVar5 = *(int *)(param_1 + 0xd54);
  iVar3 = *(int *)(iVar5 + 0x14);
  if (iVar3 != 0) {
    fn_8234FC08(iVar3);
    fn_8265CA20(iVar3);
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
  }
  fn_82275128();
  fn_82274768();
  iVar5 = fn_824E3740();
  lVar7 = (ulonglong)*(uint *)(iVar5 + 0xc) - 1;
  *(int *)(iVar5 + 0xc) = (int)lVar7;
  if (lVar7 == 0) {
    fn_82F4EC18();
  }
  iVar5 = fn_8249ABC0();
  if ((0 < *(int *)(iVar5 + 8)) && (*(int *)(iVar5 + 8) < 4)) {
    fn_8249BDC0(iVar5,1);
  }
  fn_8249B450(iVar5);
  dVar8 = (double)lbl_821CC160;
  *(float *)(iVar5 + 0x28) = lbl_821CC160;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
  pfVar4 = (float *)((uint)(auStack_30 + (int)in_r0) & 0xfffffff0);
  *pfVar4 = in_register_00010440 * in_register_00010000;
  pfVar4[1] = in_register_00010444 * in_ACC;
  pfVar4[2] = in_register_00010448 * in_register_00010008;
  pfVar4[3] = in_vr68 * in_vr0;
  fn_82F4E760(dVar8,ABS((double)fStack_28));
  *(undefined4 *)(iVar5 + 0x70) = 0;
  iVar5 = fn_8225C590();
  if (*(int *)(iVar5 + 0x5c) != 0) {
    fn_82512A48();
    *(undefined4 *)(iVar5 + 0x5c) = 0;
  }
  *(undefined4 *)(iVar5 + 0x70) = 0;
  return;
}


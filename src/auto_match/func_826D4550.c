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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82687270();
extern int fn_82699AD0();
extern int fn_8269A608();
extern int fn_826A1370();
extern int fn_826C58D8();
extern int fn_826C59A0();
extern int fn_826C6480();
extern int fn_826C78F0();
extern int fn_826C8F60();
extern int fn_826CE308();
extern int fn_826D4010();
extern int fn_826DF960();
extern unsigned int lbl_8200C1D8;
extern unsigned int lbl_8200C22C;
extern unsigned int lbl_8200C238;


void fn_826D4550(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  
  *param_1 = &lbl_8200C238;
  param_1[3] = &lbl_8200C22C;
  param_1[0x1a] = &lbl_8200C1D8;
  iVar5 = fn_826C58D8();
  if (iVar5 != 0) {
    fn_826C78F0(param_1,0);
  }
  uVar4 = fn_826C59A0(param_1);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_826C78F0(uVar4,0);
  }
  iVar5 = param_1[0x6b];
  if (iVar5 != 0) {
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
    piVar1 = (int *)param_1[0x6b];
    if (piVar1[2] == 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      if (param_1[0x6b] != 0) {
        fn_826C8F60(param_1[0x6b],1);
      }
    }
  }
  iVar5 = param_1[0x6d];
  if (iVar5 != 0) {
    fn_826CE308(iVar5);
    fn_8267BE38(iVar5);
  }
  puVar6 = param_1 + 0x2a;
  fn_82699AD0(puVar6);
  *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
  fn_8267BE38(param_1[0x29]);
  if (param_1[0x72] != 0) {
    fn_826C6480(param_1[0x72],1);
  }
  puVar2 = (uint *)param_1[0x70];
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((longlong)((ulonglong)uVar3 - 1) < 1) {
      fn_8269A608(puVar2);
      fn_8267BE38(puVar2);
    }
  }
  if (param_1[0x6e] != 0) {
    fn_8267C498();
  }
  if (param_1[0x6c] != 0) {
    fn_826824B0();
  }
  fn_826D4010(param_1 + 0x34);
  fn_8267BE38(param_1[0x30]);
  fn_826DF960(*puVar6,param_1[0x2b]);
  fn_8267BE38(*puVar6);
  if (param_1[0x27] != 0) {
    fn_82687270();
  }
  fn_826A1370(param_1);
  return;
}


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
extern int fn_82C6EB08();
extern int fn_82C6EB90();
extern unsigned int lbl_820FC3B8;
extern unsigned int lbl_820FC3C0;
extern unsigned int lbl_820FC3C8;
extern unsigned int lbl_820FC3D0;
extern unsigned int lbl_820FC3D8;
extern unsigned int lbl_820FC3E0;
extern unsigned int lbl_820FC3E8;
extern unsigned int lbl_820FC3F0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_82C70D58(int *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             ulonglong param_6,ulonglong param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  dVar9 = (double)(longlong)param_1[10];
  dVar10 = (double)(longlong)param_1[9];
  dVar12 = (double)(float)param_1[0xc];
  dVar11 = (double)(longlong)param_1[0xb];
  uVar6 = (uint)((dVar9 * lbl_820FC3D0 + dVar10 * lbl_820FC3B8 + dVar11 * lbl_820FC3F0) * dVar12);
  uVar1 = (uint)(-(dVar11 * lbl_820FC3C8 - (dVar10 * lbl_820FC3C0 - dVar9 * lbl_820FC3E8)) * dVar12
                );
  uVar2 = (uint)((dVar11 * lbl_820FC3C0 - (dVar9 * lbl_820FC3D8 + dVar10 * lbl_820FC3E0)) * dVar12
                );
  uVar8 = (ulonglong)uVar2;
  uVar7 = (ulonglong)uVar1;
  if (((((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
        ((param_4 & 0xffffffff) == 0)) ||
       (((param_5 & 0xffffffff) == 0 || ((param_6 & 0xffffffff) == 0)))) ||
      (((param_7 & 0xffffffff) == 0 || (((int)param_8 == 0 || (in_stack_00000054 == 0)))))) ||
     (in_stack_0000005c == 0)) {
    uVar5 = 0xfffffffffffffffd;
  }
  else {
    iVar3 = param_1[1];
    iVar4 = *param_1;
    if ((int)uVar6 < 0x100) {
      uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
    }
    else {
      uVar6 = 0xff;
    }
    if ((int)uVar2 < 0x181) {
      if ((int)uVar2 < -0x180) {
        uVar8 = 0xfffffffffffffe80;
      }
    }
    else {
      uVar8 = 0x180;
    }
    if ((int)uVar1 < 0x181) {
      if ((int)uVar1 < -0x180) {
        uVar7 = 0xfffffffffffffe80;
      }
    }
    else {
      uVar7 = 0x180;
    }
    fn_82C6EB08(param_8,param_2,param_5,(longlong)iVar3 * (longlong)iVar4,uVar6);
    iVar3 = (int)((longlong)iVar3 * (longlong)iVar4) >> 2;
    fn_82C6EB90(in_stack_00000054,param_3,param_6,iVar3,uVar8);
    fn_82C6EB90(in_stack_0000005c,param_4,param_7,iVar3,uVar7);
    uVar5 = 0;
  }
  return uVar5;
}


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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_8265C9E0();
extern int fn_8305D680();
extern int fn_8305DB40();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_830604F0();
extern int fn_83061070();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_83065890();
extern int fn_83065E50();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern unsigned int iStack_a0;
extern unsigned int lbl_8207F25C;
extern unsigned int lbl_8217E890;
extern unsigned int lbl_821AAD20;


void fn_83063408(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar2;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 auStack_b0 [2];
  undefined **appuStack_a8 [2];
  int iStack_a0;
  undefined1 auStack_90 [144];
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_830677A0(param_2,*(undefined4 *)(param_1 + 0xdc),0xffffffff8217e85c);
  }
  iStack_a0 = 0;
  appuStack_a8[0] = &lbl_8217E890;
  fn_83065890(appuStack_a8,*(undefined4 *)(param_1 + 0x2c));
  if (iStack_a0 != 0) {
    dVar9 = (double)lbl_8207F25C;
    dVar8 = (double)lbl_821AAD20;
    do {
      iVar1 = iStack_a0;
      puVar3 = (undefined1 *)fn_8265C9E0(8);
      *(undefined1 **)(iVar1 + 0x70) = puVar3;
      *puVar3 = 1;
      *(float *)(*(int *)(iVar1 + 0x70) + 4) = (float)dVar8;
      fn_83061508(auStack_90);
      for (iVar5 = *(int *)(iVar1 + 0x58); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        iVar4 = fn_8305D680(iVar5 + 0x10);
        if (2 < iVar4) {
          uVar2 = fn_83065E50();
          fn_8305E0F8(uVar2,auStack_90);
          fn_8305EC98(uVar2,iVar5 + 0x10);
        }
      }
      iVar5 = fn_830604F0(auStack_90);
      if (3 < iVar5) {
        auStack_b0[0] = 0;
        dVar6 = (double)fn_83061070(auStack_90,auStack_b0);
        if ((double)(float)((double)*(float *)(param_1 + 0x30) * dVar9) < dVar6) {
          **(undefined1 **)(iVar1 + 0x70) = 0;
        }
        dVar7 = (double)fn_8305DB40(auStack_b0[0]);
        *(float *)(*(int *)(iVar1 + 0x70) + 4) = (float)(dVar7 * dVar6);
      }
      if ((param_2 & 0xffffffff) != 0) {
        fn_830679A8(param_2);
      }
      iStack_a0 = (*(code *)appuStack_a8[0][1])(appuStack_a8,iStack_a0);
      fn_83061F30(auStack_90);
    } while (iStack_a0 != 0);
  }
  if ((param_2 & 0xffffffff) != 0) {
    fn_830678C8(param_2);
  }
  return;
}


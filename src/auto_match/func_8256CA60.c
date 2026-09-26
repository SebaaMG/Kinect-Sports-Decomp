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
extern unsigned int *auStack_120;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_e0;
extern int fn_825200F0();
extern int fn_8256DE90();
extern int fn_8259A070();
extern int fn_8259BB38();
extern int fn_8265BC60();
extern int fn_827D9630();
extern int fn_827D9658();
extern int fn_82814F70();
extern int fn_82816E40();
extern int fn_82F68CC0();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195CE8;
extern unsigned int lbl_82195CEC;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8256CA60(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar5;
  ulonglong uVar4;
  undefined8 *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  undefined4 uStack0000001c;
  uint uStack_130;
  undefined4 uStack_12c;
  float *apfStack_128 [2];
  undefined4 auStack_120 [4];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined4 auStack_b0 [2];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  iVar9 = 0;
  uStack0000001c = (undefined4)param_2;
  apfStack_128[0] = (float *)0x0;
  uStack_12c = 0;
  auStack_120[0] = 0;
  uStack_130 = 0;
  iVar5 = fn_82816E40(param_2);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8259A070(&stack0x0000001c,&uStack_12c,auStack_120,&uStack_130,apfStack_128,1,0)
    ;
  }
  pfVar3 = apfStack_128[0];
  if ((uVar4 & 0xffffffff) != 0) {
    dVar10 = (double)fn_8265BC60(0xffffffff821c5388);
    fVar1 = *pfVar3;
    if ((((float)(dVar10 - (double)lbl_82193CC0) <= fVar1) &&
        (fVar1 <= (float)(dVar10 + (double)lbl_82193CC0))) ||
       ((lbl_82195CE8 <= fVar1 && (fVar1 <= lbl_82195CEC)))) {
      iVar5 = 0;
      if (0 < (int)pfVar3[1]) {
        do {
          fn_827D9658(&uStack_110);
          fn_827D9658(&uStack_f8);
          puVar6 = (undefined8 *)fn_825200F0(auStack_70,iVar9 + (int)pfVar3[4] + 4);
          uStack_110 = *puVar6;
          uStack_108 = puVar6[1];
          uStack_100 = puVar6[2];
          puVar6 = (undefined8 *)fn_825200F0(auStack_50,iVar9 + (int)pfVar3[4] + 8);
          uStack_f8 = *puVar6;
          uStack_f0 = puVar6[1];
          uStack_e8 = puVar6[2];
          uVar2 = *(undefined4 *)(iVar9 + (int)pfVar3[4]);
          uStack_12c = uVar2;
          fn_8259BB38(&uStack_130,param_1,&uStack_12c);
          uVar8 = (ulonglong)uStack_130;
          if (uVar8 == *(uint *)(param_1 + 4)) {
            fn_827D9658(auStack_e0);
            fn_827D9658(auStack_c8);
            auStack_b0[0] = uVar2;
            fn_827D9630(auStack_a8,auStack_e0);
            fn_827D9630(auStack_90,auStack_c8);
            puVar7 = (uint *)fn_8256DE90(auStack_120,param_1,auStack_b0);
            uStack_130 = *puVar7;
            uVar8 = (ulonglong)uStack_130;
          }
          fn_82F68CC0(uVar8 + 0x10,&uStack_110,0x30);
          iVar5 = iVar5 + 1;
          iVar9 = iVar9 + 0xc;
        } while (iVar5 < (int)pfVar3[1]);
      }
    }
    fn_82814F70(uVar4);
  }
  return;
}


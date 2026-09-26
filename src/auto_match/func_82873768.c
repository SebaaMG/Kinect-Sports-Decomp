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
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82809CB0();
extern int fn_82835208();
extern int fn_8306B110();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8202236C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82873768(int param_1,float *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  
  puVar1 = *(undefined4 **)(param_1 + 0xf4);
  dVar7 = (double)lbl_82005C88;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x114) = *puVar1;
  *(undefined4 *)(param_1 + 0x118) = puVar1[1];
  *(undefined4 *)(param_1 + 0x11c) = puVar1[2];
  if ((*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4)) / 0xc != 1) {
    iVar3 = 0;
    dVar6 = (double)lbl_821AAD20;
    do {
      puVar1 = (undefined4 *)(iVar3 + *(int *)(param_1 + 0xf4));
      fStack_a0 = *param_2;
      fStack_9c = param_2[1];
      fStack_98 = param_2[2];
      fStack_6c = (float)puVar1[1];
      uStack_68 = puVar1[2];
      uStack_70 = *puVar1;
      uStack_80 = puVar1[3];
      fStack_7c = (float)puVar1[4];
      uStack_78 = puVar1[5];
      if (*(char *)(param_1 + 0x105) != '\0') {
        fStack_6c = (float)dVar6;
        fStack_7c = (float)dVar6;
        fStack_9c = (float)dVar6;
      }
      fn_8306B110(&fStack_a0,&uStack_70,&uStack_80,&fStack_90);
      dVar5 = (double)((fStack_98 - fStack_88) * (fStack_98 - fStack_88) +
                      (fStack_a0 - fStack_90) * (fStack_a0 - fStack_90) +
                      (fStack_9c - fStack_8c) * (fStack_9c - fStack_8c));
      if (dVar5 < dVar7) {
        *(float *)(param_1 + 0x114) = fStack_90;
        *(float *)(param_1 + 0x118) = fStack_8c;
        *(float *)(param_1 + 0x11c) = fStack_88;
        dVar7 = dVar5;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar2 < (*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4)) / 0xc - 1U);
  }
  pfVar4 = (float *)(param_1 + 0x108);
  dVar8 = (double)lbl_8202236C;
  dVar6 = (double)(float)((double)(*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x108)) *
                         dVar8);
  dVar7 = (double)fn_82809CB0(dVar6);
  dVar5 = (double)lbl_8201DCB8;
  if (dVar7 < dVar5) {
    *pfVar4 = (float)((double)*pfVar4 + dVar6);
  }
  dVar6 = (double)(float)((double)(*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x10c)) *
                         dVar8);
  dVar7 = (double)fn_82809CB0(dVar6);
  if (dVar7 < dVar5) {
    *(float *)(param_1 + 0x10c) = (float)(dVar6 + (double)*(float *)(param_1 + 0x10c));
  }
  dVar6 = (double)(float)((double)(*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x110)) *
                         dVar8);
  dVar7 = (double)fn_82809CB0(dVar6);
  if (dVar7 < dVar5) {
    *(float *)(param_1 + 0x110) = (float)((double)*(float *)(param_1 + 0x110) + dVar6);
  }
  fn_82835208(param_3,pfVar4);
  return 0x201c0000;
}


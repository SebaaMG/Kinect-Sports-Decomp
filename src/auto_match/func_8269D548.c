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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_82696330();
extern int fn_8269A240();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005720;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


void fn_8269D548(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  piVar2 = (int *)fn_82F6A540();
  iVar3 = (**(code **)(*piVar2 + 0x40))();
  dVar6 = (double)*(float *)(iVar3 + 0xa10);
  cVar1 = *(char *)(iVar3 + 0xa0d);
  dVar4 = (double)*(float *)(iVar3 + 0xa14);
  dVar7 = (double)*(float *)(iVar3 + 0xa18);
  dVar5 = (double)*(float *)(iVar3 + 0xa1c);
  dVar9 = (double)*(float *)(iVar3 + 0xa20);
  dVar8 = (double)*(float *)(iVar3 + 0xa24);
  if (piVar2 == *(int **)(iVar3 + 0xa08)) {
    uStack_b4 = *(undefined4 *)(iVar3 + 0x95c);
    uStack_b8 = *(undefined4 *)(iVar3 + 0x958);
    fn_8268CC00(&uStack_70);
    iVar3 = piVar2[8];
    if (iVar3 != 0) {
      fn_8268CC00(&uStack_90);
      fn_8269A240(iVar3,&uStack_90);
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      uStack_68 = uStack_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
    }
    fn_8268D008(&uStack_70,&fStack_c0,&uStack_b8);
    fStack_c0 = (float)(dVar9 + (double)fStack_c0);
    fStack_bc = (float)(dVar8 + (double)fStack_bc);
    if (cVar1 != '\0') {
      dVar8 = (double)fStack_c0;
      if (dVar7 <= (double)fStack_c0) {
        dVar8 = dVar7;
      }
      if (dVar8 < dVar6) {
        dVar8 = dVar6;
      }
      fStack_c0 = (float)dVar8;
      if ((double)fStack_bc < dVar5) {
        dVar5 = (double)fStack_bc;
      }
      if (dVar4 <= dVar5) {
        fStack_bc = (float)dVar5;
      }
      else {
        fStack_bc = (float)dVar4;
      }
    }
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
    auStack_b0[0] = 3;
    dStack_a8 = (double)fStack_c0 * lbl_82005720;
    dVar5 = lbl_82005720;
    (**(code **)(*piVar2 + 0xfc))(piVar2,0,auStack_b0,0);
    fn_82696330(auStack_b0);
    dStack_98 = (double)fStack_bc * dVar5;
    auStack_a0[0] = 3;
    (**(code **)(*piVar2 + 0xfc))(piVar2,1,auStack_a0,0);
    fn_82696330(auStack_a0);
  }
  fn_82F6A58C();
  return;
}


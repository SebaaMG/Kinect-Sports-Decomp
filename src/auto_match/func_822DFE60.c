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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822B6A58();
extern int fn_822CEEC8();
extern int fn_822CF260();
extern int fn_822DF348();
extern int fn_82365BD8();
extern int fn_82539560();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D4148;
extern unsigned int lbl_831D414C;
extern unsigned int lbl_831D41C8;
extern unsigned int lbl_831D41CC;


void fn_822DFE60(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar5;
  char cVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fStack_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  
  fn_822B6A58(&fStack_70,*(undefined4 *)(param_1 + 0x14),0);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)(*param_2 + 0x20U & 0xfffffff0);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  puVar1 = (undefined4 *)((int)&fStack_80 + in_r0 & 0xfffffff0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  iVar4 = fn_822CEEC8(uVar5);
  if (iVar4 == 0) {
    fStack_70 = fStack_70 - fStack_80;
  }
  else {
    fStack_70 = fStack_80 - fStack_70;
  }
  iVar4 = *(int *)((int)uVar5 + 0x14);
  dVar9 = (double)lbl_821CC160;
  dVar10 = (double)(float)((double)fStack_70 - (double)lbl_82192734);
  dVar7 = (double)fStack_70;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar10 < dVar9) << 2) | (uint)(NAN(dVar10) || NAN(dVar9)) << 2)) <
      0.0) {
    dVar7 = (double)lbl_82192734;
  }
  dVar11 = (double)(float)(dVar7 - (double)lbl_821CA460);
  dVar10 = (double)lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar11 < dVar9) << 2) | (uint)(NAN(dVar11) || NAN(dVar9)) << 2)) <
      0.0) {
    dVar10 = dVar7;
  }
  uVar8 = fn_82539560((double)fStack_7c,
                       (double)(*(float *)(iVar4 + 0x8bc) * *(float *)(iVar4 + 0x274) *
                               *(float *)(iVar4 + 0xa4)),dVar9);
  if (*(int *)((int)uVar5 + 0x340) == 0) {
    iVar4 = fn_822CF260(uVar5,0);
    if (iVar4 == 0) {
      puVar1 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      if ((fStack_6c < lbl_831D4148) || (cVar6 = '\x05', lbl_831D414C <= fStack_6c)) {
        cVar6 = '\x03';
      }
    }
    else {
      cVar6 = (*(int *)(*(int *)(param_1 + 0x14) + 0x274) != 0) + '\t';
    }
  }
  else {
    puVar1 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
    *puVar1 = uVar12;
    puVar1[1] = uVar13;
    puVar1[2] = uVar14;
    puVar1[3] = uVar15;
    if ((fStack_6c < lbl_831D41C8) || (lbl_831D41CC <= fStack_6c)) {
      cVar6 = '\x0e';
    }
    else {
      cVar6 = '\x0f';
    }
  }
  uVar2 = fn_82230110(&fStack_70,0xffffffff82196582);
  uVar3 = fn_82365BD8(&fStack_80,param_2);
  fn_822DF348(dVar10,uVar8,param_1,uVar3,uVar2,cVar6);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}


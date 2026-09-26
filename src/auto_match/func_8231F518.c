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
extern unsigned int *auStack_40;
extern int fn_822C72E0();
extern int fn_8230C220();
extern int fn_8231F730();
extern int fn_823C2148();
extern int fn_823CDBB0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8231F518(double param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int in_r0;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar8 = 1;
  dVar11 = (double)lbl_821CC160;
  if (*(int *)(param_2 + 0x48) != 0) {
    dVar9 = (double)(float)((double)*(float *)(param_2 + 0x48) - param_1);
    dVar12 = -dVar9;
    dVar10 = dVar11;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar12 < dVar11) << 2) | (uint)(NAN(dVar12) || NAN(dVar11)) << 2))
        < 0.0) {
      dVar10 = dVar9;
    }
    *(float *)(param_2 + 0x48) = (float)dVar10;
  }
  if (((double)*(float *)(param_2 + 0x48) == dVar11) || (*(char *)(param_2 + 0x50) != '\0')) {
    iVar1 = *(int *)(param_2 + 0x4c);
    if (iVar1 == 0) {
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
        *(undefined4 *)(param_2 + 0x48) = lbl_82193B00;
        fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                          0xffffffff821ae9cc);
      }
      else if ((double)*(float *)(param_2 + 0x48) == dVar11) {
        iVar1 = *(int *)(param_2 + 0x40);
        uStack_24 = 1;
        uVar8 = 0;
        iVar7 = *(int *)(param_2 + 0xc);
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        uStack_30 = 0;
        uStack_2c = *(undefined4 *)(iVar1 + 0x28);
        puVar4 = (undefined4 *)(iVar1 + 0x80U & 0xfffffff0);
        uVar13 = puVar4[1];
        uVar14 = puVar4[2];
        uVar15 = puVar4[3];
        uStack_28 = *(undefined4 *)(iVar1 + 0x2c);
        uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFFFF) << 8))) | ((((U64)((((U64)(uStack_50) >> 8) & 0xFFFFFF) & 0xffff)) & ((U64)0xFFFFFF)) << 8));
        uStack_50 = (uint)(((U64)(uStack_50) >> 8) & 0xFFFFFF);
        uVar3 = *(undefined4 *)(iVar7 + 0x2c);
        puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
        *puVar5 = *puVar4;
        puVar5[1] = uVar13;
        puVar5[2] = uVar14;
        puVar5[3] = uVar15;
        fn_823CDBB0(uVar2,*(undefined4 *)(iVar7 + 0x28),uVar3,auStack_40,&uStack_50,1);
        fn_823C2148(*(undefined4 *)(param_2 + 0x10),0,1);
      }
    }
    else {
      iVar7 = *(int *)(param_2 + 0x44);
      if ((iVar7 == 0) || (iVar1 != 1)) {
        iVar7 = fn_8231F730(param_2,*(undefined4 *)(param_2 + 0x40));
      }
      if (iVar7 == 0) {
        *(float *)(param_2 + 0x48) = (float)dVar11;
        *(undefined4 *)(param_2 + 0x4c) = 0;
      }
      else {
        *(int *)(param_2 + 0x4c) = iVar1 + -1;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uVar6 = lbl_83265A28 & 0x7fffff;
        *(int *)(param_2 + 0x40) = iVar7;
        *(float *)(param_2 + 0x48) =
             (float)((double)((float)(uVar6 | 0x3f800000) - lbl_821CA460) * dVar11 +
                    (double)lbl_821917B4);
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((*(int *)(iVar1 + 0x58) != 0x11) && (*(int *)(iVar1 + 0x54) != 0x11)) {
    uStack_50 = *(uint *)(*(int *)(param_2 + 0xc) + 0x28);
    uStack_4c = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x2c);
    fn_8230C220(iVar1 + 0xa18,&uStack_50);
  }
  return uVar8;
}


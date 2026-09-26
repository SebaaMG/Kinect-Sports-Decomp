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
extern unsigned int *auStack_40;
extern unsigned int fStack_24;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_82539560();
extern int fn_82552BE8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C9D1C;
extern unsigned int lbl_831CA16C;
extern unsigned int lbl_831CA170;
extern unsigned int lbl_831CA174;
extern unsigned int lbl_831CA178;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_823B0760(int param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_50 [4];
  undefined1 auStack_40 [28];
  float fStack_24;
  
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = param_1 + 0x20U & 0xfffffff0;
    fVar9 = *(float *)(uVar1 + 4);
    fVar11 = *(float *)(uVar1 + 8);
    fVar9 = fVar9 * fVar9 + 0.0 + fVar11 * fVar11;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    fVar11 = lbl_831CA170 * lbl_831CA170;
    dVar8 = (double)lbl_831CA178;
    fVar5 = lbl_831CA16C * lbl_831CA16C;
    dVar7 = (double)lbl_831CA174;
    pfVar2 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar2 = fVar9;
    pfVar2[1] = fVar9;
    pfVar2[2] = fVar9;
    pfVar2[3] = fVar9;
    dVar7 = (double)fn_82539560(ABS((double)afStack_50[0]),(double)fVar5,(double)fVar11,dVar7,dVar8
                                );
    fn_82230110(auStack_40,0xffffffff821b5a44);
    fStack_24 = (float)dVar7;
    fn_8236D0D0(&uStack_60,auStack_40);
    fn_82230300(auStack_40,1,0);
    iVar6 = *(int *)(param_1 + 0x188);
    puVar3 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar4 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar12;
    puVar4[3] = uVar13;
    if (iVar6 == 0) {
      if (*(int *)(param_1 + 0x184) == 0) {
        if (*(float *)(param_1 + 0x14c) <= lbl_821CC160) {
          if (lbl_821CC160 <= *(float *)(param_1 + 0x14c)) {
            iVar6 = param_1 + 0xdc;
            if (*(float *)(param_1 + 0x26c) <= lbl_831C9D1C) {
              iVar6 = param_1 + 0xd0;
            }
          }
          else {
            iVar6 = param_1 + 0xd8;
          }
        }
        else {
          iVar6 = param_1 + 0xd4;
        }
      }
      else {
        iVar6 = param_1 + 0xe0;
      }
    }
    else {
      iVar6 = param_1 + 0xe4;
    }
    fn_82552BE8(*(undefined4 *)(param_1 + 0x110),iVar6,afStack_50,&uStack_60);
    fn_822CD140(&uStack_60);
  }
  return;
}


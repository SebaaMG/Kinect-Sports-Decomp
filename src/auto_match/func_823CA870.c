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
extern unsigned int *auStack_50;
extern int fn_82368E38();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2D98;
extern unsigned int lbl_831D2E70;
extern unsigned int lbl_831D2E74;
extern unsigned int lbl_831D2E78;
extern unsigned int lbl_831D2E7C;
extern unsigned int lbl_831D2E80;
extern unsigned int lbl_831D2E84;
extern unsigned int lbl_831D2E88;


void fn_823CA870(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  int in_r0;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_50 [80];
  
  fn_82368E38((double)lbl_831D2E84,auStack_50,*(undefined4 *)(param_1 + 0x240));
  uVar8 = lbl_831D2E78;
  *param_3 = lbl_831D2E74;
  param_3[1] = uVar8;
  uVar8 = lbl_831D2E7C;
  fVar6 = lbl_821CA460;
  puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar5 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar5 = *puVar2;
  puVar5[1] = uVar9;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  fVar7 = lbl_821CC160;
  param_3[2] = uVar8;
  fVar3 = fVar6 - *(float *)(param_2 + 4);
  bVar1 = lbl_831D2E88 == 0;
  fVar4 = *(float *)(param_2 + 4);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < fVar7) << 2) | (uint)(NAN(fVar3) || NAN(fVar7)) << 2)) < 0.0)
  {
    fVar4 = fVar6;
  }
  *(float *)(param_2 + 4) = fVar4;
  uVar8 = lbl_831D2E70;
  if (bVar1) {
    uVar9 = *(undefined4 *)(param_1 + 0x1f8);
    uVar8 = *(undefined4 *)(param_1 + 0x1f0);
    param_4[1] = *(undefined4 *)(param_1 + 500);
    param_4[2] = uVar9;
  }
  else {
    param_4[1] = lbl_831D2E80;
    param_4[2] = fVar7;
  }
  uVar9 = lbl_831D2D98;
  *param_4 = uVar8;
  *param_5 = uVar9;
  return;
}


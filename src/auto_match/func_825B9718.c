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
extern int fn_825B9678();
extern int fn_82A1DD38();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


int fn_825B9718(double param_1,double param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int in_r6;
  undefined8 in_r7;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = fn_825B9678();
  *(undefined4 *)(iVar2 + 0x80) = 8;
  fn_82A1DD38(iVar2 + 0x40,in_r7,0x40);
  *(float *)(iVar2 + 0x2c) = (float)param_1;
  *(float *)(iVar2 + 0x24) = (float)param_2;
  dVar3 = (double)lbl_821CC160;
  *(float *)(iVar2 + 0x3c) = lbl_821CC160;
  uVar4 = lbl_821CA460;
  *(undefined1 *)(iVar2 + 0x84) = 2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((param_1 < dVar3) << 2) | (uint)(NAN(param_1) || NAN(dVar3)) << 2)) <
      0.0) {
    uVar4 = lbl_82192734;
  }
  *(undefined4 *)(iVar2 + 0x38) = uVar4;
  if (in_r6 != 0) {
    puVar1 = (undefined4 *)(in_r0 + in_r6 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined1 *)(iVar2 + 0x86) = 1;
    puVar1 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  return iVar2;
}


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
extern int fn_824AA3D8();
extern int fn_82539560();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8219250C;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82192730;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_824AA8D8(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float afStack_20 [8];
  
  iVar4 = fn_824AA3D8(afStack_20,param_1,param_2,6,0xffffffff824aa980);
  puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar5 = &lbl_82192730;
  puVar3 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  dVar9 = (double)afStack_20[0];
  dVar8 = (double)lbl_8218E8E8;
  dVar7 = (double)lbl_821CC160;
  dVar6 = (double)fn_82539560(ABS(dVar9),(double)lbl_82192604,(double)lbl_8219250C,dVar7,dVar8);
  fVar1 = lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar9 < dVar7) << 2) | (uint)(NAN(dVar9) || NAN(dVar7)) << 2)) < 0.0)
  {
    fVar1 = *(float *)(puVar5 + 4);
  }
  return -(double)(float)(dVar6 * (double)fVar1 - dVar8);
}


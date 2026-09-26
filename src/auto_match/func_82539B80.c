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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82539A78();
extern V16 vectorSubtractFloatingPoint();


bool fn_82539B80(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  int iVar8;
  longlong lVar7;
  bool bVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  puVar5 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
  uVar10 = puVar5[1];
  uVar11 = puVar5[2];
  uVar12 = puVar5[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_4;
  fVar4 = *param_3;
  puVar6 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar10;
  puVar6[2] = uVar11;
  puVar6[3] = uVar12;
  iVar8 = fn_82539A78((double)fVar4,(double)fVar3,(double)fVar2,(double)fVar1,(double)fStack_40);
  if ((iVar8 == 0) ||
     (iVar8 = fn_82539A78((double)param_3[1],(double)param_4[1],(double)param_1[1],
                           (double)param_2[1],(double)fStack_3c), iVar8 == 0)) {
    bVar9 = false;
  }
  else {
    lVar7 = fn_82539A78((double)param_3[2],(double)param_4[2],(double)param_1[2],(double)param_2[2]
                         ,(double)fStack_38);
    bVar9 = lVar7 != 0;
  }
  return bVar9;
}


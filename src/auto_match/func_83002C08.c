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
extern int fn_83001FE8();
extern int fn_83004190();
extern int fn_83007940();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3a;


void fn_83002C08(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined2 uStack_3a;
  
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  fn_83004190((double)*pfVar1,param_1 + 0x2c);
  pfVar1 = (float *)*param_2;
  dVar6 = (double)*pfVar1;
  dVar8 = (double)lbl_821AAD20;
  dVar7 = (double)pfVar1[1];
  *param_2 = (int)(pfVar1 + 2);
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 4) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 8) = (float)dVar7;
  }
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  fn_83004190((double)*pfVar1,param_1 + 0x2e);
  pfVar1 = (float *)*param_2;
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  *param_2 = (int)(pfVar1 + 2);
  dVar6 = (double)fVar2;
  dVar7 = (double)fVar3;
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 0xc) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 0x10) = (float)dVar7;
  }
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  uStack_3a = (undefined2)(int)*pfVar1;
  *(undefined2 *)(param_1 + 0x30) = uStack_3a;
  pfVar1 = (float *)*param_2;
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  *param_2 = (int)(pfVar1 + 2);
  dVar6 = (double)fVar2;
  dVar7 = (double)fVar3;
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 0x14) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 0x18) = (float)dVar7;
  }
  pfVar1 = (float *)*param_2;
  *param_2 = (int)(pfVar1 + 1);
  uStack_3a = ((((U64)(uStack_3a)) & (~(((U64)0xFF) << 8))) | ((((U64)((undefined1)(longlong)*pfVar1)) & ((U64)0xFF)) << 8));
  *(undefined1 *)(param_1 + 0x3c) = (undefined1)uStack_3a;
  pfVar1 = (float *)*param_2;
  dVar7 = (double)pfVar1[1];
  dVar6 = (double)*pfVar1;
  *param_2 = (int)(pfVar1 + 2);
  if (((dVar6 != dVar8) || (dVar7 != dVar8)) && (cVar5 = fn_83001FE8(param_1), cVar5 != '\0'))
  {
    *(float *)(*(int *)(param_1 + 0x68) + 0x1c) = (float)dVar6;
    *(float *)(*(int *)(param_1 + 0x68) + 0x20) = (float)dVar7;
  }
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 4;
  uVar4 = *(undefined4 *)*param_2;
  *param_2 = (int)((undefined4 *)*param_2 + 1);
  fn_83007940(param_1,uVar4);
  return;
}


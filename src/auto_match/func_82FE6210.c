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
extern int fn_82F65350();
extern unsigned int lbl_82006848;
extern unsigned int lbl_82015CF0;


undefined8
fn_82FE6210(int param_1,undefined8 param_2,int *param_3,int param_4,undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  undefined2 uVar4;
  int iVar3;
  double dVar5;
  double dVar6;
  
  *(int **)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 4) = *param_5;
  *(uint *)(param_1 + 8) = (uint)param_5[1] >> 0xb & 7;
  uVar4 = (**(code **)(*param_3 + 4))(param_3);
  *(undefined2 *)(param_1 + 0x14) = uVar4;
  *(int *)(param_1 + 0x1c) = param_4;
  dVar6 = (double)*(float *)(param_4 + 0xc);
  dVar5 = (double)*(float *)(param_4 + 8);
  iVar3 = fn_82F65350();
  fVar2 = lbl_82006848;
  fVar1 = (float)((double)((float)(longlong)iVar3 * lbl_82015CF0) * (double)(float)(dVar6 - dVar5) +
                 dVar5);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4) + fVar1;
  *(float *)(param_1 + 0x18) = fVar1;
  if (fVar1 < fVar2) {
    *(float *)(param_1 + 0x18) = fVar2;
  }
  return 1;
}


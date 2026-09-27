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
extern int fn_829DEF00();
extern float lbl_82002C5C;
extern unsigned int lbl_8200D8C4;


undefined8 fn_829DF4B0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  fVar5 = lbl_8200D8C4;
  fVar4 = lbl_82002C5C;
  fVar3 = (float)(longlong)(param_2[0x30] - param_2[0x24]) * lbl_82002C5C;
  *(float *)(param_1 + 0x18) = fVar3;
  if (fVar5 < fVar3) {
    iVar10 = param_2[0x24];
    iVar1 = param_2[0x27];
    iVar7 = iVar10;
    if (iVar1 <= iVar10) {
      iVar7 = iVar1;
    }
    iVar9 = param_2[0x30];
    iVar2 = param_2[0x33];
    iVar8 = iVar9;
    if (iVar2 <= iVar9) {
      iVar8 = iVar2;
    }
    if (iVar7 < iVar8) {
      iVar9 = iVar10;
      if (iVar1 <= iVar10) {
        iVar9 = iVar1;
      }
    }
    else if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
    *param_3 = (int)(-(*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x18) -
                      (float)(longlong)iVar9) + fVar4);
    iVar10 = param_2[0x27];
    iVar1 = param_2[0x24];
    iVar7 = iVar1;
    if (iVar1 <= iVar10) {
      iVar7 = iVar10;
    }
    iVar9 = param_2[0x30];
    iVar2 = param_2[0x33];
    iVar8 = iVar9;
    if (iVar9 <= iVar2) {
      iVar8 = iVar2;
    }
    if (iVar8 < iVar7) {
      iVar9 = iVar1;
      if (iVar1 <= iVar10) {
        iVar9 = iVar10;
      }
    }
    else if (iVar9 <= iVar2) {
      iVar9 = iVar2;
    }
    param_3[2] = (int)(*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x18) +
                       (float)(longlong)iVar9 + fVar4);
    iVar10 = param_2[0x25];
    if (param_2[0x31] <= param_2[0x25]) {
      iVar10 = param_2[0x31];
    }
    param_3[1] = iVar10;
    iVar10 = param_2[0x34];
    if (param_2[0x34] < param_2[0x28]) {
      iVar10 = param_2[0x28];
    }
    param_3[3] = iVar10;
    if (*param_3 < 0) {
      *param_3 = 0;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 8) + 4);
    if (iVar10 <= *param_3) {
      *param_3 = iVar10 + -1;
    }
    if (param_3[2] < 0) {
      param_3[2] = 0;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 8) + 4);
    if (iVar10 <= param_3[2]) {
      param_3[2] = iVar10 + -1;
    }
    if (param_3[1] < 0) {
      param_3[1] = 0;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar10 <= param_3[1]) {
      param_3[1] = iVar10 + -1;
    }
    if (param_3[3] < 0) {
      param_3[3] = 0;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar10 <= param_3[3]) {
      param_3[3] = iVar10 + -1;
    }
    cVar6 = fn_829DEF00((double)(longlong)*param_2,(double)(longlong)param_2[0x24],
                          (double)(longlong)param_2[0x25],(double)(longlong)param_2[0x27],
                          (double)(longlong)param_2[0x28],param_1);
    if ((cVar6 != '\0') &&
       (cVar6 = fn_829DEF00((double)(longlong)*param_2,(double)(longlong)param_2[0x30],
                              (double)(longlong)param_2[0x31],(double)(longlong)param_2[0x33],
                              (double)(longlong)param_2[0x34],param_1), cVar6 != '\0')) {
      return 1;
    }
  }
  return 0;
}


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
extern int fn_82436C08();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D37A4;
extern unsigned int lbl_83265A28;


undefined8 fn_82454228(undefined8 param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  
  iVar4 = fn_82436C08(param_2);
  uVar5 = 0;
  puVar2 = *(uint **)(*(int *)(*(int *)(*(int *)((int)param_2 + 0x40) + 4) + 0x40) + 0x208);
  uVar7 = *puVar2;
  if (uVar7 == 0) {
    uVar5 = puVar2[1];
  }
  else if (uVar7 == 1) {
    uVar5 = puVar2[2];
  }
  else if (uVar7 < 3) {
    uVar5 = puVar2[3];
  }
  else if (uVar7 == 3) {
    uVar5 = puVar2[4];
  }
  iVar3 = 0x10;
  if (*(int *)(*(int *)(param_3 + 0x1a0) + 0x24) == 0) {
    pfVar6 = (float *)(uVar5 + 0x14);
    iVar3 = 8;
  }
  else {
    pfVar6 = (float *)(uVar5 + 0x24);
  }
  uVar7 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar7 * 0x19660d + 0x3c6ef35f;
  if ((pfVar6[1] - *pfVar6) * ((float)(uVar7 & 0x7fffff | 0x3f800000) - lbl_821CA460) + *pfVar6 <=
      ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82005748) {
    fVar1 = *(float *)(iVar4 + iVar3);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(int *)param_1 =
         (int)(((((float *)(iVar4 + iVar3))[1] - fVar1) *
                ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1) *
              lbl_82005748);
  }
  else {
    *(int *)param_1 = lbl_831D37A4;
  }
  return param_1;
}


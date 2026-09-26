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
extern int fn_8252D240();
extern int fn_8252D2F8();
extern int fn_8255FA88();
extern int fn_82592430();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_824FBA38(int param_1,undefined8 param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = lbl_821CC160;
  bVar1 = *(int *)(param_1 + 0xba0) != 0;
  if (*(char *)(param_1 + 0xb9c) == '\0') {
    if (bVar1) {
      fVar2 = *(float *)(param_1 + 0xba0) - *(float *)(param_1 + 0xb3c);
      fVar3 = -fVar2;
      fVar4 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar4 = fVar2;
      }
      *(float *)(param_1 + 0xba0) = fVar4;
      if (fVar4 == fVar5) {
        iVar6 = param_1 + 0xbac;
        goto LAB_824fbb50;
      }
    }
    if ((*(int *)(param_1 + 400) == 0) ||
       (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x114) == 0)) {
      iVar6 = 1;
    }
    else {
      iVar6 = fn_8255FA88();
    }
    if (iVar6 == 0) goto LAB_824fbba8;
    iVar6 = param_1 + 0xba4;
  }
  else {
    if (bVar1) {
      fVar2 = *(float *)(param_1 + 0xba0) - *(float *)(param_1 + 0xb3c);
      fVar3 = -fVar2;
      fVar4 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar4 = fVar2;
      }
      *(float *)(param_1 + 0xba0) = fVar4;
      if (fVar4 == fVar5) {
        iVar6 = param_1 + 0xba8;
LAB_824fbb50:
        fn_8252D2F8(param_1,0,param_1 + 0xb60,iVar6);
        goto LAB_824fbba8;
      }
    }
    if ((*(int *)(param_1 + 400) == 0) ||
       (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x114) == 0)) {
      iVar6 = 1;
    }
    else {
      iVar6 = fn_8255FA88();
    }
    if (iVar6 == 0) goto LAB_824fbba8;
    iVar6 = param_1 + 0xbb0;
  }
  fn_8252D240(param_1,iVar6,0);
LAB_824fbba8:
  fn_82592430(param_1,param_2);
  return;
}


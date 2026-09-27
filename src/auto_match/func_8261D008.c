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
extern unsigned int *auStack_70;
extern int fn_82529320();
extern int fn_8255CFD0();
extern int fn_82564458();
extern int fn_82592430();
extern int fn_825A1440();
extern int fn_8261CB98();
extern int fn_8262BDB0();
extern float lbl_82192480;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8261D008(int param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_70 [48];
  
  dVar5 = (double)lbl_821CC160;
  if (*(int *)(param_1 + 0xc5c) != 0) {
    dVar2 = (double)(*(float *)(param_1 + 0xc5c) - *(float *)(param_1 + 0xb3c));
    dVar4 = -dVar2;
    dVar3 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar3 = dVar2;
    }
    *(float *)(param_1 + 0xc5c) = (float)dVar3;
    if (dVar3 == dVar5) {
      fn_82564458(param_1,0x58,0);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1 + 0xc5c) =
           ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192480 +
           lbl_82192604;
    }
  }
  if (((*(int *)(param_1 + 0xb64) != 0) && (*(int *)(param_1 + 0xb10) == 0)) &&
     ((*(uint *)(param_1 + 0x488) & 0x40) != 0)) {
    fn_8261CB98(param_1,*(undefined4 *)(param_1 + 0x4c));
  }
  iVar1 = *(int *)(param_1 + 0xb10);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xb64) != 0)) {
    fn_8255CFD0(param_1,auStack_70);
    fn_825A1440(iVar1,auStack_70,param_1 + 0xd0);
  }
  fn_8262BDB0(param_1);
  fn_82592430(param_1,param_2);
  if (*(int *)(param_1 + 0xc58) != 0) {
    dVar2 = (double)(*(float *)(param_1 + 0xc58) - *(float *)(param_1 + 0xb3c));
    dVar4 = -dVar2;
    dVar3 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar3 = dVar2;
    }
    *(float *)(param_1 + 0xc58) = (float)dVar3;
    if (dVar3 == dVar5) {
      fn_82529320(param_1,0);
    }
  }
  return;
}


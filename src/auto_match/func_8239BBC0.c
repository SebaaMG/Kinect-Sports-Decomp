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
extern int fn_82399CB8();
extern int fn_8239C118();
extern int fn_82508078();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8239BBC0(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar4 = fn_82399CB8();
  piVar2 = *(int **)(((uint)LZCOUNT(iVar4) >> 3 & 4) + **(int **)(param_1 + 8));
  piVar3 = *(int **)(iVar4 * 4 + **(int **)(param_1 + 8));
  dVar8 = (double)(longlong)(int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  dVar9 = (double)(longlong)(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
  fVar1 = (float)(dVar8 - dVar9);
  dVar7 = dVar8;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar7 = dVar9;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar9 = dVar8;
  }
  if (*(int *)(*(int *)(param_1 + 0x2e0) + 0x60) == 0) {
    if ((int)(dVar7 - dVar9) < 8) {
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
      fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b4fcc,0);
      return;
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lVar5 = (ulonglong)(-1 < (int)(-lbl_83265A28 & ~lbl_83265A28)) + 0x2c;
  }
  else {
    uVar6 = (longlong)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (uint)uVar6;
    lVar5 = (-(ulonglong)((-uVar6 & ~uVar6 & 0xffffffff) >> 0x1f != 0) & 0xfffffffe) + 0x2b;
  }
  fn_8239C118(param_1,lVar5);
  return;
}


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
extern int fn_825529B0();
extern int fn_82552AD8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82191144;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F894;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82432868(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar4 = lbl_821CC160;
  if (*(int *)(*(int *)(param_1 + 4) + 0x7c) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar2 + 0x84) - lbl_8327F894;
    *(float *)(iVar2 + 0x84) = fVar1;
    if (fVar1 < fVar4) {
      *(float *)(iVar2 + 0x84) = fVar4;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x7c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x80) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x1c8) = 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + 4) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x1b8);
    }
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x80) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    fVar1 = lbl_82193AF0;
    if (*(float *)(iVar2 + 4) < *(float *)(iVar2 + 8)) {
      fVar1 = lbl_82191144;
    }
    *(float *)(iVar2 + 4) =
         (*(float *)(iVar2 + 8) - *(float *)(iVar2 + 4)) * fVar1 + *(float *)(iVar2 + 4);
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 4);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < fVar4) << 2) | (uint)(NAN(fVar1) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar1 = fVar4;
    }
    fVar3 = lbl_82005748;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 - lbl_82005748 < fVar4) << 2) |
                  (uint)(NAN(fVar1 - lbl_82005748) || NAN(fVar4)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(*(int *)(param_1 + 4) + 4) = fVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 0x1c8) != 0)) {
      *(undefined4 *)(iVar2 + 0x1b8) = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar5 = fn_825529B0(iVar2 + 0x1a0);
      if (iVar5 != 0) {
        fn_82552AD8((double)*(float *)(iVar2 + 0x1b8),iVar2 + 0x1a0,0xffffffff8327fb78);
      }
    }
    return;
  }
  return;
}


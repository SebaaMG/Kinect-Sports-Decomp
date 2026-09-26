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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _fStack_30 ((*(U64*)&fStack_30))
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_83027270();
extern int fn_8302A230();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8302A3C0(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  piVar3 = *(int **)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x40) * (float)param_2 + *(float *)(param_1 + 0x44);
  fVar2 = lbl_82002AE0;
  if (fVar1 - lbl_82002AE0 < 0.0) {
    fVar2 = fVar1;
  }
  if (fVar2 < 0.0) {
    fVar2 = lbl_821AAD20;
  }
  _fStack_30 = CONCAT44(*(float *)(param_1 + 0x58) * fVar2 + *(float *)(param_1 + 0x4c),
                        *(float *)(param_1 + 0x5c) * fVar2 + *(float *)(param_1 + 0x50));
  fStack_28 = *(float *)(param_1 + 0x60) * fVar2 + *(float *)(param_1 + 0x54);
  if (piVar3 != *(int **)(param_1 + 0x28)) {
    do {
      fn_83027270(*(undefined4 *)(*piVar3 + 0x38),&fStack_30);
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x28));
  }
  if (*(uint *)(param_1 + 0x38) <= param_2) {
    fn_8302A230(param_1);
  }
  return;
}


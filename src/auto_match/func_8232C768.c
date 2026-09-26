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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8232C768(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_4 != 0) {
    if ((param_2 < 3) || (param_2 == 6)) {
      fVar1 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x98);
      fVar3 = *(float *)(param_1 + 0x90) - fVar1;
      fVar2 = *(float *)(param_1 + 0x90);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = fVar1;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x78);
      fVar1 = *(float *)(param_1 + 0x94) - fVar2;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar2 = *(float *)(param_1 + 0x94);
      }
    }
    *(float *)(param_1 + 0x78) = fVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x8232c820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 100) + 0x1c))();
  return;
}


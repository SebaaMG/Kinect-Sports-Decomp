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
extern int fn_8232C528();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8232DBE0(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x7a4) == 0) {
    fn_8232C528(*(undefined4 *)(param_2 + 0xc),2);
  }
  fVar6 = lbl_821CC160;
  if ((*(int *)(param_2 + 100) != 0) && (*(int *)(param_2 + 0x68) != 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x68) - param_1);
    fVar4 = -fVar1;
    fVar5 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar5 = fVar1;
    }
    *(float *)(param_2 + 0x68) = fVar5;
    if (fVar5 == fVar6) {
      piVar2 = *(int **)(param_2 + 0xc);
      iVar3 = piVar2[2];
      piVar2[2] = 2;
      (**(code **)(*piVar2 + 0x14))(piVar2,iVar3,2);
    }
  }
  return;
}


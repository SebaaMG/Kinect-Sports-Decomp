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
extern float fRam831c6684;
extern float fRam831c6688;
extern int fn_824FC500();
extern int fn_8252AFE0();
extern int fn_8265CA20();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C667C;
extern unsigned int lbl_8327F894;


void fn_82475650(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  param_1 = param_2 * 0x18 + param_1;
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    dVar4 = (double)*(float *)(param_1 + 0x58);
    fVar1 = *(float *)(**(int **)(param_1 + 0x54) + 0x1fc);
    if ((dVar4 < (double)(fVar1 - fRam831c6688)) || ((double)(fRam831c6688 + fVar1) < dVar4)) {
      dVar6 = (double)lbl_831C667C;
      fVar3 = lbl_8327F894 / fRam831c6684;
      if (dVar4 != dVar6) {
        fVar3 = -fVar3;
      }
      dVar4 = (double)(fVar3 + fVar1);
      dVar5 = (double)lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) <
          0.0) {
        dVar4 = dVar5;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(dVar4 - dVar6) < dVar5) << 2) |
                    (uint)(NAN((double)(float)(dVar4 - dVar6)) || NAN(dVar5)) << 2)) < 0.0) {
        dVar6 = dVar4;
      }
    }
    else {
      dVar6 = (double)lbl_831C667C;
      if (dVar4 != (double)lbl_831C667C) {
        fn_8252AFE0((double)lbl_821CC160);
        iVar2 = *(int *)(param_1 + 0x54);
        if (iVar2 != 0) {
          fn_824FC500(iVar2);
          fn_8265CA20(iVar2);
        }
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
        return;
      }
    }
    fn_8252AFE0(dVar6);
  }
  return;
}


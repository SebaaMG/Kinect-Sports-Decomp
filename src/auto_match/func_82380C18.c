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
extern int fn_8254EEB8();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82380C18(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = lbl_821CC160;
  if (*(float *)(param_3 + 0x1fc) <= lbl_821CC160) {
    fVar1 = (float)(param_1 - (double)*(float *)(param_3 + 0x208));
    *(float *)(param_3 + 0x1fc) = (float)param_2;
    dVar3 = (double)lbl_82192D74;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < fVar2) << 2) | (uint)(NAN(fVar1) || NAN(fVar2)) << 2)) <
        0.0) {
      param_1 = (double)*(float *)(param_3 + 0x208);
    }
    *(float *)(param_3 + 0x208) = (float)param_1;
    if (*(int *)(*(int *)(param_3 + 0x1ec) + 4) != 0) {
      fVar1 = (float)((double)(float)(param_2 * dVar3) - (double)lbl_82191FC8);
      dVar3 = (double)(float)(param_2 * dVar3);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < fVar2) << 2) | (uint)(NAN(fVar1) || NAN(fVar2)) << 2)) <
          0.0) {
        dVar3 = (double)lbl_82191FC8;
      }
      fn_8254EEB8(param_2,dVar3,*(int *)(param_3 + 0x1ec),(int)param_1);
    }
  }
  return;
}


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
extern unsigned int lbl_82005748;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_823A0570(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  fVar4 = lbl_821CC160;
  fVar2 = param_2[2];
  dVar5 = (double)lbl_8218E8E8;
  fVar3 = *param_2 * lbl_82005748;
  fVar1 = (float)((double)fVar2 - dVar5);
  dVar7 = (double)lbl_82192D74;
  *(float *)(param_1 + 300) = fVar3;
  dVar6 = (double)fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < fVar4) << 2) | (uint)(NAN(fVar1) || NAN(fVar4)) << 2)) < 0.0)
  {
    dVar6 = dVar5;
  }
  if (*(int *)(*(int *)(param_1 + 0x40) + 4) != 0) {
    fVar1 = (float)((double)(float)(dVar6 * dVar7) - dVar5);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < fVar4) << 2) | (uint)(NAN(fVar1) || NAN(fVar4)) << 2)) <
        0.0) {
      dVar5 = (double)(float)(dVar6 * dVar7);
    }
    fn_8254EEB8(dVar6,dVar5,(double)param_2[1],*(int *)(param_1 + 0x40),(int)fVar3);
  }
  return;
}


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
extern float fRam831d19d0;
extern float fRam831d19dc;
extern int fn_8236C288();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_823C0720(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double extraout_f1;
  
  if (((*(int *)(param_2 + 0x4c0) == 0) && (iVar3 = *(int *)(param_2 + 0x54), iVar3 != 0)) &&
     (iVar3 != 1)) {
    fVar2 = *(float *)(param_2 + 0x474);
    *(float *)(param_2 + 0x480) = (float)((double)*(float *)(param_2 + 0x480) + param_1);
    fVar1 = (float)((double)(fVar2 / *(float *)(param_2 + 0x478)) * param_1 +
                   (double)*(float *)(param_2 + 0x47c));
    *(float *)(param_2 + 0x47c) = fVar1;
    if ((*(int *)(param_2 + 0x488) == 0) &&
       ((lbl_821CA460 - fVar1 / fVar2) * *(float *)(param_2 + 0x478) < fRam831d19dc)) {
      *(undefined4 *)(param_2 + 0x488) = 1;
    }
    if (fVar2 <= *(float *)(param_2 + 0x47c)) {
      *(float *)(param_2 + 0x47c) = fVar2;
      if (((iVar3 == 2) && (*(int *)(*(int *)(param_2 + 0x4b0) + 0xd4) == 0)) &&
         (iVar3 = fn_8236C288(param_2,0x14), iVar3 == 0)) {
        if ((double)*(float *)(param_2 + 0xe40) <= extraout_f1) {
          *(float *)(param_2 + 0xe40) = lbl_821CC160;
          return 1;
        }
        fVar1 = (float)((double)*(float *)(param_2 + 0xe40) - extraout_f1);
      }
      else {
        fVar2 = *(float *)(param_2 + 0xe40) - fRam831d19d0;
        fVar1 = *(float *)(param_2 + 0xe40);
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                      (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
          fVar1 = fRam831d19d0;
        }
      }
      *(float *)(param_2 + 0xe40) = fVar1;
    }
  }
  return 0;
}


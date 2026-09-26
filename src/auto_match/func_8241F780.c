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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8235CDC8();
extern int fn_824E94F0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;


void fn_8241F780(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 0x2b20)) {
    iVar3 = fn_8235CDC8(iVar2,&fStack_28,&fStack_30);
    if (iVar3 != 0) {
      fVar1 = (float)((double)*(float *)(iVar2 + 0x2cbc) + param_1);
      *(float *)(iVar2 + 0x2cbc) = fVar1;
      *(undefined4 *)(iVar2 + 0x2cc0) = 1;
      if (lbl_821916FC < fVar1) {
        fn_824E94F0(-(double)(float)((double)fStack_30 * (double)lbl_8218E8E8 -
                                          (double)fStack_28),
                          -(double)(float)((double)fStack_2c * (double)lbl_8218E8E8 -
                                          (double)fStack_24),(double)fStack_30,(double)fStack_2c);
      }
    }
  }
  return;
}


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
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82810328();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;


float * fn_82874AE0(float *param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  fVar2 = lbl_821CA1A8;
  fVar3 = lbl_821CA1A4;
  if (*(int *)(param_2 + 0x14) == 0) {
    *param_1 = lbl_821CA1A0;
    param_1[1] = fVar3;
    param_1[2] = fVar2;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x18);
    dVar6 = (double)lbl_82005C88;
    fVar3 = lbl_821CA1A0;
    fVar2 = lbl_821CA1A4;
    fVar1 = lbl_821CA1A8;
    if (uVar4 != *(uint *)(param_2 + 0x1c)) {
      do {
        fn_82810328(param_3,uVar4,&fStack_60);
        dVar5 = (double)(fStack_60 * fStack_60 + fStack_58 * fStack_58 + fStack_5c * fStack_5c);
        if (dVar5 < dVar6) {
          dVar6 = dVar5;
          fVar3 = fStack_60;
          fVar2 = fStack_5c;
          fVar1 = fStack_58;
        }
        uVar4 = uVar4 + 0xc;
      } while ((uVar4 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 0x1c));
    }
    *param_1 = fVar3;
    param_1[1] = fVar2;
    param_1[2] = fVar1;
  }
  return param_1;
}


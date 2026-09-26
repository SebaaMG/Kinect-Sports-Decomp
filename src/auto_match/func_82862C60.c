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
extern int fn_82811700();
extern int fn_82811898();


void fn_82862C60(float *param_1,uint param_2,float *param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  
  fn_82811898((double)*param_1,(double)param_1[1],param_3);
  fn_82811700(param_3,param_4);
  if (1 < (param_2 & 0xffff)) {
    uVar2 = 1;
    do {
      fVar1 = param_1[uVar2 * 2];
      if (*param_3 <= fVar1) {
        if (*param_4 < fVar1) {
          *param_4 = fVar1;
        }
      }
      else {
        *param_3 = fVar1;
      }
      fVar1 = (param_1 + uVar2 * 2)[1];
      if (param_3[1] <= fVar1) {
        if (param_4[1] < fVar1) {
          param_4[1] = fVar1;
        }
      }
      else {
        param_3[1] = fVar1;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < (param_2 & 0xffff));
  }
  return;
}


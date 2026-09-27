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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_829DBE60();
extern int fn_829DDF00();
extern unsigned int lbl_82002C5C;
extern float lbl_82015BE0;
extern float lbl_820579A8;


void fn_829DE2A8(int *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = SQRT((float)(longlong)(param_1[0x10] - param_1[8]) *
               (float)(longlong)(param_1[0x10] - param_1[8]) +
               (float)(longlong)((param_1[0x11] - param_1[9]) * (param_1[0x11] - param_1[9]))) *
          lbl_820579A8;
  fVar1 = fVar2 + lbl_82002C5C;
  *param_3 = (int)((float)(longlong)(param_1[4] + param_1[2] + *param_1) * lbl_82015BE0 -
                  fVar2 * lbl_82002C5C);
  param_3[1] = param_1[5];
  param_3[2] = (int)fVar1 + *param_3;
  param_3[3] = param_1[1];
  iVar3 = fn_829DBE60();
  fn_829DDF00(param_2,param_3,*(undefined4 *)(iVar3 + 0x20),param_4);
  return;
}


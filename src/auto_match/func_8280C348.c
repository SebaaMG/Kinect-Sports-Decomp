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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82810280();
extern int fn_828105C8();


void fn_8280C348(float *param_1,float *param_2)

{
  double dVar1;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  fStack_50 = param_1[0xc];
  fStack_4c = param_1[0xd];
  fStack_48 = param_1[0xe];
  *param_2 = *param_1;
  param_2[4] = param_1[1];
  param_2[8] = param_1[2];
  param_2[1] = param_1[4];
  param_2[5] = param_1[5];
  param_2[9] = param_1[6];
  param_2[2] = param_1[8];
  param_2[6] = param_1[9];
  param_2[10] = param_1[10];
  fn_828105C8((double)*param_2,(double)param_2[4],(double)param_2[8],auStack_40);
  fn_828105C8((double)param_2[1],(double)param_2[5],(double)param_2[9],auStack_30);
  fn_828105C8((double)param_2[2],(double)param_2[6],(double)param_2[10],auStack_20);
  dVar1 = (double)fn_82810280(&fStack_50,auStack_40);
  param_2[0xc] = (float)-dVar1;
  dVar1 = (double)fn_82810280(&fStack_50,auStack_30);
  param_2[0xd] = (float)-dVar1;
  dVar1 = (double)fn_82810280(&fStack_50,auStack_20);
  param_2[0xe] = (float)-dVar1;
  return;
}


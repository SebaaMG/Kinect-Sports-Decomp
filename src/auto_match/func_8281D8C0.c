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
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8280A668();
extern int fn_82810B78();
extern unsigned int lbl_82002AE0;


void fn_8281D8C0(float *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  fn_8280A668(param_1,&fStack_3c,&fStack_40);
  dVar5 = (double)(lbl_82002AE0 - fStack_40);
  fn_82810B78(param_2,&fStack_38);
  dVar4 = (double)fStack_40;
  param_1[4] = (float)((double)(fStack_34 * fStack_34) * dVar5 + dVar4);
  fVar1 = (float)((double)(fStack_34 * fStack_38) * dVar5);
  fVar2 = (float)((double)(fStack_30 * fStack_38) * dVar5);
  fVar3 = (float)((double)(fStack_30 * fStack_34) * dVar5);
  *param_1 = (float)((double)(fStack_38 * fStack_38) * dVar5 + dVar4);
  param_1[8] = (float)((double)(fStack_30 * fStack_30) * dVar5 + dVar4);
  param_1[3] = fVar1 - fStack_30 * fStack_3c;
  param_1[6] = fStack_34 * fStack_3c + fVar2;
  param_1[1] = fStack_30 * fStack_3c + fVar1;
  param_1[2] = fVar2 - fStack_34 * fStack_3c;
  param_1[7] = fVar3 - fStack_38 * fStack_3c;
  param_1[5] = fStack_38 * fStack_3c + fVar3;
  return;
}


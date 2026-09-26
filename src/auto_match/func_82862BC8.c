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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8280A5D8();
extern int fn_82810328();
extern int fn_8306B530();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82862BC8(double param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  float fVar1;
  bool bVar2;
  double dVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  fn_82810328(param_2,param_3,&fStack_40);
  bVar2 = fStack_38 == lbl_821AAD20;
  *(bool *)param_6 = bVar2;
  if (!bVar2) {
    dVar3 = (double)fn_8280A5D8();
    fVar1 = (float)((double)(float)(param_1 - (double)param_3[2]) * dVar3);
    fn_8306B530((double)(fStack_40 * fVar1 + *param_3),(double)(fStack_3c * fVar1 + param_3[1]),
                 param_1,(double)lbl_82002AE0,param_5);
  }
  return;
}


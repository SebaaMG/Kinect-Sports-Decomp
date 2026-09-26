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
extern unsigned int *auStack_1a;
extern int fn_828171F8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


double fn_82817578(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  ushort auStack_1a [5];
  
  dVar2 = (double)fn_828171F8(param_1,param_2,auStack_1a,&uStack_1c,&uStack_1e,&uStack_20,param_4)
  ;
  dVar6 = (double)*(float *)((uint)uStack_1e * 4 + param_3);
  dVar5 = (double)*(float *)((uint)uStack_1c * 4 + param_3);
  dVar7 = (double)*(float *)((uint)uStack_20 * 4 + param_3);
  dVar3 = (double)(float)(dVar6 - dVar5);
  dVar4 = (double)*(float *)((uint)auStack_1a[0] * 4 + param_3);
  dVar1 = (double)lbl_82002C5C;
  return (double)(float)((double)(float)((double)(float)((double)(float)((double)(float)((double)(
                                                  float)(dVar7 - dVar4) - dVar3) * dVar1 - dVar3) *
                                                  dVar2 + -(double)(float)((double)(float)(dVar5 + 
                                                  dVar7) * dVar1 -
                                                  (double)(float)(dVar3 * (double)lbl_82005344 +
                                                                 dVar4))) * dVar2 +
                                        (double)(float)((double)(float)(dVar6 - dVar4) * dVar1)) *
                         dVar2 + dVar5);
}


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
extern unsigned int lbl_820151C0;
extern float lbl_8201E104;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


double fn_82817628(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  ushort auStack_1a;
  
  dVar6 = (double)fn_828171F8(param_1,param_2,&uStack_1c,&uStack_1e,&uStack_20,&auStack_1a,param_4)
  ;
  fVar1 = *(float *)((uint)uStack_20 * 4 + param_3);
  fVar4 = fVar1 * lbl_82002C5C;
  fVar2 = *(float *)((uint)uStack_1c * 4 + param_3);
  fVar3 = *(float *)((uint)uStack_1e * 4 + param_3);
  fVar5 = fVar2 * lbl_82002C5C;
  fVar2 = fVar2 * lbl_8201E104;
  return (double)(float)((double)(float)((double)(float)((double)((*(float *)((uint)auStack_1a *
                                                                              4 + param_3) *
                                                                   lbl_8201E104 +
                                                                  (fVar3 * lbl_82002C5C - fVar4)) -
                                                                 fVar2) * dVar6 +
                                                        (double)((fVar5 - fVar3) + fVar4)) * dVar6 +
                                        (double)(fVar4 - fVar5)) * dVar6 +
                        (double)(fVar3 * lbl_820151C0 + fVar1 * lbl_8201E104 + fVar2));
}


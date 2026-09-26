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
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_827EC650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_40 [40];
  
  dVar2 = (double)fn_82810308();
  dVar3 = (double)fn_82810280(param_1,param_2);
  dVar2 = (double)(float)(dVar2 - dVar3);
  if ((double)lbl_821AAD20 <= dVar2) {
    dVar3 = (double)fn_82810308(param_2);
    if (dVar3 <= dVar2) {
      dVar2 = (double)fn_82810308(param_2);
      if ((double)lbl_82002AE0 < dVar2) {
        return 0;
      }
      return 1;
    }
    fn_828102A8(-dVar3,param_1,auStack_40);
    fn_82810590(dVar2,param_2,auStack_40,param_3,auStack_40);
    dVar2 = (double)fn_82810308(auStack_40);
    fVar1 = (float)(dVar3 * dVar3);
  }
  else {
    dVar2 = (double)fn_82810308(param_1);
    fVar1 = lbl_82002AE0;
  }
  if ((double)fVar1 < dVar2) {
    return 0;
  }
  return 1;
}


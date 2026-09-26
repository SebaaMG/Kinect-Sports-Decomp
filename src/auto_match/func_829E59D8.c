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
extern unsigned int lbl_82057B9C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829E59D8(double param_1,double param_2,double param_3,double param_4,int *param_5)

{
  uint *in_r8;
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)lbl_821AAD20 < param_4) {
    if (in_r8 == (uint *)0x0) {
      return 0xffffffff80070057;
    }
    if (*param_5 != 0) {
      dVar1 = (double)(float)((double)(float)(param_2 / param_4) * param_1);
      dVar2 = dVar1;
      if (dVar1 < param_3) {
        dVar2 = param_3;
      }
      if (param_3 < dVar1) {
        dVar1 = param_3;
      }
      dVar3 = (double)lbl_82057B9C;
      if (dVar1 <= dVar3) {
        dVar1 = dVar3;
      }
      *in_r8 = (uint)(dVar3 < (double)(float)((double)(float)(dVar2 / dVar1) - dVar3));
      return 0;
    }
  }
  return 0xffffffff8000ffff;
}


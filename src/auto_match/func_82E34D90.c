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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_82E34AF8();
extern int fn_82E34C68();
extern unsigned int lbl_821AAD20;


undefined8 fn_82E34D90(int *param_1,int param_2,undefined2 *param_3,float *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = 0;
  if ((((param_1 == (int *)0x0) || (param_3 == (undefined2 *)0x0)) || (param_2 == 0)) ||
     (param_4 == (float *)0x0)) {
    return 0xffffffff80070057;
  }
  param_4[1] = -(_seed_nan);
  dVar3 = (double)lbl_821AAD20;
  *param_4 = lbl_821AAD20;
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      dVar2 = (double)fn_82E34C68(param_1[5],*param_3);
      *param_4 = (float)dVar2;
    }
    else {
      uVar1 = fn_82E34AF8(*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_2 + 4),*param_3);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    if ((double)*param_4 < dVar3) {
      return 0xffffffff80070057;
    }
  }
  return uVar1;
}


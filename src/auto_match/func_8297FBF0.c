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
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


undefined8 fn_8297FBF0(undefined8 param_1,double *param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  
  uVar1 = *param_3;
  if (uVar1 == 0) {
    dVar3 = lbl_82005710;
    if (param_3[2] != 0) {
      dVar3 = lbl_82005758;
    }
  }
  else {
    if (uVar1 == 1) {
      uVar2 = (ulonglong)(int)param_3[2];
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) {
          return 0xffffffff80004005;
        }
        dVar3 = *(double *)(param_3 + 2);
        goto LAB_8297fc64;
      }
      uVar2 = (ulonglong)param_3[2];
    }
    dVar3 = (double)(longlong)uVar2;
  }
LAB_8297fc64:
  *param_2 = dVar3;
  return 0;
}


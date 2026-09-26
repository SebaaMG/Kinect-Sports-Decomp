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
extern int fn_82528948();
extern int fn_8252BDB8();
extern int fn_8252D020();
extern int fn_82A81DA8();
extern unsigned int lbl_821CC160;


void fn_825010E8(int param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 0xb64) != 0) {
    fn_8252D020(param_1,1);
    *(undefined4 *)(param_1 + 0xb64) = 0;
  }
  fn_8252BDB8(param_1,param_2);
  if (lbl_821CC160 < *(float *)(param_1 + 0xffc)) {
    dVar2 = (double)fn_82A81DA8(param_2);
    fVar1 = (float)((double)*(float *)(param_1 + 0xffc) / dVar2);
    if (((*(float *)(param_1 + 0xa0) != fVar1) || (*(float *)(param_1 + 0xa4) != fVar1)) ||
       (*(float *)(param_1 + 0xa8) != fVar1)) {
      *(float *)(param_1 + 0xa0) = fVar1;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(float *)(param_1 + 0xa4) = fVar1;
      *(float *)(param_1 + 0xa8) = fVar1;
      fn_82528948(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0xb68) = 0;
  return;
}


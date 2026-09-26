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
extern int fn_82F655D8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820570D4;
extern unsigned int lbl_8217D2F8;
extern unsigned int lbl_8217D2FC;
extern unsigned int lbl_8217D300;
extern unsigned int uStack_1c;


void fn_8303A350(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uStack_1c;
  
  if ((*(char *)(param_2 + 0x4f) != '\0') || (param_1 != (double)*(float *)(param_2 + 0x48))) {
    if ((float)(param_1 - (double)lbl_8217D300) < 0.0) {
      param_1 = (double)lbl_8217D300;
    }
    dVar2 = (double)lbl_8217D2FC;
    if ((float)(param_1 - (double)lbl_8217D2FC) < 0.0) {
      dVar2 = param_1;
    }
    dVar1 = (double)fn_82F655D8(lbl_82002C40,(double)(float)(dVar2 * (double)lbl_8217D2F8));
    *(float *)(param_2 + 0x48) = (float)dVar2;
    *(undefined4 *)(param_2 + 0x2c) = 0x400;
    uStack_1c = (undefined4)
                (longlong)
                ((double)(*(float *)(param_2 + 0x44) * (float)dVar1 * lbl_820570D4) + lbl_82005730);
    *(undefined4 *)(param_2 + 0x24) = uStack_1c;
    *(undefined4 *)(param_2 + 0x28) = uStack_1c;
  }
  return;
}


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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8227DA30(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  dVar1 = (double)lbl_821CC160;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((param_1 < dVar1) << 2) | (uint)(NAN(param_1) || NAN(dVar1)) << 2)) <
      0.0) {
    param_1 = dVar1;
  }
  dVar2 = (double)(float)(param_1 - (double)lbl_821CA460);
  dVar3 = (double)lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar2 < dVar1) << 2) | (uint)(NAN(dVar2) || NAN(dVar1)) << 2)) < 0.0)
  {
    dVar3 = param_1;
  }
  if (dVar3 != (double)*(float *)(param_2 + 0x48)) {
    *(float *)(param_2 + 0x48) = (float)dVar3;
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,3);
    dStack_28 = dVar3;
    fn_82672C20(*(undefined4 *)(param_2 + 0x3c),0xffffffff821a8744,&uStack_30,1);
    fn_82273C88(&uStack_30);
  }
  return;
}


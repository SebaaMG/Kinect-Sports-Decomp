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
extern float fRam831d44fc;
extern float fRam831d4500;
extern float fRam831d4504;
extern int fn_8227CB30();
extern int fn_82359C18();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;


undefined8
fn_825521F0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)lbl_821CC160;
  if (dVar2 < param_2) {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((param_1 < dVar2) << 2) | (uint)(NAN(param_1) || NAN(dVar2)) << 2))
        < 0.0) {
      param_1 = dVar2;
    }
    fRam831d4504 = (float)param_2;
    dVar4 = (double)(float)(param_1 - (double)lbl_821CA460);
    dVar3 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar2) << 2) | (uint)(NAN(dVar4) || NAN(dVar2)) << 2)) <
        0.0) {
      dVar3 = param_1;
    }
    fRam831d44fc = (float)dVar3;
    fRam831d4500 = (float)((double)(float)(dVar3 - (double)lbl_831D44F8) / param_2);
    fn_8227CB30(0xffffffff831d4510,param_5);
    uVar1 = 1;
    lbl_831D4508 = 1;
  }
  else {
    uVar1 = 0;
  }
  fn_82359C18(param_5);
  return uVar1;
}


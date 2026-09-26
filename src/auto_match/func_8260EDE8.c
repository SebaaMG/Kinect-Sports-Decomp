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
extern int fn_8257E190();
extern int fn_8265C9E0();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8260EDE8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  double dVar4;
  
  if (param_5 == 0) {
    dVar4 = (double)(*(float *)(param_3 + 8) - *(float *)(param_3 + 4));
    uVar2 = **(undefined4 **)(param_1 + 0x60);
    uVar3 = fn_8265C9E0(0x80);
    if ((uVar3 & 0xffffffff) != 0) {
      fVar1 = (float)(dVar4 - (double)lbl_82193AF0);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        dVar4 = (double)lbl_82193AF0;
      }
      fn_8257E190(dVar4,(double)*(float *)(param_3 + 0x10),uVar3,uVar2);
    }
  }
  return;
}


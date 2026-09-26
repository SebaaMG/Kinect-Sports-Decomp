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
extern unsigned int fStack00000024;
extern unsigned int fStack0000002c;
extern unsigned int fStack00000034;
extern unsigned int fStack0000003c;
extern unsigned int fStack00000044;
extern unsigned int fStack0000004c;
extern unsigned int fStack00000054;
extern unsigned int fStack0000005c;
extern int fn_822315A0();
extern int fn_82566018();
extern int fn_825661E0();
extern int fn_8265C9E0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000044;
extern unsigned int uStack0000001c;


void fn_82564658(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,longlong param_9,undefined4 param_10)

{
  ulonglong uVar1;
  undefined4 uStack0000001c;
  float fStack00000024;
  float fStack0000002c;
  float fStack00000034;
  float fStack0000003c;
  float fStack00000044;
  float fStack0000004c;
  float fStack00000054;
  float fStack0000005c;
  int iStack_20;
  int iStack_1c;
  
  fStack00000024 = (float)param_1;
  fStack0000002c = (float)param_2;
  fStack00000034 = (float)param_3;
  fStack0000003c = (float)param_4;
  fStack00000044 = (float)param_5;
  fStack0000004c = (float)param_6;
  fStack00000054 = (float)param_7;
  fStack0000005c = (float)param_8;
  uStack0000001c = param_10;
  uVar1 = fn_8265C9E0(0x80);
  if ((uVar1 & 0xffffffff) == 0) {
    iStack_1c = 0;
  }
  else {
    iStack_1c = fn_825661E0(uVar1,param_9,&stack0x0000001c,&stack0x00000024,&stack0x0000002c,
                                  &stack0x00000034,&stack0x0000003c,&stack0x00000044);
  }
  iStack_20 = iStack_1c + 0x10;
  fn_82566018(param_9 + 0x14,&iStack_20);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}


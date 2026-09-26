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
extern unsigned int fStack_30;
extern unsigned int fStack_3c;
extern int fn_82554860();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8246B320(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fStack_3c = (float)param_1;
  fStack_30 = (float)param_2;
  uStack_4c = lbl_821CA460;
  uStack_48 = lbl_821CC160;
  uStack_50 = 0x4d697850;
  uStack_40 = lbl_821917C0;
  uStack_44 = 0x20;
  uStack_34 = 0x40;
  uStack_2c = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = param_7;
  fn_82554860(*(undefined4 *)(param_3 + 0xc4),0,param_4,&uStack_50);
  return;
}


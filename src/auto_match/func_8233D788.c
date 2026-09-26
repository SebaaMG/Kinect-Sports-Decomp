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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack0000001c;
extern unsigned int fStack00000024;
extern unsigned int fStack0000002c;
extern unsigned int fStack00000034;
extern int fn_8223C478();
extern int fn_8224EA58();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern int fn_828E9DB8();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


void fn_8233D788(double param_1,double param_2,double param_3,double param_4,int *param_5)

{
  float fStack0000001c;
  float fStack00000024;
  float fStack0000002c;
  float fStack00000034;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fStack0000001c = (float)param_1;
  fStack00000024 = (float)param_2;
  fStack0000002c = (float)param_3;
  fStack00000034 = (float)param_4;
  (**(code **)(*param_5 + 0x40))(param_5,auStack_50);
  puStack_30 = auStack_50;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 0x10;
  fn_828E9D28(auStack_40,auStack_50,0x10);
  fn_8223C478(auStack_40,0x20,0);
  fn_828E9DB8(auStack_40,fStack0000001c,0x20);
  fn_8223C478(auStack_40,0x20,0);
  fn_828E9DB8(auStack_40,fStack00000024,0x20);
  fn_8223C478(auStack_40,0x20,0);
  fn_828E9DB8(auStack_40,fStack0000002c,0x20);
  fn_8223C478(auStack_40,0x20,0);
  fn_828E9DB8(auStack_40,fStack00000034,0x20);
  fn_8224EA58(param_5,auStack_50);
  if (iStack_28 != 0) {
    fn_8265CA20();
  }
  return;
}


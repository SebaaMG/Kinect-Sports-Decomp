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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8258EE70();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8258D810(double param_1,double param_2,double param_3,double param_4,longlong param_5)

{
  int in_r8;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(in_r8 + 0x10) != 0) {
    uStack_60 = CONCAT44((float)param_1,(float)param_2);
    fStack_70 = (float)param_3;
    fStack_6c = (float)param_4;
    uStack_58 = CONCAT44(fStack_70,fStack_6c);
    fn_8223B688(auStack_50,in_r8);
    uStack_30 = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
    uStack_2c = (((U64)(uStack_58) >> 0) & 0xFFFFFFFF);
    uStack_28 = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
    fn_8258EE70(&fStack_70,param_5 + 0x1b0,auStack_50);
    fn_82230300(auStack_50,1,0);
  }
  fn_82230300(in_r8,1,0);
  return;
}


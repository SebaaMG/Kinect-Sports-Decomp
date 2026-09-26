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
extern int fn_82410670();
extern int fn_82809950();
extern unsigned int lbl_82191208;
extern unsigned int lbl_821CC160;


double fn_82410618(void)

{
  int iVar1;
  double extraout_f1;
  double dVar2;
  
  iVar1 = fn_82410670();
  dVar2 = (double)lbl_821CC160;
  if (dVar2 < extraout_f1) {
    dVar2 = (double)(float)((double)*(float *)(*(int *)(iVar1 + 0x274) + 0xa0) * extraout_f1);
    fn_82809950((double)lbl_82191208);
  }
  return dVar2;
}


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
extern int fn_82FA5060();
extern int fn_82FAE780();
extern int fn_82FAFD70();
extern unsigned int lbl_8216CD20;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;


int * fn_82FAE9A0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_82FA5060(lbl_831BC768,0xb0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    fn_82FAFD70(piVar1,param_1);
    *piVar1 = (int)&lbl_8216CD20;
    piVar1[7] = (int)&lbl_8217C940;
    piVar1[0x28] = 0;
    piVar1[0x29] = 0;
    piVar1[0x2a] = 0;
    piVar1[0x2b] = 0;
    iVar2 = fn_82FAE780(piVar1);
    if (iVar2 != 1) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}


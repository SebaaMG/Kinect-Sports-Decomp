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
extern int fn_82681E98();
extern int fn_8269A800();
extern int fn_8269F500();
extern int fn_826C59F8();


void fn_826CA070(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_826C59F8();
  if (piVar1 != (int *)0x0) {
    if (piVar1[5] < 0x4000) {
      iVar2 = piVar1[0x20];
      if (iVar2 == 0) {
        iVar2 = fn_8269F500(piVar1);
      }
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*piVar1 + 0x58))(piVar1);
        iVar2 = *(int *)(iVar2 + 0x78);
      }
      fn_82681E98(piVar1 + 3,0xffffffff8200bea4,**(undefined4 **)(iVar2 + 8));
    }
    else {
      fn_8269A800(piVar1);
    }
  }
  return;
}


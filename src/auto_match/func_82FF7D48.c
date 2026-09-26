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
extern unsigned int *auStack_c;
extern int fn_82FF5F30();


void fn_82FF7D48(int *param_1,int param_2)

{
  int *piVar1;
  int *piStack_10;
  undefined1 auStack_c [12];
  
  piStack_10 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piStack_10 != piVar1) {
    do {
      if (*piStack_10 == param_2) break;
      piStack_10 = piStack_10 + 4;
    } while (piStack_10 != piVar1);
    if (piStack_10 != piVar1) {
      fn_82FF5F30(auStack_c,param_1,&piStack_10);
    }
  }
  return;
}


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
extern unsigned int *auStack_2c;
extern int fn_82FA5190();
extern int fn_83015060();
extern unsigned int lbl_831BC768;


void fn_83015270(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piStack_30;
  undefined1 auStack_2c [44];
  
  piVar1 = *(int **)(param_1 + 0x88);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x8c)) {
      return;
    }
    if (((*piVar1 == param_2) && (piVar1[3] == param_3)) && (piVar1[2] == param_4)) break;
    piVar1 = piVar1 + 7;
  }
  piStack_30 = piVar1;
  if (piVar1[4] != 0) {
    fn_82FA5190(lbl_831BC768);
    piVar1[4] = 0;
  }
  piVar1[5] = 0;
  piVar1[6] = 0;
  fn_83015060(auStack_2c,param_1 + 0x88,&piStack_30);
  return;
}


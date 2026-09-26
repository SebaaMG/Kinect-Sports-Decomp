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
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_82021574;
extern unsigned int lbl_82021590;


void fn_8286D600(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[1];
  *param_1 = &lbl_82021590;
  piVar2 = piVar3;
  if (piVar3 != (int *)param_1[2]) {
    do {
      piVar2 = piVar2 + 1;
      piVar1 = (int *)*piVar3;
      fn_82F63CA0(piVar3,piVar2,(param_1[2] - (int)piVar2 >> 2) << 2);
      param_1[2] = param_1[2] + -4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x30))(piVar1,1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[2]);
  }
  if (param_1[1] != 0) {
    fn_8265CA20();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_82021574;
  return;
}


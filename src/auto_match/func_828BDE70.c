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
extern int fn_822FF888();
extern int fn_8265CA20();
extern int fn_828877E8();
extern int fn_828B55B0();
extern int fn_828BDC38();
extern int fn_82F63108();
extern unsigned int lbl_82025550;
extern unsigned int lbl_82025988;


void fn_828BDE70(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &lbl_82025550;
  param_1[0x14] = &lbl_82025988;
  piVar2 = param_1 + 0x1c;
  piVar3 = *(int **)param_1[0x1c];
  if (piVar3 != (int *)param_1[0x1c]) {
    do {
      piVar1 = (int *)*piVar3;
      piVar3 = (int *)piVar3[6];
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*piVar3 + 4))(piVar3,param_1);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*piVar2);
  }
  fn_828BDC38(piVar2);
  fn_8265CA20(*piVar2);
  fn_828B55B0(param_1 + 0x18);
  fn_822FF888(param_1 + 0x14);
  fn_828877E8(param_1);
  return;
}


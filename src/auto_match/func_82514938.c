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
extern int fn_822315A0();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_82514AD8();
extern unsigned int iStack_2c;
extern unsigned int lbl_83297810;


void fn_82514938(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  int *piStack_30;
  int iStack_2c;
  
  if (((int)param_3 == 2) && (cVar1 = (**(code **)(*param_1 + 0x74))(), cVar1 != '\0')) {
    fn_82514AD8(param_1,1);
  }
  uVar2 = (ulonglong)lbl_83297810;
  if (uVar2 == 0) {
    uVar2 = fn_82511928();
  }
  fn_82513A80(&piStack_30,uVar2,param_1);
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 4))(piStack_30,param_2,param_3);
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}


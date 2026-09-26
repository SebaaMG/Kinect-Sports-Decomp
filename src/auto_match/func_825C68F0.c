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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C9134;


void fn_825C68F0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = &lbl_821C9134;
  piVar2 = (int *)param_1[2];
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,1);
      *piVar2 = 0;
    }
    piVar1 = (int *)piVar2[1];
    fn_82522ED8(piVar2);
    piVar2 = piVar1;
  }
  param_1[2] = 0;
  if (param_1[4] != 0) {
    fn_8251FA58();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    fn_8251FA58();
    param_1[5] = 0;
  }
  *param_1 = &lbl_821C1424;
  return;
}


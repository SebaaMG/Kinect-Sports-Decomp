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
extern unsigned int *auStack_28;
extern int fn_82E25C48();
extern int fn_82E2D068();
extern int fn_82E4FE40();
extern unsigned int iStack_2c;


longlong fn_82E2D118(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piStack_30;
  int iStack_2c;
  undefined4 auStack_28 [10];
  
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1,0xffffffff821534c8,&iStack_2c,auStack_28);
  if (((-1 < lVar2) && (lVar2 = fn_82E2D068(&piStack_30), -1 < lVar2)) &&
     (lVar2 = fn_82E25C48(piStack_30,iStack_2c,auStack_28[0]), piVar1 = piStack_30, -1 < lVar2
     )) {
    piStack_30 = (int *)0x0;
    *param_2 = piVar1;
  }
  if (iStack_2c != 0) {
    fn_82E4FE40();
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))(piStack_30);
  }
  return lVar2;
}


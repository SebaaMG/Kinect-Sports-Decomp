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
extern int fn_82A4B708();
extern int fn_82A4F4E0();
extern int fn_82A599E8();
extern int fn_82A5C8F8();


void fn_82A4BB80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1[0x12] != 0) && (*(int *)(param_1[0x12] + 0x80) != 0)) {
    (**(code **)(*param_1 + 0x3c))(param_1,1);
  }
  fn_82A4B708(param_1);
  iVar1 = param_1[0x11];
  if (iVar1 != 0) {
    fn_82A599E8(iVar1);
    fn_82A4F4E0(iVar1);
    param_1[0x11] = 0;
  }
  iVar1 = param_1[0x13];
  if (iVar1 != 0) {
    fn_82A5C8F8(iVar1);
    fn_82A4F4E0(iVar1);
    param_1[0x13] = 0;
  }
  piVar2 = (int *)param_1[0x12];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2,0);
    fn_82A4F4E0();
    param_1[0x12] = 0;
  }
  return;
}


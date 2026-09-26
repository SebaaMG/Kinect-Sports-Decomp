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
extern int fn_827DC8B8();
extern int fn_827E0B50();


void fn_827DC1E8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piStack00000014;
  
  puVar2 = (undefined4 *)*param_1;
  piStack00000014 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined4 *)param_1[0x2d8];
  for (puVar1 = (undefined4 *)*puVar2; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    puVar2 = (undefined4 *)puVar1[3];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined4 *)param_1[0x2d8];
  }
  fn_827DC8B8(param_1 + 0x2f5);
  fn_827E0B50(param_1 + 0x2d7);
  fn_827DC8B8(param_1 + 0xb);
  fn_827DC8B8(param_1 + 1);
  return;
}


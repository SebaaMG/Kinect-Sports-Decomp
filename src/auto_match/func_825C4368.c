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
extern int fn_825FB360();
extern int fn_82614908();


void fn_825C4368(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (piVar1 = *(int **)(param_4 + 0xb90); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (param_1 <= (double)*(float *)(*piVar1 + 0x14)) {
      fn_825FB360(param_1,*piVar1,param_4);
    }
  }
  for (puVar2 = *(undefined4 **)(param_4 + 0xb94); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    fn_82614908(param_1,param_2,*puVar2);
  }
  return;
}


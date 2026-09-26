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
extern int fn_82E50BE8();
extern int fn_82E630D0();
extern int fn_82E63940();


longlong fn_82E63998(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = fn_82E50BE8(100,0,0,0,0);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E63940();
    }
    if (piVar2 == (int *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = fn_82E630D0(piVar2,param_1,param_2);
      if (-1 < lVar3) {
        *param_3 = piVar2;
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
  }
  return lVar3;
}


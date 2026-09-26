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
extern int fn_82E64598();


longlong fn_82E64618(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = fn_82E50BE8(0xbc,0,0,0,0);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82E64598();
  }
  if (piVar2 == (int *)0x0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,0xffffffff82154ea8);
    if (-1 < lVar3) {
      *param_1 = piVar2;
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return lVar3;
}


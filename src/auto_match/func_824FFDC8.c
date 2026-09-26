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
extern int fn_825735B8();


void fn_824FFDC8(int param_1,int param_2,char param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (lVar1 = (ulonglong)*(uint *)(param_1 + 0x8c0) + 0x128, lVar1 != 0)) {
    if (param_2 == 0) {
      uVar3 = 0xffffffff821c21e4;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      uVar3 = 0xffffffff821c21f8;
    }
    piVar2 = (int *)fn_825735B8(lVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      if (param_3 == '\0') {
        *(undefined4 *)(piVar2[1] + 400) = 0;
      }
      else {
        (**(code **)(*piVar2 + 8))(piVar2,5,0);
      }
    }
  }
  return;
}


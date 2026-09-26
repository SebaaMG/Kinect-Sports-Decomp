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
extern unsigned int *auStack_30;
extern int fn_82E50BE8();
extern int fn_82E7A468();


ulonglong fn_82F3E260(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  uint auStack_30 [12];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    piVar2 = (int *)0x0;
    *param_2 = 0;
    auStack_30[0] = 0;
    uVar1 = fn_82E50BE8(0x358,0,0,0,0);
    if ((uVar1 & 0xffffffff) != 0) {
      piVar2 = (int *)fn_82E7A468(uVar1,*(undefined4 *)(param_1 + 0xc),auStack_30);
    }
    uVar1 = (ulonglong)auStack_30[0];
    if (-1 < (int)auStack_30[0]) {
      if (piVar2 == (int *)0x0) {
        uVar1 = 0xffffffff8007000e;
      }
      else {
        auStack_30[0] = (**(code **)*piVar2)(piVar2,0xffffffff82154c78,param_2);
        (**(code **)(*piVar2 + 8))(piVar2);
        uVar1 = (longlong)((int)auStack_30[0] >> 0x1f) & (ulonglong)auStack_30[0];
      }
    }
  }
  return uVar1;
}


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
extern int fn_82EE2AD0();
extern int fn_82F34930();


longlong fn_82EE2B30(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar2;
  int *piVar3;
  longlong lVar1;
  
  piVar3 = (int *)0x0;
  if ((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
     (param_4 == (undefined4 *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    iVar2 = fn_82E50BE8(0x68,0,0,0,0);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82EE2AD0();
    }
    if (piVar3 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    piVar3[0x19] = param_1;
    lVar1 = fn_82F34930(piVar3 + 0x13,param_2,param_3);
    if (-1 < lVar1) {
      *param_4 = piVar3;
      return lVar1;
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return lVar1;
}


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
extern int fn_82FAB9C0();
extern int fn_83021A98();
extern unsigned int lbl_832642E0;


undefined8 fn_82FEBA80(undefined8 param_1,int *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if ((*param_2 == 0) || ((param_3 & 0xffffffff) != 0)) {
    RtlEnterCriticalSection(0xffffffff8326434c);
    piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x674,param_1);
    if (piVar2 == (int *)0x0) {
      RtlLeaveCriticalSection(0xffffffff8326434c);
      uVar1 = 0xf;
    }
    else {
      uVar1 = fn_83021A98(piVar2,param_2,param_3);
      (**(code **)(*piVar2 + 8))(piVar2);
      RtlLeaveCriticalSection(0xffffffff8326434c);
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}


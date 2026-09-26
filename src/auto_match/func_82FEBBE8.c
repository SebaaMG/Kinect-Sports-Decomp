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
extern int fn_83002890();
extern unsigned int lbl_832642E0;


undefined8 fn_82FEBBE8(undefined8 param_1,undefined8 param_2)

{
  int *piVar2;
  undefined8 uVar1;
  int iVar3;
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_1);
  if (piVar2 == (int *)0x0) {
    RtlLeaveCriticalSection(0xffffffff8326434c);
    uVar1 = 0xf;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x14))(piVar2);
    if (iVar3 == 0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      RtlLeaveCriticalSection(0xffffffff8326434c);
      uVar1 = 4;
    }
    else {
      uVar1 = fn_83002890(piVar2,param_2);
      (**(code **)(*piVar2 + 8))(piVar2);
      RtlLeaveCriticalSection(0xffffffff8326434c);
    }
  }
  return uVar1;
}


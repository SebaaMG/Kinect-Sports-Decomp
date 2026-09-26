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
extern int fn_827CDA40();
extern int fn_827CDA90();
extern int fn_827CDCE0();
extern int fn_827CDEB0();


void fn_827CE0C8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x148);
  *(undefined4 *)(iVar1 + 8) = 0;
  piVar2 = (int *)fn_827CDA40();
  if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x40) != 0) {
      *(undefined4 *)(*piVar2 + 0x14) = 4;
      (**(code **)*piVar2)();
    }
    pcVar3 = fn_827CDA90;
  }
  else if (param_2 == 2) {
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*piVar2 + 0x14) = 4;
      (**(code **)*piVar2)();
    }
    pcVar3 = fn_827CDCE0;
  }
  else {
    if (param_2 != 3) {
      *(undefined4 *)(*piVar2 + 0x14) = 4;
      (**(code **)*piVar2)();
      return;
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*piVar2 + 0x14) = 4;
      (**(code **)*piVar2)();
    }
    pcVar3 = fn_827CDEB0;
  }
  *(code **)(iVar1 + 4) = pcVar3;
  return;
}


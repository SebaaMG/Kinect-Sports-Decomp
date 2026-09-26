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
extern int fn_8265C9E0();
extern int fn_828A0960();
extern int fn_828A2AE8();
extern int fn_828A4ED0();
extern int fn_828BE968();


undefined8 fn_828A5468(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar4;
  int *piVar5;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar4 = fn_828BE968(param_2);
  if (iVar4 == 4) {
    iVar4 = fn_8265C9E0(200);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_828A2AE8();
    }
    (**(code **)(*piVar5 + 0x10))(piVar5,param_2);
    iVar4 = piVar5[0x29];
    cVar1 = *(char *)(piVar5 + 0x20);
    (**(code **)*piVar5)(piVar5,1);
    if ((cVar1 != '\0') && (uVar2 = fn_828A4ED0(iVar4), (uVar2 & 0xffffffff) != 0)) {
      uVar3 = fn_828A0960(uVar2,param_1);
      return uVar3;
    }
  }
  return 0;
}


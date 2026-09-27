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
extern unsigned int *auStack_220;


char fn_83095E98(int *param_1)

{
  int *piVar2;
  undefined8 uVar1;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined1 auStack_220 [512];
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x10))();
  if (piVar2 == (int *)0x0) {
    cVar5 = '\0';
  }
  else {
    bVar6 = 0;
    uVar1 = (**(code **)(*piVar2 + 8))();
    iVar3 = (int)uVar1;
    while (iVar3 != -1) {
      (**(code **)(*piVar2 + 0x14))(piVar2,uVar1,auStack_220);
      bVar4 = ((int (*)())fn_83095E98)();
      if (bVar6 < bVar4) {
        bVar6 = bVar4;
      }
      uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar1);
      iVar3 = (int)uVar1;
    }
    cVar5 = bVar6 + 1;
  }
  return cVar5;
}


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
extern int fn_826C59F8();


void fn_826C7CE0(void)

{
  int *piVar2;
  int iVar3;
  longlong lVar1;
  
  piVar2 = (int *)fn_826C59F8();
  if (piVar2 != (int *)0x0) {
    iVar3 = piVar2[0x6b];
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0x18) != '\0')) {
      iVar3 = (**(code **)(*(int *)piVar2[0x27] + 0x28))();
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x10);
    }
    lVar1 = (**(code **)(*piVar2 + 0x118))(piVar2);
    if ((int)lVar1 < iVar3) {
      (**(code **)(*piVar2 + 0x120))(piVar2,lVar1 + 1);
    }
    (**(code **)(*piVar2 + 0x124))(piVar2,1);
  }
  return;
}


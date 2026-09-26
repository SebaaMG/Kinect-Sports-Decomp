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
extern int fn_822ABA88();
extern int fn_8242C410();


int fn_8242E688(undefined8 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  iVar2 = fn_8242C410();
  if (0 < iVar2) {
    lVar5 = 0;
    uVar3 = (ulonglong)**(uint **)((int)param_1 + 8);
    do {
      piVar1 = *(int **)((int)lVar5 + (int)uVar3);
      iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
      if (*(byte *)(*(int *)(iVar2 + 0x1a0) + 0x44) == param_2) {
        return iVar2;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 4;
      iVar2 = fn_8242C410(param_1);
    } while ((int)lVar4 < iVar2);
  }
  return 0;
}


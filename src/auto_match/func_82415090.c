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
extern int fn_82414F58();


longlong fn_82415090(int param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar4;
  longlong lVar3;
  ulonglong uVar5;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
LAB_824150d4:
    bVar2 = false;
  }
  else {
    if (*(int **)(param_1 + 8) == (int *)0x0) goto LAB_824150d4;
    bVar2 = true;
    if (**(int **)(param_1 + 8) + **(int **)(param_1 + 4) != 10) goto LAB_824150d4;
  }
  if (bVar2) {
    cVar4 = fn_82414F58(param_1);
    if (cVar4 == '\0') goto LAB_82415104;
    uVar5 = (ulonglong)**(uint **)(*(int *)(param_1 + 8) + 8);
LAB_824150fc:
    lVar3 = uVar5 + 10;
  }
  else {
LAB_82415104:
    if ((*(int **)(param_1 + 4) == (int *)0x0) || (bVar2 = true, **(int **)(param_1 + 4) != 10)) {
      bVar2 = false;
    }
    if (bVar2) {
      cVar4 = fn_82414F58(param_1);
      if (cVar4 != '\0') {
        puVar1 = *(uint **)(*(int *)(param_1 + 4) + 8);
        uVar5 = (ulonglong)*(uint *)puVar1[2] + (ulonglong)*puVar1;
        goto LAB_824150fc;
      }
    }
    cVar4 = fn_82414F58(param_1);
    if (cVar4 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)**(uint **)(param_1 + 8) + (ulonglong)**(uint **)(param_1 + 4);
    }
  }
  return lVar3;
}


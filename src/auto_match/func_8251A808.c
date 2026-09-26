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
extern int fn_828ACC40();
extern int fn_828AE818();


void fn_8251A808(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x50)) && (*(char *)(param_1 + 0x5c) != '\0'))
  {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
LAB_8251a868:
    fn_828AE818(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0x1e);
    cVar3 = fn_828ACC40(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    if (cVar3 == '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        uVar4 = 4;
      }
      else {
        if (iVar2 != 3) {
          return;
        }
        uVar4 = 5;
      }
      goto LAB_8251a8b8;
    }
  }
  else if (uVar1 != 2) {
    if (3 < uVar1) {
      return;
    }
    goto LAB_8251a868;
  }
  uVar4 = 3;
LAB_8251a8b8:
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  return;
}


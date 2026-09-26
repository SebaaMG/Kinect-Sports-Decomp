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
extern int fn_82250A18();
extern int fn_82366AE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_82358A60(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x30);
  if (piVar5 != *(int **)(param_1 + 0x34)) {
    do {
      uVar4 = 1;
      uVar1 = *(uint *)(*(int *)(*piVar5 + 0x10) + 0x2c);
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (*(char *)(iVar2 + 4) != '\0') {
        cVar3 = fn_828AD740(*(undefined4 *)(param_1 + 4));
        if (cVar3 == '\0') {
          uVar4 = (-(ulonglong)uVar1 & ~(ulonglong)uVar1 & 0xffffffff) >> 0x1f;
        }
        else {
          uVar4 = (ulonglong)(uVar1 == 0);
        }
      }
      fn_82366AE8(*piVar5,uVar4);
      piVar5 = piVar5 + 2;
    } while (piVar5 != *(int **)(param_1 + 0x34));
  }
  return;
}


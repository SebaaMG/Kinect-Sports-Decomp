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
extern int fn_83015838();
extern unsigned int lbl_83264300;


void fn_82FEF8B8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  uVar5 = 0;
  uVar4 = 0;
  piVar7 = (int *)(*(int *)(param_1 + 0x70) + 0x14);
  piVar6 = (int *)(param_2 + -4);
  do {
    iVar2 = *piVar7;
    if (iVar2 == 0) break;
    cVar3 = fn_83015838(lbl_83264300,iVar2);
    if (cVar3 == '\0') {
      iVar1 = piVar7[1];
      piVar6[1] = iVar2;
      piVar6 = piVar6 + 2;
      *piVar6 = iVar1;
      uVar5 = uVar5 + 1;
    }
    uVar4 = uVar4 + 1;
    piVar7 = piVar7 + 2;
  } while (uVar4 < 4);
  if (uVar5 < 4) {
    *(undefined4 *)(uVar5 * 8 + param_2) = 0;
  }
  return;
}


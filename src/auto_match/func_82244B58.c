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
extern int fn_8288B760();
extern int fn_8288D868();
extern unsigned int lbl_8329618C;


longlong fn_82244B58(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  
  lVar3 = 1;
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  piVar1 = *(int **)(iVar2 + 0x314);
  for (piVar4 = *(int **)(iVar2 + 0x310); piVar4 < piVar1; piVar4 = piVar4 + 2) {
    iVar2 = *(int *)(*piVar4 + 0x20);
    if (iVar2 != 0) {
      if (iVar2 == 0) {
        cVar5 = *(int *)(*piVar4 + 0x24) != 0;
      }
      else {
        cVar5 = fn_8288B760();
      }
      if (cVar5 != '\0') {
        if (*(int *)(*piVar4 + 0x20) == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = fn_8288D868();
        }
        if ((lVar3 == 0) || (lVar3 = 1, cVar5 == '\0')) {
          lVar3 = 0;
        }
      }
    }
  }
  return lVar3;
}


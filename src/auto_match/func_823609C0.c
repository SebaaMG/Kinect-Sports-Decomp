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
extern int fn_822C72E0();


void fn_823609C0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
  pcVar4 = param_3;
  if (*(int *)(iVar3 + 8) != 0) {
    do {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if ((int)pcVar4 - (int)param_3 != 1) {
        iVar3 = fn_822ABA88(iVar3,uVar5);
        fn_822C72E0(*(undefined4 *)(*(int *)(iVar3 + 0x114) + 0x20),param_3);
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
      pcVar4 = param_3;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 8));
  }
  return;
}


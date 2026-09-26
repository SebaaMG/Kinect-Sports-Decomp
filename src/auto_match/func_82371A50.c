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
extern int fn_823873E0();
extern int fn_828EA5F8();


void fn_82371A50(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar3 = *(int **)(param_1 + 8);
  lVar4 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *piVar3;
      uVar6 = 0;
      if (*(int *)(*(int *)((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)) + 8) != 0
         ) {
        do {
          iVar1 = fn_822ABA88(*(undefined4 *)
                                ((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)),
                               uVar6);
          if ((*(int *)(iVar1 + 0x24) != 0) && (iVar1 = *(int *)(iVar1 + 0x74), iVar1 != 0)) {
            cVar2 = fn_828EA5F8(iVar1);
            if (cVar2 != '\0') {
              fn_823873E0(param_1 + 0xa14,iVar1,lVar4,uVar6);
            }
          }
          piVar3 = *(int **)(param_1 + 8);
          uVar6 = uVar6 + 1;
          iVar1 = *piVar3;
        } while ((uVar6 & 0xffffffff) <
                 (ulonglong)
                 *(uint *)(*(int *)((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)) +
                          8));
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 4;
    } while ((int)lVar4 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}


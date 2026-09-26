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
extern int fn_8288B760();


undefined8 fn_823A3A70(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar4 = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 8) + 8);
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
          if ((*(int *)(iVar1 + 0x278) == 0) && (*(int *)(iVar1 + 0x24) != 0)) {
            if (*(int *)(iVar1 + 0x168) == 0) {
              uVar2 = *(uint *)(iVar1 + 0x16c);
            }
            else {
              uVar2 = fn_8288B760();
              uVar2 = uVar2 & 0xff;
            }
            if (uVar2 != 0) {
              return 1;
            }
          }
          uVar6 = uVar6 + 1;
          piVar3 = *(int **)(*(int *)(param_1 + 8) + 8);
          iVar1 = *piVar3;
        } while ((uVar6 & 0xffffffff) <
                 (ulonglong)
                 *(uint *)(*(int *)((*(int **)(iVar5 + iVar1))[4] * 4 + **(int **)(iVar5 + iVar1)) +
                          8));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < piVar3[1] - *piVar3 >> 2);
  }
  return 0;
}


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
extern int fn_82B25248();
extern int fn_82B80F70();


void fn_82B28428(undefined8 param_1,int param_2,ulonglong param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  double dStack_40;
  double adStack_38 [7];
  
  uVar2 = param_4 << ((uint)((param_3 & 0xffffffff) << 2) & 0x3c);
  if ((*(uint *)(param_2 + 0xc) & uVar2 & 0xffff) != uVar2) {
    *(ushort *)(param_2 + 0xe) = (ushort)*(uint *)(param_2 + 0xc) | (ushort)uVar2;
    piVar4 = *(int **)(param_2 + 0x10);
    if (piVar4 != (int *)0x0) {
      do {
        if (*piVar4 == 1) break;
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
      if ((piVar4 != (int *)0x0) &&
         (cVar3 = fn_82B80F70(param_3,&dStack_40,adStack_38), cVar3 != '\0')) {
        iVar1 = (int)((param_3 + 1 & 0xffffffff) << 3);
        if (*(double *)(iVar1 + (int)piVar4) < dStack_40) {
          *(double *)(iVar1 + (int)piVar4) = dStack_40;
        }
        iVar1 = (int)((param_3 + 5 & 0xffffffff) << 3);
        if (adStack_38[0] < *(double *)(iVar1 + (int)piVar4)) {
          *(double *)(iVar1 + (int)piVar4) = adStack_38[0];
        }
      }
    }
    for (iVar1 = *(int *)(param_2 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x10) != 0) {
        fn_82B25248(param_1,*(int *)(iVar1 + 0x10),param_5);
      }
    }
  }
  return;
}


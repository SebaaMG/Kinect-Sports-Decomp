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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822ABA88();
extern int fn_82359C18();
extern int fn_8235A6A0();
extern int fn_824C8258();
extern int fn_8255B400();
extern unsigned int lbl_821B2630;


/* WARNING: Removing unreachable block (ram,0x823ddb5c) */

void fn_823DDB00(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuStack_40;
  code *pcStack_3c;
  undefined ***pppuStack_30;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    iVar2 = *(int *)(param_1 + 8);
    fn_8255B400(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x844));
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if (*(char *)(*(int *)(param_1 + 0xe0) * 0x14 + param_1 + 0x15) != '\0') {
      pcStack_3c = fn_8235A6A0;
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B2630;
      fn_824C8258(*(undefined4 *)(iVar2 + 0x1510),&ppuStack_40);
      fn_82359C18(&ppuStack_40);
    }
    lVar4 = 0;
    do {
      uVar3 = 0;
      piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + (int)lVar4);
      uVar5 = ZEXT48(piVar1);
      if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
        do {
          iVar2 = fn_822ABA88();
          if (*(int *)(*(int *)(iVar2 + 0x14) + 0x1d0) != 0) {
            *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x1d0) = 0;
          }
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) <
                 (ulonglong)*(uint *)(*(int *)(((int *)uVar5)[4] * 4 + *(int *)uVar5) + 8));
      }
      lVar4 = lVar4 + 4;
    } while ((int)lVar4 < 8);
  }
  return;
}


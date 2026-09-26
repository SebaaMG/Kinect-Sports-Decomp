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
extern unsigned int *auStack_40;
extern int fn_82AA66A8();
extern int fn_82B455F8();


int * fn_82B45CA0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint auStack_40 [16];
  
  iVar5 = *(int *)(param_2 + 0x20);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  piVar4 = (int *)0x0;
  uVar6 = 0xffffffff;
  do {
    iVar1 = *(int *)(iVar5 + 8);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0xf)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (*(int *)(iVar1 + 0x10) != 2) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    piVar3 = *(int **)(param_1 + 0x238);
    if (piVar3 != (int *)0x0) {
      do {
        if (*(int *)(*piVar3 + 0x28) == *(int *)(iVar1 + 0x18)) goto LAB_82b45d28;
        piVar3 = (int *)piVar3[2];
      } while (piVar3 != (int *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_82b45d28:
    if (((piVar3 != (int *)0x0) &&
        (cVar2 = fn_82B455F8(param_1,*(undefined4 *)(piVar3[1] + 0x24),auStack_40), cVar2 != '\0')
        ) && ((uVar6 == 0xffffffff || (uVar6 < auStack_40[0])))) {
      uVar6 = auStack_40[0];
      piVar4 = piVar3;
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if (iVar5 == 0) {
      if (piVar4 != (int *)0x0) {
        return piVar4;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  } while( true );
}


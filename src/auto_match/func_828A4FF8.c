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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;
extern U64 storeWordConditionalIndexed();


void fn_828A4FF8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  while( true ) {
    if (param_3 == param_4) {
      return;
    }
    iVar2 = *(int *)(param_2 + 4);
    piVar4 = (int *)fn_8265C9E0(0x10);
    if (piVar4 == (int *)0x0) break;
    bVar1 = piVar4 + 2 == (int *)0x0;
    *piVar4 = param_2;
    piVar4[1] = iVar2;
    if (!bVar1) {
      piVar4[2] = param_3[2];
      uVar3 = param_3[3];
      piVar4[3] = uVar3;
      if ((ulonglong)uVar3 != 0) {
        lVar5 = (ulonglong)uVar3 + 4;
        do {
          puVar6 = (uint *)lVar5;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar5);
            *puVar6 = uVar3;
            bVar1 = true;
          }
        } while (!bVar1);
      }
    }
    if (*(int *)(param_1 + 4) == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff8219852c);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int **)(param_2 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    param_3 = (undefined4 *)*param_3;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}


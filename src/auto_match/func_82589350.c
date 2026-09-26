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
extern int fn_82522D98();
extern int fn_82587028();
extern int fn_825E4FE0();
extern int fn_8265C9E0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821C6530;
extern unsigned int uStack_9c;
extern unsigned int uStack_f0;


void fn_82589350(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iStack0000001c;
  undefined1 uStack_f0;
  undefined **ppuStack_a0;
  undefined4 uStack_9c;
  
  *param_1 = &lbl_821C6530;
  puVar4 = (undefined4 *)(param_2 + -4);
  lVar5 = 5;
  puVar3 = param_1 + 3;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = param_1 + 0x10;
  param_1[9] = param_3;
  lVar5 = 1;
  param_1[10] = 1;
  iStack0000001c = param_2;
  do {
    fn_825E4FE0(puVar4);
    lVar5 = lVar5 + -1;
    puVar4 = puVar4 + 0x1734;
  } while (-1 < lVar5);
  *(undefined1 *)(param_1 + 0x2e7b) = uStack_f0;
  param_1[0x2e7d] = 0;
  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 != 0) {
    param_1[0x2e7c] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[0x2e7c] + 4) = param_1[0x2e7c];
    uVar1 = lbl_8218E8FC;
    param_1[0x2e7f] = 0;
    param_1[0x2e80] = 0;
    param_1[0x2e81] = 0;
    param_1[0x2e85] = uVar1;
    fn_82587028(param_1 + 0x2e7b,8);
    param_1[0x2e86] = 0;
    param_1[0x2e87] = 0;
    param_1[0x2e98] = 4;
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x10);
  }
  uStack_9c = 0;
  ppuStack_a0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_a0);
}


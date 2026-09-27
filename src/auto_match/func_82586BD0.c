extern unsigned int *puRam83281128;
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
extern int fn_82586D90();
extern int fn_82587028();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_24;
extern unsigned int uStack_30;


void fn_82586BD0(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 uStack_30;
  undefined **ppuStack_28;
  undefined4 uStack_24;

  if (puRam83281128 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)fn_8265C9E0(0x2c);
    uVar4 = 0;
    if (puVar2 == (undefined1 *)0x0) {
      puRam83281128 = (undefined1 *)0x0;
    }
    else {
      *puVar2 = uStack_30;
      *(undefined4 *)(puVar2 + 8) = 0;
      iVar3 = fn_8265C9E0(0x10);
      if (iVar3 == 0) {
        uStack_24 = 0;
        ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_28);
      }
      *(int *)(puVar2 + 4) = iVar3;
      *(int *)iVar3 = iVar3;
      *(int *)(*(int *)(puVar2 + 4) + 4) = *(int *)(puVar2 + 4);
      uVar1 = lbl_821CA460;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x28) = uVar1;
      fn_82587028(puVar2,8);
      puRam83281128 = puVar2;
    }
    puVar5 = (undefined4 *)0x831c0c0c;
    do {
      puVar5 = puVar5 + 1;
      fn_82586D90(puRam83281128,uVar4,*puVar5);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < 0x2a);
  }
  return;
}

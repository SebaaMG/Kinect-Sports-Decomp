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
extern int fn_8251EFD0();
extern int fn_8251F340();
extern unsigned int lbl_83214050;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


void fn_828BF798(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar2 = &uStack_34;
  puVar3 = (undefined4 *)(param_1 + -4);
  lVar4 = 7;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (lbl_83214050 == 2) {
    uStack_1c = 0;
    uStack_18 = 0;
  }
  iVar1 = fn_8251F340(0xffffffff83214368);
  puVar3 = (undefined4 *)(iVar1 + 0xc);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = &uStack_34;
    lVar4 = 7;
    *puVar3 = uStack_30;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  fn_8251EFD0(auStack_40,0xffffffff83214368,iVar1,0);
  return;
}


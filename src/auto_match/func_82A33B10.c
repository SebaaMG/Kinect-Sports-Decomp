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
extern unsigned int *__imp__XexExecutableModuleHandle;
extern unsigned int *auStack_50;
extern int fn_82A27F98();
extern int fn_82A370D0();
extern unsigned int lbl_8329EB48;
extern unsigned int uStack_58;


bool fn_82A33B10(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uStack_58;
  undefined4 auStack_50 [14];
  
  iVar3 = 0x100000;
  if (((*__imp__XexExecutableModuleHandle == 0) ||
      (piVar1 = (int *)RtlImageXexHeaderField
                                 (*(undefined4 *)(*__imp__XexExecutableModuleHandle + 0x58),0x20401)
      , piVar1 == (int *)0x0)) || (iVar3 = *piVar1, iVar3 != 0)) {
    puVar2 = &uStack_58;
    lVar5 = 6;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    auStack_50[0] = 0x30;
    if (lbl_8329EB48 == 0) {
      lbl_8329EB48 = fn_82A27F98(2,0,iVar3,0x1000,0,auStack_50);
    }
    fn_82A370D0();
    bVar4 = lbl_8329EB48 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


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
extern int fn_82AA66A8();
extern int fn_82AD3EA8();


void fn_82AD6118(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_2 + 0x24);
  while( true ) {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x2980) break;
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
  }
  iVar2 = *(int *)(param_2 + 8);
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar6 = *(int *)(iVar2 + 4);
    while (cVar5 = fn_82AD3EA8(param_1,iVar6,param_2,uVar1,0), cVar5 == '\0') {
      iVar3 = *(int *)(iVar6 + 8);
      if ((iVar3 == 0) || (bVar4 = true, *(int *)(iVar3 + 0xc) == 0)) {
        bVar4 = false;
      }
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar3 + 4);
      }
    }
    iVar2 = *(int *)(iVar2 + 0xc);
  } while( true );
}


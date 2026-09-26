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
extern int fn_82B4E578();


void fn_82B4FEB0(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_3 + 8);
  iVar4 = *(int *)(iVar1 + 0x2c);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  do {
    if (iVar4 == 0) {
      return;
    }
    iVar2 = *(int *)(iVar4 + 8);
    if (*(int *)(iVar2 + 4) == 6) {
      if (*(int *)(iVar2 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar3 = *(int *)(iVar2 + 0x10);
      if ((((iVar3 != *(int *)(iVar1 + 0x10)) && (iVar3 != *(int *)(param_1 + 0x10))) &&
          (*(int *)(iVar2 + 0x14) != 0)) &&
         (((*(uint *)(iVar2 + 0x2c) & 0x40) != 0 && (iVar5 != 0)))) {
        fn_82B4E578(param_1,param_4,iVar3,*(undefined4 *)(iVar5 + 8));
        iVar5 = *(int *)(iVar5 + 0xc);
      }
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  } while( true );
}


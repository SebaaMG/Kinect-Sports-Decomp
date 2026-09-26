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
extern int fn_82BE8D28();
extern int fn_82BE8D50();
extern int fn_82BF6BC0();
extern int fn_82BFAAA8();
extern int fn_82BFABD8();
extern int fn_82BFABE0();
extern unsigned int lbl_8322B4F4;


undefined8 fn_82BF3FD0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = lbl_8322B4F4;
  if (lbl_8322B4F4 != 0) {
    iVar4 = lbl_8322B4F4 + 0x58;
    iVar3 = fn_82BFAAA8(iVar4,0xffffffffffffffff);
    while ((iVar3 != 0 && (*(int *)(iVar2 + 0x14) == 0))) {
      fn_82BFABD8(iVar2 + 0x2c,0xffffffff820eb7cc);
      piVar5 = (int *)0x0;
      iVar3 = *(int *)(iVar2 + 0x20);
      if (iVar3 != 0) {
        piVar1 = *(int **)(iVar3 + 0x10);
        if (piVar1 != (int *)0x0) {
          fn_82BE8D28();
          piVar5 = piVar1;
        }
        fn_82BF6BC0(iVar2 + 0x18,iVar3);
      }
      fn_82BFABE0(iVar2 + 0x2c,0xffffffff820eb7cc);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
        fn_82BE8D50(piVar5);
      }
      iVar3 = fn_82BFAAA8(iVar4,0xffffffffffffffff);
    }
    return 0;
  }
  return 0;
}


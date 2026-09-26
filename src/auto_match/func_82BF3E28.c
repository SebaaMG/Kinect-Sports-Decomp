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


undefined8 fn_82BF3E28(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = fn_82BFAAA8(param_1 + 0x58,0xffffffffffffffff);
  while ((iVar2 != 0 && (*(int *)(param_1 + 0x14) == 0))) {
    fn_82BFABD8(param_1 + 0x2c,0xffffffff820eb7cc);
    piVar3 = (int *)0x0;
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        fn_82BE8D28();
        piVar3 = piVar1;
      }
      fn_82BF6BC0(param_1 + 0x18,iVar2);
    }
    fn_82BFABE0(param_1 + 0x2c,0xffffffff820eb7cc);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      fn_82BE8D50(piVar3);
    }
    iVar2 = fn_82BFAAA8(param_1 + 0x58,0xffffffffffffffff);
  }
  return 0;
}


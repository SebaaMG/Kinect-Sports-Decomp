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
extern int fn_82E915E0();
extern int fn_82E91630();
extern int fn_82F00330();


undefined8 fn_82E93850(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4f20) == 0) || (*(int *)(param_1 + 0xaf0) == 0)) {
    *(undefined4 *)(param_1 + 0x76d0) = 0;
  }
  if (*(int *)(param_1 + 0x76d0) != 0) {
    if ((*(int *)(param_1 + 0x82c) == 1) && (*(int *)(param_1 + 0x7750) == 0)) {
      *(undefined4 *)(param_1 + 0x82c) = 0;
      *(undefined8 *)(param_1 + 0x7740) = *(undefined8 *)(param_1 + 0x7748);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x300);
    fn_82E915E0(*(undefined4 *)(param_1 + 0x830),param_1 + 0x300,0);
    iVar2 = fn_82E91630(*(undefined4 *)(param_1 + 0x830),uVar1);
    if (iVar2 != 0) {
      return 0xffffffffffffff9c;
    }
    fn_82F00330(param_1);
    *(undefined4 *)(param_1 + 0x76d4) = 1;
  }
  return 0;
}


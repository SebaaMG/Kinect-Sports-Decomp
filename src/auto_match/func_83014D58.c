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
extern int fn_82FAB9C0();
extern int fn_82FFF5C8();
extern int fn_8300FF80();
extern int fn_83014BF8();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;


undefined8 fn_83014D58(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x78) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x78) - 1;
    *(int *)(param_1 + 0x78) = (int)lVar2;
    if (lVar2 == 0) {
      if (*(int *)(param_1 + 0x38) != 1) {
        fn_83014BF8();
      }
      fn_8300FF80(lbl_832642E4,*(undefined4 *)(param_1 + 0x50));
      if ((*(int *)(param_1 + 0x60) != 0) &&
         (piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar1 != (int *)0x0)) {
        fn_82FFF5C8(piVar1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if ((*(int *)(param_1 + 0x6c) != 0) &&
         (piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar1 != (int *)0x0)) {
        fn_82FFF5C8(piVar1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  return 1;
}


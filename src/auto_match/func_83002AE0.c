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
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642E0;


undefined8 fn_83002AE0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  *param_2 = lbl_821AAD20;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 100) != 0) break;
    if ((*(byte *)(param_1 + 0x3d) & 1) != 0) {
      return 0;
    }
    param_1 = *(int *)(param_1 + 0x10);
  }
  piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0xfe0,
                                    *(undefined4 *)(*(int *)(param_1 + 100) + 0xc));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)(-(uint)(*(byte *)(piVar1 + 0x17) != 0xff) &
                  (uint)(piVar1 + (uint)*(byte *)(piVar1 + 0x17) * 3 + 8));
  if (piVar2 == (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    return 0;
  }
  *param_2 = *(undefined4 *)(piVar2[1] * 0xc + *piVar2 + -0xc);
  (**(code **)(*piVar1 + 8))();
  return 1;
}


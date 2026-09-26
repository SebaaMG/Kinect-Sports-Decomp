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
extern int fn_8300A520();
extern int fn_8300A650();
extern int fn_8300B5D0();
extern unsigned int lbl_832642E0;


void fn_8300B720(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x5c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,puVar1[1]);
    if (piVar3 != (int *)0x0) {
      bVar2 = *(byte *)(param_1 + 0xa0) >> 5;
      if (bVar2 == 0) {
        fn_8300A520(piVar3,*(undefined4 *)(param_1 + 0xc),puVar1[4],puVar1[5]);
      }
      else if (bVar2 == 1) {
        fn_8300B5D0((double)(float)puVar1[2],piVar3,*(undefined4 *)(param_1 + 0xc));
      }
      else if (bVar2 < 3) {
        fn_8300A650(piVar3,*(undefined4 *)(param_1 + 0xc));
      }
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return;
}


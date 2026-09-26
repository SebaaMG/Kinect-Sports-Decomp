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
extern int fn_825FAA80();
extern int fn_82631C78();
extern unsigned int lbl_8320A898;


void fn_825C46F8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  
  piVar2 = *(int **)(param_1 + 0xb90);
  dVar3 = (double)*(float *)(param_1 + 0x828);
  piVar1 = piVar2;
  if (piVar2 != (int *)0x0) {
    do {
      if ((*piVar1 != 0) && (*(char *)(*piVar1 + param_2) != '\0')) break;
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
    if (piVar1 != (int *)0x0) {
      fn_82631C78(lbl_8320A898,0,0x40,0x40);
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (dVar3 <= (double)*(float *)(*piVar2 + 0x14)) {
          fn_825FAA80(dVar3);
        }
      }
      fn_82631C78(lbl_8320A898,0,0x20,0x60);
    }
  }
  return;
}


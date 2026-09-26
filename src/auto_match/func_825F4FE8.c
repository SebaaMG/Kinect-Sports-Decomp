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
extern int fn_8251FA58();
extern int fn_82554DA8();
extern int fn_82BFEDD8();
extern int fn_82CE04E8();


void fn_825F4FE8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x8dc);
  if (*(int *)(param_1 + 0x904) != 0) {
    *(undefined4 *)(param_1 + 0x904) = 0;
  }
  if (*piVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x858);
    if (*(int *)(iVar1 + 0x248) != 0) {
      *(undefined1 *)(*(int *)((*(int *)(iVar1 + 0x248) + 0x8b) * 4 + iVar1) * 0x2c + iVar1 + 0x2e)
           = 0;
    }
    iVar1 = *(int *)(param_1 + 0x858);
    if (*(int *)(iVar1 + 0x22c) != 0) {
      *(undefined1 *)(*(int *)((*(int *)(iVar1 + 0x22c) + 0x84) * 4 + iVar1) * 0x2c + iVar1 + 0x2e)
           = 0;
    }
    fn_82CE04E8();
    if ((*(int *)(param_1 + 0x8fc) == 2) || (*(int *)(param_1 + 0x8fc) == 4)) {
      if (*(int *)(*piVar2 + 0x18) != 0) {
        fn_82BFEDD8(*(int *)(*piVar2 + 0x18),0);
      }
      *(undefined4 *)(param_1 + 0x8fc) = 1;
    }
    fn_82554DA8(*piVar2);
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x8fc) = 0;
  }
  if (*(int *)(param_1 + 0x928) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x928) = 0;
  }
  return;
}


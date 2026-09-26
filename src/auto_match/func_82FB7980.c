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
extern int fn_82FA5060();
extern int fn_8300CE00();
extern int fn_8300CE88();
extern int fn_8300CF30();
extern unsigned int lbl_831BC768;


undefined4 fn_82FB7980(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      iVar2 = fn_82FA5060(lbl_831BC768,0x10);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8300CE88();
      }
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
    else if (*(int *)(param_1 + 0x1c) == 3) {
      uVar1 = fn_82FA5060(lbl_831BC768,0x2c);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_8300CF30(uVar1,*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2 & 0xffff
                            );
      }
      *(int *)(param_1 + 0x20) = (int)uVar1;
      if (((uVar1 & 0xffffffff) != 0) &&
         (iVar2 = fn_8300CE00(uVar1,*(undefined2 *)(param_1 + 0x28)), iVar2 != 1)) {
        (**(code **)(**(int **)(param_1 + 0x20) + 4))();
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      if ((*(int *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x24) != '\0')) {
        iVar2 = 0;
        for (piVar4 = *(int **)(param_1 + 0x10); piVar4 != *(int **)(param_1 + 0x14);
            piVar4 = piVar4 + 1) {
          iVar2 = (uint)*(ushort *)(*piVar4 + 0xe) + iVar2;
        }
        *(int *)(*(int *)(param_1 + 0x20) + 0x10) = iVar2;
        *(int *)(*(int *)(param_1 + 0x20) + 0xc) = iVar2;
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x20);
}


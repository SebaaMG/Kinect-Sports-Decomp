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
extern int fn_82FA5190();
extern int fn_83036C28();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC770;


void fn_8300DD58(int *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  uVar4 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    iVar5 = 0;
    do {
      fn_83036C28(*(undefined4 *)(iVar5 + *param_1 + 4));
      fn_82FA5190(lbl_831BC770,*(undefined4 *)(iVar5 + *param_1 + 4));
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < (uint)(param_1[1] - *param_1 >> 3));
  }
  lVar3 = 4;
  piVar2 = param_1;
  do {
    piVar6 = piVar2 + 3;
    uVar4 = 0;
    if (piVar2[4] - *piVar6 >> 3 != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(*piVar6 + iVar5 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
          *(undefined4 *)(*piVar6 + iVar5 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < (uint)(piVar2[4] - *piVar6 >> 3));
    }
    if (*piVar6 != 0) {
      piVar2[4] = *piVar6;
      fn_82FA5190(lbl_831BC768);
      *piVar6 = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
    }
    lVar3 = lVar3 + -1;
    piVar2 = piVar6;
  } while (lVar3 != 0);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    fn_82FA5190(lbl_831BC768);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


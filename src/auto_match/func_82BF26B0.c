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
extern int fn_82BE6638();
extern int fn_82BF2110();
extern int fn_82BF2298();
extern int fn_82BF23F8();
extern int fn_82BF2608();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82BF26B0(int param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (((((param_2 & 0xffffffff) == 0) || (iVar2 = (int)param_3, iVar2 < 0)) ||
      ((*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28) + iVar2 &&
       (iVar1 = fn_82BF2608(), iVar1 != 0)))) || (*(int *)(param_1 + 0x24) == 0)) {
    uVar5 = 1;
  }
  else {
    fn_82F68CC0(*(int *)(param_1 + 0x24),param_2,param_3);
    lVar3 = 0;
    param_3 = (ulonglong)*(uint *)(param_1 + 0x28) + param_3;
    lVar4 = 0;
    *(int *)(param_1 + 0x28) = (int)param_3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar2;
    if (0 < param_3) {
      do {
        iVar2 = (int)lVar4;
        if (lVar3 == 0) {
          if (*(char *)(*(int *)(param_1 + 0x20) + iVar2) != '\r') goto LAB_82bf27b0;
          lVar3 = 1;
        }
        else {
          if (lVar3 == 1) {
            if (*(char *)(*(int *)(param_1 + 0x20) + iVar2) == '\n') {
              lVar3 = 2;
              goto LAB_82bf27b4;
            }
          }
          else if (lVar3 == 2) {
            if (*(char *)(*(int *)(param_1 + 0x20) + iVar2) == '\r') {
              lVar3 = 3;
              goto LAB_82bf27b4;
            }
          }
          else if ((lVar3 == 3) && (*(char *)(*(int *)(param_1 + 0x20) + iVar2) == '\n')) {
            lVar4 = lVar4 + 1;
            *(int *)(param_1 + 0x28) = (int)lVar4;
            *(undefined4 *)(param_1 + 0x30) = 1;
            if (0 < lVar4) {
              *(undefined1 *)(*(int *)(param_1 + 0x20) + (int)lVar4 + -1) = 0;
            }
            iVar2 = fn_82BF2110(param_1);
            if (iVar2 != 0) {
              if (*(int *)(param_1 + 0x34) != 0) {
                uVar5 = fn_82BF2298();
                return uVar5;
              }
              uVar5 = fn_82BF23F8(param_1,(ulonglong)*(uint *)(param_1 + 0x20) + lVar4,
                                    param_3 - lVar4);
              return uVar5;
            }
            fn_82BE6638(*(undefined4 *)(param_1 + 4),6);
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(param_1 + 0x20),0,*(undefined4 *)(param_1 + 0x2c));
          }
LAB_82bf27b0:
          lVar3 = 0;
        }
LAB_82bf27b4:
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(param_1 + 0x28));
    }
  }
  return uVar5;
}


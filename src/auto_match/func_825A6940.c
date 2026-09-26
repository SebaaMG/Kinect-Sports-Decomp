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
extern int fn_825A6A78();
extern int fn_825A6B58();
extern int fn_825A7178();
extern int fn_82604780();
extern int fn_82CED628();
extern unsigned int lbl_821CC160;


void fn_825A6940(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c0);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (*(int *)(param_1 + 0x36c) == 0)) &&
     (fn_82604780(), *(char *)(iVar1 + 0xe8) != '\x05')) {
    if (*(int *)(param_1 + 0x4e0) == 0) {
      if (*(int *)(param_1 + 0x580) == 0) {
        return;
      }
      fn_825A6A78(param_1);
    }
    fVar2 = lbl_821CC160;
    *(undefined4 *)(*(int *)(param_1 + 0x4e0) + 0x118) = *(undefined4 *)(param_1 + 0x59c);
    if (*(float *)(param_1 + 0x5c4) <= fVar2) {
      if ((*(int *)(param_1 + 0x584) != 0) || (*(int *)(param_1 + 0x58c) != 0)) {
        iVar1 = *(int *)(param_1 + 0x4e0);
        if (*(int *)(iVar1 + 0x104) != 0) {
          *(undefined4 *)(iVar1 + 0x104) = 0;
          *(undefined4 *)(iVar1 + 0x120) = 0;
                    /* WARNING: Subroutine does not return */
          fn_82CED628(iVar1 + 0x14,0xffffffff821ca830);
        }
        *(undefined4 *)(param_1 + 0x584) = 0;
      }
      if ((*(int *)(param_1 + 0x580) != 0) ||
         (((*(int *)(param_1 + 0x588) != 0 && (*(int *)(*(int *)(param_1 + 0x4e0) + 0x104) == 0)) &&
          (*(int *)(param_1 + 0x58c) == 0)))) {
        fn_825A7178(param_1);
      }
    }
    else {
      fn_825A6B58(param_1);
    }
  }
  return;
}


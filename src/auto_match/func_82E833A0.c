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
extern int fn_82E815A0();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82E833A0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 4) == 8) {
    if (param_2 == 0) {
      iVar2 = fn_82E815A0(param_1,&uStack_20,&uStack_18,&uStack_1c,&uStack_14);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x780c) = 0;
        *(uint *)(param_1 + 0x7820) = uStack_20;
        *(uint *)(param_1 + 0x7824) = uStack_1c;
        *(undefined4 *)(param_1 + 0x7808) = 1;
        *(undefined4 *)(param_1 + 0x7840) = uStack_18;
        *(undefined4 *)(param_1 + 0x7844) = uStack_14;
        *(uint *)(param_1 + 0x7800) = (-uStack_20 & ~uStack_20) >> 0x1f;
        *(uint *)(param_1 + 0x7804) = (-uStack_1c & ~uStack_1c) >> 0x1f;
      }
    }
    else if (param_3 != -1) {
      *(undefined4 *)(param_1 + 0x7804) = 1;
      *(undefined4 *)(param_1 + 0x7800) = 1;
      *(undefined4 *)(param_1 + 0x7808) = 1;
      *(undefined4 *)(param_1 + 0x780c) = 0;
      if (param_3 == 9) {
        *(undefined4 *)(param_1 + 0x7810) = 1;
        *(undefined4 *)(param_1 + 0x7840) = 1;
        *(undefined4 *)(param_1 + 0x7820) = 1;
        *(undefined4 *)(param_1 + 0x7844) = 2;
        *(undefined4 *)(param_1 + 0x7824) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x7810) = 0;
        if (param_3 < 9) {
          if (param_3 < 0) {
            param_3 = 0;
          }
        }
        else {
          param_3 = 8;
        }
        *(int *)(param_1 + 0x7844) = param_3;
        *(int *)(param_1 + 0x7824) = param_3;
        *(int *)(param_1 + 0x7840) = param_3;
        *(int *)(param_1 + 0x7820) = param_3;
      }
    }
    if (*(int *)(param_1 + 0x76c8) != 0) {
      iVar2 = *(int *)(param_1 + 0x7840);
      iVar1 = *(int *)(param_1 + 0x7844);
      if ((iVar2 != iVar1) &&
         ((iVar2 < 1 || (((6 < iVar2 || (iVar1 != iVar2 + 2)) && ((iVar2 != 7 || (iVar1 != 8))))))))
      {
        *(int *)(param_1 + 0x7844) = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 0x7828) = *(undefined4 *)(param_1 + 0x7820);
    *(undefined4 *)(param_1 + 0x782c) = *(undefined4 *)(param_1 + 0x7824);
    *(undefined4 *)(param_1 + 0x7848) = *(undefined4 *)(param_1 + 0x7840);
    *(undefined4 *)(param_1 + 0x784c) = *(undefined4 *)(param_1 + 0x7844);
  }
  return;
}


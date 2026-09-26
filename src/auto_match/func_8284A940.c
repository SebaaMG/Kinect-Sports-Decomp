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
extern int fn_8265CA20();
extern int fn_8284A328();
extern int fn_8284A4E8();
extern int fn_8284A910();
extern int fn_82BA02A8();
extern int fn_82F622A8();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000034;
extern unsigned int iStack_50;


/* WARNING: Removing unreachable block (ram,0x8284a984) */

int * fn_8284A940(int *param_1,int param_2,char param_3,int *param_4,int param_5)

{
  int *piStack00000014;
  int iStack0000001c;
  char cStack00000027;
  int *piStack0000002c;
  int iStack00000034;
  int iStack_50;
  
  piStack00000014 = param_1;
  iStack0000001c = param_2;
  cStack00000027 = param_3;
  piStack0000002c = param_4;
  iStack00000034 = param_5;
  if (0x7fffffd < *(uint *)(param_2 + 8)) {
    fn_8284A910(param_2 + 0xd,param_5 + 0xc);
    fn_8265CA20(iStack00000034);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int **)(param_5 + 4) = param_4;
  iStack_50 = param_5;
  if (param_4 == *(int **)(param_2 + 4)) {
    *(int *)(*(int *)(param_2 + 4) + 4) = param_5;
    **(int **)(param_2 + 4) = param_5;
    *(int *)(*(int *)(param_2 + 4) + 8) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *(int **)(*(int *)(param_2 + 4) + 8)) {
      *(int *)(*(int *)(param_2 + 4) + 8) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == (int *)**(int **)(param_2 + 4)) {
      **(int **)(param_2 + 4) = param_5;
    }
  }
  while (*(char *)(*(int *)(iStack_50 + 4) + 0x2c) == '\0') {
    if (*(int *)(iStack_50 + 4) == **(int **)(*(int *)(iStack_50 + 4) + 4)) {
      piStack0000002c = *(int **)(*(int *)(*(int *)(iStack_50 + 4) + 4) + 8);
      if (*(char *)(piStack0000002c + 0xb) == '\0') {
        *(undefined1 *)(*(int *)(iStack_50 + 4) + 0x2c) = 1;
        *(undefined1 *)(piStack0000002c + 0xb) = 1;
        *(undefined1 *)(*(int *)(*(int *)(iStack_50 + 4) + 4) + 0x2c) = 0;
        iStack_50 = *(int *)(*(int *)(iStack_50 + 4) + 4);
      }
      else {
        if (iStack_50 == *(int *)(*(int *)(iStack_50 + 4) + 8)) {
          iStack_50 = *(int *)(iStack_50 + 4);
          fn_8284A4E8(iStack0000001c,iStack_50);
        }
        *(undefined1 *)(*(int *)(iStack_50 + 4) + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*(int *)(iStack_50 + 4) + 4) + 0x2c) = 0;
        fn_8284A328(iStack0000001c,*(undefined4 *)(*(int *)(iStack_50 + 4) + 4));
      }
    }
    else {
      piStack0000002c = (int *)**(int **)(*(int *)(iStack_50 + 4) + 4);
      if (*(char *)(piStack0000002c + 0xb) == '\0') {
        *(undefined1 *)(*(int *)(iStack_50 + 4) + 0x2c) = 1;
        *(undefined1 *)(piStack0000002c + 0xb) = 1;
        *(undefined1 *)(*(int *)(*(int *)(iStack_50 + 4) + 4) + 0x2c) = 0;
        iStack_50 = *(int *)(*(int *)(iStack_50 + 4) + 4);
      }
      else {
        if (iStack_50 == **(int **)(iStack_50 + 4)) {
          iStack_50 = *(int *)(iStack_50 + 4);
          fn_8284A328(iStack0000001c,iStack_50);
        }
        *(undefined1 *)(*(int *)(iStack_50 + 4) + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*(int *)(iStack_50 + 4) + 4) + 0x2c) = 0;
        fn_8284A4E8(iStack0000001c,*(undefined4 *)(*(int *)(iStack_50 + 4) + 4));
      }
    }
  }
  *(undefined1 *)(*(int *)(*(int *)(iStack0000001c + 4) + 4) + 0x2c) = 1;
  *piStack00000014 = iStack00000034;
  fn_82BA02A8(piStack00000014,iStack0000001c);
  return piStack00000014;
}


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
extern int fn_82C10AD0();
extern int fn_82C10B28();


undefined8 fn_82C12850(int param_1)

{
  undefined8 uVar1;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_20 = (int *)0x0;
  piStack_1c = (int *)0x0;
  uVar1 = fn_82C10AD0(*(undefined4 *)(param_1 + 0x40),3,0x18,&piStack_20);
  if ((((int)uVar1 < 0) ||
      (uVar1 = fn_82C10AD0(*(undefined4 *)(param_1 + 0x40),3,*(undefined4 *)(param_1 + 0x34),
                                 piStack_20), (int)uVar1 < 0)) ||
     (uVar1 = fn_82C10AD0(*(undefined4 *)(param_1 + 0x40),3,8,&piStack_1c), (int)uVar1 < 0)) {
    if (piStack_20 != (int *)0x0) {
      if (*piStack_20 != 0) {
        fn_82C10B28(*(undefined4 *)(param_1 + 0x40),3);
      }
      fn_82C10B28(*(undefined4 *)(param_1 + 0x40),3,&piStack_20);
    }
    if (piStack_1c != (int *)0x0) {
      fn_82C10B28(*(undefined4 *)(param_1 + 0x40),3,&piStack_1c);
    }
  }
  else {
    piStack_20[5] = (int)piStack_1c;
    *piStack_1c = param_1;
    piStack_1c[1] = *(int *)(param_1 + 0x44);
    *(int **)(param_1 + 0x44) = piStack_20;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return uVar1;
}


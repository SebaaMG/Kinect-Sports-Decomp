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
extern int fn_82AB15D0();
extern int fn_82B6B230();


void fn_82B9F6F0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dddb8,0xffffffff820dddc0,0x23c);
  }
  iVar2 = *param_1;
  if (param_1[5] != 0) {
    while( true ) {
      do {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 4);
        } while (*(int *)(iVar3 + 4) != 0);
        iVar2 = *(int *)(iVar3 + 0xc);
      } while ((*(int *)(iVar3 + 0xc) != 0) ||
              (iVar2 = *(int *)(iVar3 + 8), *(int *)(iVar3 + 8) != 0));
      fn_82B6B230(param_1[4],iVar3);
      uVar1 = param_1[5];
      param_1[5] = (int)((ulonglong)uVar1 - 1);
      if ((ulonglong)uVar1 - 1 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x10);
      if (iVar2 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dde3c,0xffffffff820dddc0,0x268);
      }
      if (iVar3 == *(int *)(iVar2 + 4)) {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      else if (iVar3 == *(int *)(iVar2 + 0xc)) {
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
    }
    *param_1 = 0;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}


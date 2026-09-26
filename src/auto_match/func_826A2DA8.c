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
extern int fn_8267B890();
extern int fn_82695DA0();
extern int fn_827A9810();


void fn_826A2DA8(int param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  fn_827A9810((int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38));
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x38);
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + *(int *)(param_3 + 0x34)) != 0) {
        uVar1 = fn_8267B890(param_2,0x10,0);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82695DA0(uVar1,*(undefined4 *)(iVar4 + *(int *)(param_3 + 0x34)));
        }
        *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar4) = uVar2;
      }
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 != 0);
  }
  return;
}


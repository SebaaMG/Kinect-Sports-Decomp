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
extern int fn_826E7800();


int fn_826E8780(int param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
    fn_826E7800(param_1,1);
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (bVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_8267B890(param_2,(ulonglong)bVar1 + 1,0);
    iVar4 = 0;
    if (bVar1 != 0) {
      do {
        *(undefined1 *)(param_1 + 0x15) = 0;
        if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
          fn_826E7800(param_1,1);
        }
        uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(undefined1 *)(iVar4 + iVar3) = uVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)bVar1);
    }
    *(undefined1 *)(iVar4 + iVar3) = 0;
  }
  return iVar3;
}


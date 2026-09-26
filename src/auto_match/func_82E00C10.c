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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82E00C10(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  iVar2 = fn_82CE5410();
  if ((*(uint *)(param_1 + 0x18) & 0x3fffffff) < (uint)bVar1) {
    uVar3 = (*(uint *)(param_1 + 0x18) & 0x3fffffff) << 1;
    if (uVar3 <= bVar1) {
      uVar3 = (uint)bVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),(int *)(param_1 + 0x10),uVar3,0x60);
  }
  uVar3 = (uint)bVar1;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      *(undefined4 *)(uVar4 * 0x60 + *(int *)(param_1 + 0x10) + 4) =
           *(undefined4 *)(uVar4 * 4 + *param_3);
      fn_82CE4040(*(undefined4 *)(uVar4 * 4 + *param_3));
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar3);
  }
  return;
}


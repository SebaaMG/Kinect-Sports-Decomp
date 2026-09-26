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
extern int fn_82C4E0F8();


undefined8 fn_82C4E3B0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)((int)param_1 + 0xc);
  if (pbVar4 <= *(byte **)(param_1 + 2)) {
    do {
      iVar2 = *(int *)(param_1 + 1);
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar2 + 8;
      *(int *)(param_1 + 1) = iVar3;
      *param_1 = ((ulonglong)bVar1 << ((longlong)(0x28 - iVar2) & 0x7fU)) + *param_1;
    } while (pbVar4 <= *(byte **)(param_1 + 2));
    *(byte **)((int)param_1 + 0xc) = pbVar4;
    if (-1 < iVar3) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 3) != 1) {
    if (*(int *)(param_1 + 1) < -0x10) {
      if (*(int *)((int)param_1 + 0x14) == 0) {
        *(undefined4 *)((int)param_1 + 0x14) = 2;
      }
      *(undefined4 *)(param_1 + 1) = 0x7f;
    }
    return 0;
  }
  fn_82C4E0F8();
  return 1;
}


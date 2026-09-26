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
extern int fn_829640A0();


undefined8 fn_8294D308(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(iVar7 + iVar1);
      iVar2 = *(int *)(iVar3 + 0x38);
      iVar5 = iVar2;
      if (iVar2 != -1) {
        while (iVar4 = *(int *)(iVar5 * 4 + iVar1), *(int *)(iVar4 + 0x38) != -1) {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar4 + 0x3c) | *(uint *)(iVar3 + 0x3c);
          iVar1 = *(int *)(param_1 + 0x14);
          iVar5 = *(int *)(iVar4 + 0x38);
        }
        if (iVar2 != iVar5) {
          *(int *)(iVar3 + 0x38) = iVar5;
          fn_829640A0();
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  return 0;
}


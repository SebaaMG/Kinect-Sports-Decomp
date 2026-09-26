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
extern int fn_826310E0();


void fn_82853770(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x6930);
  if ((*(char *)(param_2 + 10) == '\0') || (*(int *)(param_1 + 0x104) == 0)) {
    iVar5 = 0;
    if (*(short *)(param_2 + 8) != 0) {
      lVar4 = 0;
      do {
        uVar3 = lVar4 + (ulonglong)*(uint *)(param_1 + 0x98);
        uVar2 = (uVar3 & 0xffffffff) >> 2;
        fn_826310E0(*(undefined4 *)(param_1 + 4),uVar3,
                     (ulonglong)*(byte *)(*(int *)(param_2 + 4) + iVar5) * 0x40 +
                     (ulonglong)*(uint *)(iVar1 * 0xd0 + param_1 + 0x1f0),3,
                     (ulonglong)
                     (-0x8000000000000000 >> (((uVar3 + 2 & 0xffffffff) >> 2) - uVar2 & 0x7f)) >>
                     (uVar2 & 0x7f));
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 3;
      } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 8));
    }
    *(undefined4 *)(param_1 + 0x104) = 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 4);
    *(uint *)(param_1 + 0x80) = (uint)*(ushort *)(param_2 + 8);
  }
  return;
}


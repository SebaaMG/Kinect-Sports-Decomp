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
extern int fn_825F0D40();
extern int fn_82BE4FB0();
extern int fn_82BE5000();


void fn_825F1258(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (1 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2)) {
    fn_82BE4FB0(*(undefined4 *)(*(int *)(param_1 + 0x3c) * 4 + *(int *)(param_1 + 0x1c)));
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar2 = *(int *)(param_1 + 0x20) - iVar1 >> 2;
    iVar3 = (*(uint *)(param_1 + 0x3c) + 1) -
            (int)(((ulonglong)*(uint *)(param_1 + 0x3c) + 1 & 0xffffffff) / (ulonglong)uVar2) *
            uVar2;
    *(int *)(param_1 + 0x3c) = iVar3;
    fn_82BE5000(*(undefined4 *)(iVar3 * 4 + iVar1));
    fn_825F0D40(param_1,*(undefined4 *)(param_1 + 0x3c));
  }
  return;
}


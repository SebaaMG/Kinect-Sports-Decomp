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
extern int fn_82FEC850();


void fn_8301BC70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Could not recover jumptable at 0x8301bc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 8))(*(int *)(param_1 + 0xc) + 0xc0);
    return;
  }
  iVar1 = 0;
  for (uVar2 = *(uint *)(param_1 + 0x18); uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  fn_82FEC850(((longlong)(int)(uint)*(ushort *)(param_1 + 0x20) * (longlong)iVar1 & 0x3fffffffU) <<
               2,*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}


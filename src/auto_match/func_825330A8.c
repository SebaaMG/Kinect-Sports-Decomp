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
extern int fn_82549798();
extern int fn_82A938E8();
extern int fn_82A93F70();
extern int fn_82F691F0();


void fn_825330A8(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (ulonglong)*(ushort *)(param_1 + 8) << 6;
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar2 = fn_82549798(lVar1,0,4,0);
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,(ulonglong)*(ushort *)(param_1 + 8) << 6);
    }
    fn_82A938E8((ulonglong)*(ushort *)(param_1 + 8) << 6,4,0,0,param_1 + 0x74);
    fn_82A93F70(param_1 + 0x74,*(undefined4 *)(param_1 + 0x4c));
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x50) == 0)) {
    uVar2 = fn_82549798(lVar1,0,4,0);
    *(int *)(param_1 + 0x50) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,(ulonglong)*(ushort *)(param_1 + 8) << 6);
    }
    fn_82A938E8((ulonglong)*(ushort *)(param_1 + 8) << 6,4,0,0,param_1 + 0x54);
    fn_82A93F70(param_1 + 0x54,*(undefined4 *)(param_1 + 0x50));
  }
  return;
}


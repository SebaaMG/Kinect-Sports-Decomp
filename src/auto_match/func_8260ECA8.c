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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_18;
extern int fn_8254A870();
extern int fn_82552F88();
extern int fn_82569980();
extern unsigned int uStack_14;
extern unsigned int uStack_20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8260ECA8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uStack_20;
  float fStack_18;
  undefined4 uStack_14;
  
  iVar1 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x14));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0xd8) + iVar1 * 0x30 + 0x10);
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x8c0);
    if (iVar1 != 0) {
      fn_82552F88(*(undefined4 *)(param_3 + 0x10),&uStack_20);
      *(undefined8 *)(iVar1 + 0x40) = uStack_20;
      *(ulonglong *)(iVar1 + 0x48) = CONCAT44(fStack_18,uStack_14);
      fn_8254A870((double)(((U64)(uStack_20) >> 0) & 0xFFFFFFFF),(double)(((U64)(uStack_20) >> 32) & 0xFFFFFFFF),(double)fStack_18);
    }
  }
  return;
}


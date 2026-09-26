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
extern unsigned int *auStack_40;
extern int fn_82E50330();
extern unsigned int uStack_38;


/* WARNING: Removing unreachable block (ram,0x82e7d6d4) */
/* WARNING: Removing unreachable block (ram,0x82e7d5f0) */
/* WARNING: Removing unreachable block (ram,0x82e7d668) */
/* WARNING: Removing unreachable block (ram,0x82e7d740) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82E7D568(undefined8 param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  int *apiStack_50 [4];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  apiStack_50[0] = (int *)0x0;
  uStack_38 = 0;
  lVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_2,0,0,apiStack_50);
  if (-1 < lVar1) {
    (**(code **)(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f068,auStack_40);
    fn_82E50330(auStack_40);
    uStack_38 = 0;
    (**(code **)(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f09c,auStack_40);
    fn_82E50330(auStack_40);
    uStack_38 = 0;
    (**(code **)(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f0b0,auStack_40);
    fn_82E50330(auStack_40);
    uStack_38 = 0;
    (**(code **)(*apiStack_50[0] + 0x1c))(apiStack_50[0],0xffffffff8215f074,auStack_40);
  }
  if (apiStack_50[0] != (int *)0x0) {
    (**(code **)(*apiStack_50[0] + 8))();
    apiStack_50[0] = (int *)0x0;
  }
  fn_82E50330(auStack_40);
  return lVar1;
}


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
extern int fn_82E73170();
extern int fn_82E731F8();
extern int fn_82E73A90();


undefined8 fn_82E74310(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  if (((param_2 == 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == (undefined4 *)0x0)) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
    iVar2 = fn_82E731F8();
    if (iVar2 == 0) {
      uVar1 = fn_82E73170(param_1,param_2);
      if ((int)uVar1 < 0) {
        if ((int)uVar1 == -0x3ff2c561) {
          *param_4 = 1;
          uVar1 = 0;
          *param_3 = 1;
        }
        if ((int)uVar1 == -0x3ff2c94b) {
          uVar1 = 0;
          *param_3 = 1;
        }
      }
      else if (*(ulonglong *)(param_1 + 0x200) < *(ulonglong *)(param_2 + 0x10)) {
        *(ulonglong *)(param_1 + 0x200) = *(ulonglong *)(param_2 + 0x10);
      }
    }
    else {
      if (*(ulonglong *)(param_2 + 0x18) < *(ulonglong *)(param_1 + 0x1e0)) {
        *(ulonglong *)(param_1 + 0x1e0) = *(ulonglong *)(param_2 + 0x18);
      }
      uVar1 = fn_82E73A90(param_1,*(longlong *)(param_2 + 0x18) - *(longlong *)(param_1 + 0x1e0));
      if (-1 < (int)uVar1) {
        uVar1 = fn_82E74310(param_1,param_2,param_3,param_4);
      }
    }
  }
  return uVar1;
}


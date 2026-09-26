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
extern unsigned int lbl_831888B8;


undefined8 fn_82E5A5D8(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0xffffffff80070057;
  }
  iVar2 = param_1;
  if (param_1 == 0) {
    return 0xffffffff8000ffff;
  }
  while ((uVar1 = *(uint *)(iVar2 + 4), param_2 < uVar1 || (uVar1 + 0x14 <= param_2))) {
    iVar2 = *(int *)(iVar2 + 100);
    if (iVar2 == 0) {
LAB_82e5a628:
      if ((*(uint *)(param_1 + 8) & 1) == 0) {
        return 0xffffffff80004005;
      }
      uVar3 = *(undefined4 *)(param_1 + 0xc);
LAB_82e5a638:
      *param_3 = uVar3;
      return 0;
    }
  }
  param_2 = param_2 - uVar1;
  if ((*(byte *)((param_2 >> 3) + iVar2 + 0x10) & (&lbl_831888B8)[param_2 & 7]) != 0) {
    uVar3 = *(undefined4 *)((param_2 + 5) * 4 + iVar2);
    goto LAB_82e5a638;
  }
  goto LAB_82e5a628;
}


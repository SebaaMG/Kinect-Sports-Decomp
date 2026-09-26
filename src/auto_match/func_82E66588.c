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
extern int fn_82F68B78();
extern int fn_8306C5D0();
extern unsigned int lbl_8323FF68;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fn_82E66588(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (lbl_8323FF68 != 0) {
    iVar1 = fn_82F68B78(*(undefined4 *)(lbl_8323FF68 + 0xa0),param_1);
    uVar3 = 0;
    RtlEnterCriticalSection(iVar1 + 0x50);
    if (*(int *)(iVar1 + 0x4c) == 0) {
      iVar2 = fn_8306C5D0(param_1,*(undefined4 *)(iVar1 + 0x70),0,
                                *(undefined4 *)(iVar1 + 0x6c));
      if ((iVar2 == 0) && (uVar3 = thunk_FUN_82a2b798(), 0 < (int)uVar3)) {
        uVar3 = uVar3 & 0xffff | 0x80070000;
      }
    }
    else {
      uVar3 = 0xffffffff8000ffff;
    }
    RtlLeaveCriticalSection(iVar1 + 0x50);
    return uVar3;
  }
  return 0xffffffffc00d36bb;
}


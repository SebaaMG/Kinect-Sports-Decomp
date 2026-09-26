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
extern int fn_82FF3F40();
extern int fn_83000878();
extern int fn_8301B380();
extern unsigned int lbl_832642F8;


void fn_82FEFF00(int param_1)

{
  undefined2 uVar2;
  undefined8 uVar1;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  uVar2 = fn_82FF3F40(*(undefined4 *)(param_1 + 0x68));
  *(undefined2 *)(param_1 + 0xd4) = uVar2;
  if ((*(byte *)(param_1 + 0xda) & 0x40) == 0) {
    *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) | 0x40;
    if (*(int *)(param_1 + 0x17c) != 0) {
      uVar1 = fn_83000878(*(undefined4 *)(param_1 + 0x68));
      fn_8301B380(lbl_832642F8,*(undefined4 *)(param_1 + 0x17c),uVar1);
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264558);
  return;
}


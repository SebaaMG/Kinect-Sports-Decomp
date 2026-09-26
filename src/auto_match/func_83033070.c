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
extern int fn_82FF5750();
extern int fn_82FF5B50();
extern unsigned int lbl_832642F4;


undefined8 fn_83033070(int param_1,ulonglong param_2,char param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x94) = (int)param_4;
  if ((*(int *)(param_1 + 0x20) != 0) && ((int)param_4 != 0)) {
    fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x20),param_4 + 4);
  }
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0x7f;
  if ((param_2 & 0xffffffff) != 0) {
    if ((ulonglong)*(uint *)(param_1 + 0x94) != 0) {
      lVar2 = (ulonglong)*(uint *)(param_1 + 0x94) + 4;
    }
    uVar1 = fn_82FF5B50(lbl_832642F4,param_2,lVar2);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  *(int *)(param_1 + 0x20) = (int)param_2;
  *(byte *)(param_1 + 0x28) = param_3 << 7 | *(byte *)(param_1 + 0x28) & 0x7f;
  return 1;
}


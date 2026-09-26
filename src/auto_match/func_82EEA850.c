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
extern int fn_82A1E7D8();
extern int fn_82A2A700();
extern int fn_82EEA6E8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_82EEA850(int param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = *(undefined4 *)(param_1 + 0x40);
  uVar2 = 0;
  uStack_30 = *(undefined4 *)(param_1 + 0x70);
  *param_2 = 0;
  iVar1 = fn_82A2A700(2,&uStack_30,0,0xffffffffffffffff);
  if (iVar1 == 0) {
    RtlEnterCriticalSection(param_1 + 0x54);
    if (*(int *)(param_1 + 0x50) != 0) {
      fn_82EEA6E8(*(int *)(param_1 + 0x50),param_2);
    }
    if ((*(int *)(*(int *)(param_1 + 0x50) + 100) == 0) &&
       (iVar1 = fn_82A1E7D8(*(undefined4 *)(param_1 + 0x70)), iVar1 == 0)) {
      uVar2 = thunk_FUN_82a2b798();
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0x80070000;
      }
      if (-1 < (int)uVar2) {
        uVar2 = 0xffffffff8000ffff;
      }
    }
    RtlLeaveCriticalSection(param_1 + 0x54);
  }
  else if (iVar1 != 1) {
    uVar2 = thunk_FUN_82a2b798();
    if (0 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
    if (-1 < (int)uVar2) {
      uVar2 = 0xffffffff8000ffff;
    }
  }
  return uVar2;
}


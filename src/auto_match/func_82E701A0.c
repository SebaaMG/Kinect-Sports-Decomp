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


undefined8
fn_82E701A0(int *param_1,longlong param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint auStack_40 [16];
  
  if ((param_4 == 0) || (param_5 == (undefined4 *)0x0)) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    auStack_40[0] = 0;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,auStack_40);
    if (-1 < (int)uVar2) {
      if (auStack_40[0] == 0) {
        uVar2 = 0xffffffffc00d36bb;
      }
      else {
        *param_5 = 0;
        if (*(longlong *)(param_1 + 0x1e) != param_2) {
          *(longlong *)(param_1 + 0x1e) = param_2;
          *(undefined2 *)(param_1 + 0x20) = 0xffff;
        }
        if (*(int *)(param_4 + 7) == 0) {
          *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
        }
        if ((*(char *)(param_1 + 0x1c) != *(char *)(param_4 + 6)) &&
           (*(char *)(param_1 + 0x1c) = *(char *)(param_4 + 6), *(int *)(param_4 + 7) == 0)) {
          *(longlong *)(param_1 + 0x1a) = *(longlong *)(param_1 + 0x1a) + 1;
        }
        uVar1 = (ulonglong)auStack_40[0];
        trapDoubleWordImmediate(6,uVar1,0);
        if ((*(ulonglong *)(param_1 + 0x1a) == (*(ulonglong *)(param_1 + 0x1a) / uVar1) * uVar1) &&
           (*(int *)(param_4 + 7) == 0)) {
          *(longlong *)(param_1 + 0x10) = param_2;
          *(undefined2 *)((int)param_1 + 0x72) = *(undefined2 *)(param_1 + 0x20);
          *param_5 = 1;
        }
      }
    }
  }
  return uVar2;
}


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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82EDC068();


ulonglong fn_82EDD0B8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x160) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x160),0x248c8000);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if (*(int *)(param_1 + 0x164) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x164),0x248c8000);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  uVar1 = fn_82EDC068(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  uVar2 = fn_82EDC068(param_1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  uVar3 = fn_8265C940(uVar1,0x248c8000);
  *(int *)(param_1 + 0x160) = (int)uVar3;
  if ((uVar3 & 0xffffffff) != 0) {
    lVar4 = fn_8265C940(uVar2,0x248c8000);
    *(int *)(param_1 + 0x164) = (int)lVar4;
    uVar3 = (ulonglong)(lVar4 != 0);
  }
  return uVar3;
}


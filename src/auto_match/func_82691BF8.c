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
extern int fn_82691AF0();
extern int fn_8270AAE8();
extern unsigned int lbl_831E7E60;


void fn_82691BF8(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)lbl_831E7E60;
  RtlEnterCriticalSection(uVar2 + 0x2c4);
  iVar1 = *(int *)(param_1 + 0x218);
  if (((iVar1 != 0) && (iVar1 != param_2)) && (*(int *)(iVar1 + 0x10) == 0)) {
    fn_8270AAE8(param_1 + 0x14);
    fn_82691AF0(param_1,*(undefined4 *)(param_1 + 0x218));
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (((ulonglong)*(uint *)(param_1 + 0x20c) -
       (ulonglong)(uint)(*(int *)(param_1 + 0x1a8) << (*(uint *)(param_1 + 0x14) & 0x3f)) ==
       (ulonglong)*(uint *)(param_1 + 0x210)) ||
     ((uint)(*(int *)(param_1 + 0x1fc) << 2) < *(uint *)(param_2 + 0x18))) {
    if (((ulonglong)*(uint *)(param_1 + 0x200) + (ulonglong)*(uint *)(param_2 + 0x18) & 0xffffffff)
        <= (ulonglong)*(uint *)(param_1 + 0x20c)) {
      fn_8270AAE8(param_1 + 0x14,param_2);
      fn_82691AF0(param_1,param_2);
    }
  }
  else {
    *(int *)(param_1 + 0x218) = param_2;
  }
  RtlLeaveCriticalSection(uVar2 + 0x2c4);
  return;
}


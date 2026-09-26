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
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82647258();


void fn_8263E790(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[4];
  uVar2 = param_1[3];
  uVar4 = param_1[2];
  lVar3 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar3 != 0) {
    fn_82641EF8(param_1,lVar3,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar4 != 0) {
    if ((uVar4 & 0x1e0000) != 0) {
      uVar4 = fn_82642F50(param_1,uVar4);
    }
    if ((param_1[5] & uVar4) != 0) {
      uVar4 = fn_826417C8(param_1,uVar4,*(undefined4 *)(param_1 + 0x528));
    }
    if ((uVar4 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar4 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar4 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar4 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar4 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar4 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar4 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar4 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar2 != 0) {
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar2 << 0x20);
    }
    if ((uVar2 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar2 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar1 != 0) {
    if ((uVar1 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar1 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar1 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar1 & 0x7e000000000000) << 9);
    }
    if ((uVar1 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar1 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar1 << 0x1a,0x2300,param_1 + 0x537);
    }
    if ((uVar1 & 0xc000000000000000) != 0) {
      if (((*(byte *)(param_1 + 0x558) & 0x80) != 0) || ((*(byte *)(param_1 + 0x558) & 0x40) != 0))
      {
        fn_82647258(param_1);
      }
    }
    param_1[4] = 0;
  }
  return;
}


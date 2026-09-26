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
extern int fn_82A1BBE8();
extern int fn_82A371C0();
extern int fn_82A37600();
extern int fn_82A37F58();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_82A34310(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uStack_3c = 0x80000;
  }
  else {
    uStack_3c = *(undefined4 *)(*(int *)(param_2 + 4) + 4);
  }
  lVar2 = fn_82A37F58(param_1 + 0x50,*(undefined4 *)(param_2 + 0x1c));
  uVar1 = *(uint *)(param_2 + 0x20);
  lVar3 = fn_82A37600(param_1 + 0xc4,*(undefined4 *)(param_2 + 0x18));
  lVar4 = fn_82A371C0(param_1 + 0x10c,*(undefined4 *)(param_2 + 0x14));
  lVar5 = fn_82A1BBE8(1,&uStack_40,0xffffffff80000000);
  return lVar5 + lVar4 + lVar3 + (ulonglong)uVar1 + lVar2;
}


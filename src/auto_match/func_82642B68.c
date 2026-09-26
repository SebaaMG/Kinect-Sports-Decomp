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
extern int fn_82642048();
extern int fn_826427F8();
extern int fn_82643A48();
extern int fn_8264D6C0();
extern int fn_82F68CC0();


void fn_82642B68(int param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  int param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = (param_8 + 0x70) * 8;
  uVar1 = *(uint *)(*(int *)(iVar2 + param_3) + param_3 + 0x36c);
  uVar3 = uVar1 >> 2;
  iVar4 = fn_82643A48(param_1,uVar3 + 5);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = 0xc0003b00;
    *(undefined4 *)(iVar4 + 8) = 0x100;
    *(uint *)(iVar4 + 0xc) = (uVar3 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    *(uint *)(iVar4 + 0x14) = uVar3 & 0x3fff;
    iVar6 = iVar4 + 0x18;
    uVar5 = (ulonglong)*(uint *)(*(int *)(iVar2 + param_3) + param_3 + 0x368) +
            (ulonglong)*(uint *)(param_3 + 0x20);
    lVar7 = (((uVar5 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) + -0x40000000;
    sync(0);
    fn_82F68CC0(iVar6,lVar7,(ulonglong)uVar1);
    fn_8264D6C0(lVar7,lVar7 + (ulonglong)uVar1,0);
    if (((int)param_2 != 0) && ((*(byte *)(param_6 + 8) & 7) != 7)) {
      fn_826427F8(param_6,iVar6,param_4,param_7);
    }
    *(byte *)(param_1 + 0x2abe) = (param_2 != 0) << 7 | *(byte *)(param_1 + 0x2abe) & 0x7f;
    fn_82642048(param_3,iVar6,param_5,param_1 + 0x31a0,param_8);
    *(uint **)(param_1 + 0x30) = (uint *)(iVar4 + 0x14) + uVar3;
    *(undefined8 *)(param_1 + 0x2ef0) = *(undefined8 *)(param_1 + 0x31a8);
    *(undefined8 *)(param_1 + 0x2ee8) = *(undefined8 *)(param_1 + 0x31a0);
  }
  return;
}


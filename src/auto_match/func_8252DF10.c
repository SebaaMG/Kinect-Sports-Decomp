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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82580E60();
extern int fn_82580EF8();
extern int fn_8262FEC8();
extern int fn_82631BF8();
extern int fn_826438C0();
extern unsigned int lbl_83281124;
extern unsigned int uStack_32;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3a;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_3f;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_52;
extern unsigned int uStack_54;
extern unsigned int uStack_56;
extern unsigned int uStack_57;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


bool fn_8252DF10(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 auStack_70 [4];
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  
  if (lbl_83281124 == 0) {
    bVar3 = false;
  }
  else {
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c37e8);
    fn_82580EF8(uVar1,param_1 + 8);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c380c);
    fn_82580EF8(uVar1,param_1 + 0x10);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3834);
    fn_82580EF8(uVar1,param_1 + 0xc);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c385c);
    fn_82580EF8(uVar1,param_1 + 0x18);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3884);
    fn_82580EF8(uVar1,param_1 + 0x14);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c38ac);
    fn_82580EF8(uVar1,param_1 + 0x1c);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c38ac);
    fn_82580EF8(uVar1,param_1 + 0x20);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c38d8);
    fn_82580EF8(uVar1,param_1 + 0x24);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3904);
    fn_82580EF8(uVar1,param_1 + 0x28);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3930);
    fn_82580EF8(uVar1,param_1 + 0x2c);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3960);
    fn_82580EF8(uVar1,param_1 + 0x30);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c3990);
    fn_82580EF8(uVar1,param_1 + 0x34);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c39c0);
    fn_82580EF8(uVar1,param_1 + 0x38);
    uVar1 = fn_82230110(&uStack_60,0xffffffff821c39e8);
    fn_82580E60(uVar1,(undefined4 *)(param_1 + 4));
    uStack_3e = 1;
    uStack_5c = 0x2a23b9;
    uStack_60 = 0;
    uStack_5e = 0;
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_56 = 0;
    uStack_54 = 0;
    uStack_52 = 0xc;
    uStack_50 = 0x2c23a5;
    uStack_4c = 0;
    uStack_4b = 5;
    uStack_4a = 0;
    uStack_48 = 0;
    uStack_46 = 0x14;
    uStack_44 = 0x2c23a5;
    uStack_40 = 0;
    uStack_3f = 5;
    uStack_3c = 0xff;
    uStack_3a = 0;
    uStack_38 = 0xffffffff;
    uStack_34 = 0;
    uStack_33 = 0;
    uStack_32 = 0;
    lVar2 = fn_82631BF8(&uStack_60);
    bVar3 = lVar2 != 0;
    if (bVar3) {
      auStack_70[0] = 0x1c;
      fn_826438C0(*(undefined4 *)(param_1 + 4),0,lVar2,auStack_70,0);
      fn_8262FEC8(lVar2);
    }
  }
  return bVar3;
}


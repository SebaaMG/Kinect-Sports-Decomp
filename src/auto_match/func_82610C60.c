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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_827D50B8();
extern int fn_827D50C0();
extern int fn_827DEA50();
extern int fn_82816F98();
extern int fn_828171A0();


undefined8 fn_82610C60(int param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 auStack_30 [12];
  
  iVar3 = fn_827D50B8(*(undefined4 *)(param_1 + 0x2c));
  if ((iVar3 == 0x3e5) || (iVar3 == 0x3e4)) {
    fn_827D50C0(*param_3,0x3e5);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0x3e5;
  }
  else if (*(int *)(param_1 + 0x1c) == 0) {
    fn_827D5078(*param_3,0);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 2;
  }
  else {
    fn_827DEA50(*(undefined4 *)(param_1 + 0x10));
    fn_82816F98(*(undefined4 *)(param_1 + 0x1c),1,auStack_30);
    uVar1 = *param_3;
    uVar2 = fn_828171A0(*(undefined4 *)(param_1 + 0x1c),0xffffffff821c7b34);
    fn_827D5090(uVar1,uVar2);
    uVar1 = *param_3;
    uVar2 = fn_828171A0(*(undefined4 *)(param_1 + 0x1c),0xffffffff821c7b44);
    fn_827D50A8(uVar1,uVar2);
    fn_827D5078(*param_3,auStack_30[0]);
    fn_827D50C0(*param_3,0);
    if (param_3[1] != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  return uVar2;
}


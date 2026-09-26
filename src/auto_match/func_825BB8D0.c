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
extern unsigned int *auStack_110;
extern unsigned int *auStack_c5;
extern unsigned int *auStack_ce;
extern int fn_82526C70();
extern int fn_82529A38();
extern int fn_82558150();
extern int fn_82587AC0();
extern int fn_82587B68();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_8c;


void fn_825BB8D0(int param_1,undefined4 param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined2 auStack_110 [33];
  undefined1 auStack_ce [9];
  undefined1 auStack_c5 [57];
  undefined4 uStack_8c;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_82558150(auStack_110);
    auStack_110[0] = 0xe8;
    puVar2 = (undefined4 *)fn_82587B68(0x11);
    fn_82526C70(auStack_ce,0x40,0xffffffff821c4dd0,*puVar2);
    uStack_48 = *(undefined4 *)(param_1 + 0x34);
    uStack_4c = *(undefined4 *)(param_1 + 0x3c);
    uStack_44 = *(undefined4 *)(param_1 + 0x40);
    uStack_40 = *(undefined4 *)(param_1 + 0x44);
    uStack_3c = *(undefined4 *)(param_1 + 0x48);
    uStack_38 = *(undefined4 *)(param_1 + 0x4c);
    uStack_6c = *(undefined4 *)(param_1 + 0x14);
    uStack_68 = *(undefined4 *)(param_1 + 0x18);
    uStack_64 = *(undefined4 *)(param_1 + 0x1c);
    uStack_60 = *(undefined4 *)(param_1 + 0x20);
    uStack_5c = *(undefined4 *)(param_1 + 0x24);
    uStack_58 = *(undefined4 *)(param_1 + 0x28);
    uStack_50 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x2c);
    uStack_34 = *(undefined4 *)(param_1 + 0x50);
    uStack_30 = *(undefined4 *)(param_1 + 0x54);
    uStack_2c = *(undefined4 *)(param_1 + 0x58);
    uStack_8c = param_2;
    uVar1 = fn_82587AC0(auStack_c5);
    fn_82529A38(uVar1,auStack_110,0);
  }
  return;
}


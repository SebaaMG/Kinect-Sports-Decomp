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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_82721D00();
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82722298(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined **ppuStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  fn_82695750(auStack_70,param_4);
  uVar1 = fn_82721D00(param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_70
                        ,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                        *(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x18));
  fn_82696330(auStack_70);
  iStack_34 = (int)uVar1;
  if (-1 < iStack_34) {
    auStack_60[0] = 0;
    ppuStack_50 = &lbl_8200579C;
    puStack_4c = auStack_60;
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    iStack_30 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc) >> 4) +
                *(int *)(param_2 + 0x1c) * 0x20 + -0x20;
    uStack_48 = param_3;
    iStack_38 = param_2;
    (**(code **)(*(int *)*param_4 + 0x28))((int *)*param_4,&ppuStack_50,param_4[1],0);
    fn_826828D8(&ppuStack_50);
    fn_82683270(param_2 + 8,uVar1);
    fn_82696330(auStack_60);
  }
  return;
}


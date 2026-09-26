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
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82713EE8();
extern int fn_827B0A40();
extern unsigned int iStack_48;
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82012284;
extern unsigned int uStack_4c;


void fn_8273EA00(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int aiStack_60 [4];
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int *piStack_44;
  undefined1 auStack_40 [64];
  
  if (param_3 != (int *)0x0) {
    auStack_40[0] = 0;
    fn_82681728(aiStack_60,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff82012158);
    fn_82713EE8(param_1 + 0x10,param_2,aiStack_60,auStack_40);
    lVar2 = (ulonglong)*(uint *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
    iVar1 = fn_82696958(auStack_40,param_2);
    uStack_4c = 0;
    ppuStack_50 = (undefined **)&lbl_82012284;
    iStack_48 = param_2;
    piStack_44 = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x20))(iVar1 + 0x10,param_2 + 0x78,&ppuStack_50,0,0);
    (**(code **)(*param_3 + 0x1c))(param_3);
    fn_827B0A40(&uStack_4c);
    ppuStack_50 = &lbl_8200C4D4;
    fn_82696330(auStack_40);
  }
  return;
}


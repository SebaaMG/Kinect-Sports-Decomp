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
extern unsigned int *auStack_1f00;
extern unsigned int *auStack_f90;
extern int fn_82A8C620();
extern int fn_82A8D2F8();
extern int fn_82A8F228();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_1f08;
extern unsigned int uStack_1f14;
extern unsigned int uStack_1f18;
extern unsigned int uStack_1f1c;
extern unsigned int uStack_1f20;


undefined8 fn_82A8F4B8(int *param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 uStack_1f20;
  undefined4 uStack_1f1c;
  undefined4 uStack_1f18;
  undefined4 uStack_1f14;
  undefined4 uStack_1f08;
  undefined1 auStack_1f00 [3952];
  undefined1 auStack_f90 [3984];
  
  puVar3 = (undefined4 *)*param_1;
  uStack_1f14 = 0x48;
  uStack_1f20 = lbl_8201DCB8;
  uStack_1f08 = lbl_8201DCB8;
  uStack_1f18 = lbl_8201DCB8;
  uStack_1f1c = lbl_8201DCB8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &uStack_1f20;
  }
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_1f00,0xf6e,&uStack_1f20), cVar2 == '\0'
     )) {
    uVar1 = 0;
  }
  else {
    fn_82A8D2F8(auStack_f90,auStack_1f00,0xf6e);
    fn_82A8C620(auStack_f90,0,0x20,param_3);
    fn_82A8F228(puVar3,param_3 + 4,auStack_f90,0x20);
    uVar1 = 1;
  }
  return uVar1;
}


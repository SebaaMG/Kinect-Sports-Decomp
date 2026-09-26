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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_98;
extern int fn_82A8BF78();
extern int fn_82A8C620();
extern int fn_82A8C770();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_82A8C8F0(int *param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined1 *puVar3;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  puVar3 = (undefined1 *)*param_1;
  uStack_a0 = lbl_8201DCB8;
  uStack_9c = lbl_8201DCB8;
  uStack_94 = lbl_8201DCB8;
  uStack_90 = lbl_8201DCB8;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = auStack_98;
  }
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_80,0x29,&uStack_a0), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A8BF78(auStack_50,auStack_80,0x29);
    fn_82A8C620(auStack_50,0,0x20,param_3);
    fn_82A8C770(puVar3 + 4,param_3 + 8,auStack_50,0x20);
    fn_82A8C770(puVar3 + 8,param_3 + 0x3c,auStack_50,0xb2);
    uVar1 = 1;
  }
  return uVar1;
}


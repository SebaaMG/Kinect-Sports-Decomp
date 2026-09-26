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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82A870A0();
extern int fn_82A87E58();
extern int fn_82A8C620();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_cc;
extern unsigned int uStack_ce;
extern unsigned int uStack_d0;


undefined8 fn_82A88398(int *param_1,int *param_2,longlong param_3)

{
  char cVar2;
  undefined8 uVar1;
  undefined8 *puVar3;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [96];
  
  puVar3 = (undefined8 *)*param_1;
  uStack_d0 = (undefined2)((uint)lbl_8201DCB8 >> 0x10);
  uStack_ce = (undefined2)lbl_8201DCB8;
  auStack_c0[0] = CONCAT44(lbl_8201DCB8,uStack_cc);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = auStack_c0;
  }
  cVar2 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_a0,0x37,&uStack_d0), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A870A0(auStack_60,auStack_a0,0x37);
    fn_82A8C620(auStack_60,0,0x20,param_3);
    fn_82A87E58(puVar3,param_3 + 4,auStack_60,0x20);
    fn_82A8C620(auStack_60,0x172,0x20,param_3 + 0x60);
    fn_82A8C620(auStack_60,0x192,0x20,param_3 + 0x5c);
    uVar1 = 1;
  }
  return uVar1;
}


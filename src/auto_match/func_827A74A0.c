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
extern int fn_8267C488();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278B290();
extern int fn_8278BD68();
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_5a;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;
extern unsigned int uStack_62;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_827A74A0(int param_1)

{
  undefined8 uVar1;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined1 auStack_50 [56];
  
  uVar1 = fn_826FDED0(auStack_50,*(undefined4 *)(param_1 + 0xc));
  fn_82726AB8(param_1,uVar1);
  fn_826FDF58(auStack_50);
  uStack_68 = 0;
  uStack_6c = 1;
  ppuStack_70 = &lbl_82010C6C;
  uStack_64 = 0;
  uStack_62 = 0;
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_5a = 0;
  fn_8278BD68(param_1 + 0x2c,&ppuStack_70);
  ppuStack_70 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_70);
  fn_8267C488(&ppuStack_70);
  return;
}


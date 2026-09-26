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
extern unsigned int *auStack_70;
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_823B3808();
extern int fn_82D7E470();
extern unsigned int lbl_823B39D8;
extern unsigned int uStack_60;
extern unsigned int uStack_78;


undefined4 * fn_823B3908(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar3;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined4 auStack_70 [2];
  undefined *puStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined1 auStack_50 [80];
  
  puStack_80 = &lbl_823B39D8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puStack_7c = param_1;
  cVar3 = fn_82D7E470(&puStack_80);
  if (cVar3 == '\0') {
    puStack_68 = puStack_80;
    puStack_64 = puStack_7c;
    uStack_60 = uStack_78;
    auStack_70[0] = 0x831de3c9;
  }
  else {
    auStack_70[0] = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x2a8);
  uVar2 = fn_823B3808(auStack_50,auStack_70);
  fn_822C9BF8(uVar1,param_1 + 2,uVar2);
  fn_822DBD60(auStack_70);
  return param_1;
}


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
extern int fn_8263CA78();
extern int fn_8263CB10();
extern int fn_8263CB30();
extern int fn_82F68CC0();
extern unsigned int uStack_44;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_82923B48(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint auStack_60 [7];
  uint uStack_44;
  
  fn_8263CA78(param_1,auStack_60);
  fn_8263CB10(param_1,&uStack_70,0,0);
  fn_8263CB10(param_2,&uStack_68,0,0);
  if ((0x1a200011 < (int)(auStack_60[0] & 0xfffffe3f)) &&
     ((int)(auStack_60[0] & 0xfffffe3f) < 0x1a200015)) {
    uStack_44 = uStack_44 + 3 >> 2;
  }
  uVar1 = uStack_70;
  if ((int)uStack_68 < (int)uStack_70) {
    uVar1 = uStack_68;
  }
  uVar4 = 0;
  uVar3 = (ulonglong)uStack_6c;
  uVar2 = (ulonglong)uStack_64;
  if (uStack_44 != 0) {
    do {
      fn_82F68CC0(uVar2,uVar3,uVar1);
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + uStack_68;
      uVar3 = uVar3 + uStack_70;
    } while (uVar4 < uStack_44);
  }
  fn_8263CB30(param_2);
  fn_8263CB30(param_1);
  return 0;
}


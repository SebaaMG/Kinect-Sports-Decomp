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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F704C8();
extern int fn_82F81918();
extern unsigned int lbl_82005710;
extern unsigned int lbl_831BBCA8;


undefined8 fn_82F6B020(byte *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [24];
  
  puVar4 = lbl_831BBCA8;
  if (param_1 == (byte *)0x0) {
    puVar1 = (undefined4 *)fn_82F68240(0,0);
    *puVar1 = 0x16;
    fn_82F63BA0();
    uVar5 = lbl_82005710;
  }
  else {
    while( true ) {
      if (*(int *)(puVar4 + 0xac) < 2) {
        uVar2 = *(ushort *)((uint)*param_1 * 2 + *(int *)(puVar4 + 200)) & 8;
      }
      else {
        uVar2 = fn_82F704C8(*param_1,8,0xffffffff831bbca8);
        puVar4 = lbl_831BBCA8;
      }
      if (uVar2 == 0) break;
      param_1 = param_1 + 1;
    }
    iVar3 = fn_82F81918(auStack_30,param_1,0xffffffff831bbca8);
    uVar5 = *(undefined8 *)(iVar3 + 0x10);
  }
  return uVar5;
}


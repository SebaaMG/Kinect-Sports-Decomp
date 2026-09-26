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
extern int fn_82F68240();
extern int fn_82F6B890();
extern int fn_82F6BB98();
extern int fn_82F7C468();
extern int fn_82F82818();


longlong fn_82F6BF90(int param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar4;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(param_1 + 0xc) & 0x83) == 0) {
    puVar4 = (undefined4 *)fn_82F68240();
    lVar2 = -1;
    *puVar4 = 0x16;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if ((int)param_3 == 1) {
      lVar2 = fn_82F6B890(param_1);
      param_2 = lVar2 + param_2;
      param_3 = 0;
    }
    fn_82F6BB98(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 1) != 0) {
        if (((uVar1 & 8) != 0) && ((uVar1 & 0x400) == 0)) {
          *(undefined4 *)(param_1 + 0x18) = 0x200;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    uVar3 = fn_82F7C468(param_1);
    lVar2 = fn_82F82818(uVar3,param_2,param_3);
    lVar2 = -(ulonglong)(lVar2 == -1);
  }
  return lVar2;
}


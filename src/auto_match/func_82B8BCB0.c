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
extern int fn_82AEB338();
extern int fn_82AF4968();
extern int fn_82B8B580();


undefined8 fn_82B8BCB0(undefined8 param_1,uint param_2,uint param_3,ulonglong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  
  if ((*(int *)(param_2 + 0x1c) == *(int *)(param_3 + 0x1c)) &&
     (cVar2 = fn_82AEB338(param_3), cVar2 != '\0')) {
    cVar2 = fn_82AEB338(param_2);
    if (cVar2 != '\0') {
      uVar3 = param_3;
      if ((param_4 & 0xff) == 0) {
        do {
          uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 0x24);
          if (((uVar3 & 1) != 0) || (uVar3 = (uVar3 & 0xfffffffe) - 0x28, uVar3 == 0)) {
            cVar2 = '\0';
            goto LAB_82b8bd50;
          }
        } while (uVar3 != param_2);
        cVar2 = '\x01';
      }
      else {
        cVar2 = fn_82AF4968(param_3,param_2);
      }
LAB_82b8bd50:
      if (cVar2 == '\0') {
        uVar1 = fn_82B8B580(param_1,param_2,param_3,1,param_4);
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


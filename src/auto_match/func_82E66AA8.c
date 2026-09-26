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
extern int fn_82E66440();
extern int fn_82E66A50();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82E66AA8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  longlong lVar5;
  char in_RESERVE;
  byte bVar6;
  
  lVar5 = param_1 + 0x21c;
  iVar3 = fn_82E66440(lVar5);
  bVar6 = (iVar3 == 0) << 1;
  if (iVar3 == 0) {
    uVar2 = 0xffffffffc00d3e85;
  }
  else {
    if (*(int *)((int)param_1 + 0x214) < 1) {
      uVar2 = 0xffffffffc00d3e85;
    }
    else {
      piVar4 = (int *)fn_82E66A50(param_1,param_2);
      bVar6 = (piVar4 == (int *)0x0) << 1;
      if (piVar4 == (int *)0x0) {
        uVar2 = 0xffffffffc00d36bb;
      }
      else {
        uVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,param_3,0,0);
      }
    }
    sync(1);
    do {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*(uint *)lVar5 - 1,0,lVar5);
        *(uint *)lVar5 = uVar1;
        bVar6 = 2;
      }
    } while (!(bool)(bVar6 >> 1 & 1));
  }
  return uVar2;
}


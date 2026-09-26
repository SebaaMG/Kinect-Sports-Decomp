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
extern int fn_82A29DE8();


undefined8 fn_82866018(ulonglong param_1,uint param_2,char param_3,char param_4,int *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((param_1 & 0xffffffff) == 0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    uVar5 = 1;
    uVar2 = 0xffffffff80000000;
    uVar3 = 3;
  }
  else {
    if (param_2 == 1) {
      uVar5 = 2;
      uVar2 = 0x40000000;
    }
    else {
      if (param_2 < 3) {
        uVar5 = 2;
        uVar2 = 0x40000000;
        uVar3 = 2;
        goto LAB_8286609c;
      }
      if (param_2 != 3) {
        *param_5 = 0;
        return 0x1f;
      }
      uVar5 = 3;
      uVar2 = 0xffffffffc0000000;
    }
    uVar3 = 4;
  }
LAB_8286609c:
  uVar4 = 0x8000000;
  if (param_4 != '\0') {
    uVar4 = 0x28000000;
  }
  if (param_3 != '\0') {
    uVar4 = uVar4 | 0x40000000;
  }
  iVar1 = fn_82A29DE8(param_1,uVar2,uVar5,0,uVar3,uVar4,0);
  *param_5 = iVar1;
  if (iVar1 == -1) {
    iVar1 = thunk_FUN_82a2b798();
    if ((iVar1 == 2) || (iVar1 == 3)) {
      uVar2 = 0x42;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


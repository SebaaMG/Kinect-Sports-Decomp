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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82631488();


int fn_82581558(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [48];
  
  iVar4 = (param_2 + 0x21) * 4;
  iVar3 = *(int *)(iVar4 + param_1);
  if (iVar3 == 0) {
    switch(param_2) {
    case 0:
      uVar1 = 0xffffffff821c5b34;
      break;
    case 1:
      uVar1 = 0xffffffff821c5b58;
      break;
    case 2:
      uVar1 = 0xffffffff821c5b7c;
      break;
    case 3:
      uVar1 = 0xffffffff821c5b98;
      break;
    case 4:
      uVar1 = 0xffffffff821c5bbc;
      break;
    case 5:
      uVar1 = 0xffffffff821c5be8;
      break;
    case 6:
      uVar1 = 0xffffffff821c5c10;
      break;
    case 7:
      uVar1 = 0xffffffff821c5c40;
      break;
    case 8:
      uVar1 = 0xffffffff821c5c68;
      break;
    case 9:
      uVar1 = 0xffffffff821c5c98;
      break;
    case 10:
      uVar1 = 0xffffffff821c5cc8;
      break;
    case 0xb:
      uVar1 = 0xffffffff821c5d00;
      break;
    case 0xc:
      uVar1 = 0xffffffff821c5d3c;
      break;
    case 0xd:
      uVar1 = 0xffffffff821c5d60;
      break;
    case 0xe:
      uVar1 = 0xffffffff821c5d8c;
      break;
    case 0xf:
      uVar1 = 0xffffffff821c5dc0;
      break;
    case 0x10:
      uVar1 = 0xffffffff821c5df4;
      break;
    case 0x11:
      uVar1 = 0xffffffff821c5e18;
      break;
    case 0x12:
      uVar1 = 0xffffffff821c5e44;
      break;
    case 0x13:
      uVar1 = 0xffffffff821c5e6c;
      break;
    case 0x14:
      uVar1 = 0xffffffff821c5e9c;
      break;
    case 0x15:
      uVar1 = 0xffffffff821c5ed0;
      break;
    default:
      return 0;
    }
    fn_82520158(uVar1,auStack_30,0);
    uVar1 = fn_8251F720(auStack_30,0);
    uVar2 = fn_82631488();
    *(undefined4 *)(iVar4 + param_1) = uVar2;
    fn_8251FA58(uVar1);
    iVar3 = *(int *)(iVar4 + param_1);
  }
  return iVar3;
}


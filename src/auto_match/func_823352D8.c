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
extern int fn_822C72E0();
extern int fn_822C8C08();
extern int fn_8235D350();


void fn_823352D8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  switch(param_2) {
  case 0:
  case 8:
  case 0xd:
    uVar4 = 2;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xc:
    uVar4 = 1;
    break;
  case 9:
    uVar4 = 4;
    break;
  case 10:
    uVar4 = 3;
    break;
  default:
    goto switchD_82dbea0c_default;
  }
  pcVar2 = (char *)fn_8235D350(**(undefined4 **)(*(int *)(param_1 + 0x230) + 0x238),uVar4,
                                   *(undefined4 *)(param_1 + 0xc),0,0);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar3 - (int)pcVar2 != 1) {
    if (param_3 == 0) {
      fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x230) + 0x114) + 0x20));
    }
    else {
      fn_822C8C08(*(undefined4 *)(*(int *)(param_1 + 0x230) + 0x114));
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x230) + 0x29c) = uVar4;
switchD_82dbea0c_default:
  return;
}


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
extern int fn_829C4980();


undefined8
fn_829C4E20(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  lVar1 = (**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),0x13,4);
  if (lVar1 == 0) {
    return 0xfffffffffffffffc;
  }
  uVar2 = fn_829C4980(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if ((int)uVar2 == -3) {
    pcVar3 = "oversubscribed dynamic bit lengths tree";
  }
  else {
    if (((int)uVar2 != -5) && (*param_2 != 0)) goto LAB_829c4edc;
    uVar2 = 0xfffffffffffffffd;
    pcVar3 = "incomplete dynamic bit lengths tree";
  }
  *(char **)(param_5 + 0x18) = pcVar3;
LAB_829c4edc:
  (**(code **)(param_5 + 0x24))(*(undefined4 *)(param_5 + 0x28),lVar1);
  return uVar2;
}


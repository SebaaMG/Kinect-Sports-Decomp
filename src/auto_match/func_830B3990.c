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
extern int fn_82CE09D0();
extern int fn_82CE0A20();
extern int fn_82CE0BB0();
extern int fn_82CE0BE8();
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;


undefined8
fn_830B3990(undefined8 param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
             int *param_5)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  struct { undefined4 first; undefined4 second; } stack_pair_130;

  
  if ((param_4 & 0xffffffff) == 0) {
LAB_830b39b4:
    uVar1 = 1;
    *param_5 = 0;
  }
  else {
    uStack_23c = *param_2;
    uStack_240 = 1;
    stack_pair_130.first = 1;
    stack_pair_130.second = uStack_23c;
    iVar2 = fn_82CE09D0(0,&uStack_240,0,&stack_pair_130.first,0);
    if (iVar2 != -1) {
      if (iVar2 == 0) {
LAB_830b3a60:
        *param_5 = 0;
        return 1;
      }
      if (iVar2 == 1) {
        iVar2 = fn_82CE0BE8(*param_2,&uStack_240);
        if (iVar2 == 0) goto LAB_830b39b4;
        iVar2 = fn_82CE0A20(*param_2,param_3,param_4,0);
        if (iVar2 != 0) {
          if (iVar2 != -1) {
            *param_5 = iVar2;
            return 1;
          }
          uVar3 = fn_82CE0BB0();
          if ((0x2732 < uVar3) && ((uVar3 < 0x2735 || (uVar3 == 0x2747)))) goto LAB_830b3a60;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


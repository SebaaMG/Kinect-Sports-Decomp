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
extern unsigned int *auStack_38;
extern int fn_82E6F498();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8
fn_82E70780(undefined8 param_1,uint param_2,int *param_3,longlong param_4,uint *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [14];
  
  if ((param_3 == (int *)0x0) || (param_5 == (uint *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_5 = 0xffffffff;
    uVar1 = (**(code **)(*param_3 + 0x24))(param_3,&uStack_40);
    if ((-1 < (int)uVar1) &&
       (uVar1 = (**(code **)(*param_3 + 0x1c))(param_3,auStack_38), -1 < (int)uVar1)) {
      uVar3 = 0;
      uVar2 = 0;
      if (uStack_40 != 0) {
        do {
          uVar1 = fn_82E6F498(param_1,param_4,&uStack_3c);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          if (param_2 == uStack_3c) {
            *param_5 = uVar3;
            return uVar1;
          }
          uVar2 = uStack_40;
          if (param_2 < uStack_3c) break;
          uVar3 = uVar3 + 1;
          param_4 = (ulonglong)auStack_38[0] + param_4;
        } while (uVar3 < uStack_40);
      }
      if (uVar3 == uVar2) {
        *param_5 = uVar2;
      }
      uVar1 = 0xffffffffc00d36d5;
    }
  }
  return uVar1;
}


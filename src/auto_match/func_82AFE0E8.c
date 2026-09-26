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
extern int fn_82AFA478();


undefined8 fn_82AFE0E8(int param_1,int param_2,ulonglong param_3,longlong param_4,uint param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_4;
  if ((param_5 < uVar3) && (*(uint *)(param_1 + 0x298) < uVar3)) {
    if (uVar3 < 0x14) {
      if ((*(uint *)(param_1 + 0x28) & 0x2000000) == 0) {
        if (uVar3 <= *(uint *)(param_1 + 0x298) + 10) {
          for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2])
          {
            if (((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) &&
               ((ulonglong)puVar1[4] != (param_3 & 0xffffffff))) goto LAB_82afe118;
          }
          goto LAB_82afe178;
        }
      }
      else {
        fn_82AFA478(param_1,param_3,param_4 + -10);
      }
    }
LAB_82afe118:
    uVar2 = 0;
  }
  else {
LAB_82afe178:
    uVar2 = 1;
  }
  return uVar2;
}


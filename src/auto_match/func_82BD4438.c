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
extern int fn_82BD8BE8();


undefined8 fn_82BD4438(int param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar3 = 0xffffffff80004001;
  }
  else {
    uVar1 = *param_3;
    uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 0x18);
    *param_3 = 0;
    uVar6 = (ulonglong)uVar2 + 2;
    uVar4 = (ulonglong)uVar1 / (uVar6 & 0xffffffff);
    trapWord(6,uVar6,0);
    if ((int)uVar4 != 0) {
      do {
        uVar3 = fn_82BD8BE8(*(undefined4 *)(param_1 + 0x4c),param_2,uVar6);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if ((int)uVar3 == 1) {
          return uVar3;
        }
        uVar5 = uVar5 + 1;
        param_2 = param_2 + uVar6;
        *param_3 = *param_3 + (int)uVar6;
      } while ((uVar5 & 0xffffffff) < uVar4);
    }
  }
  return uVar3;
}


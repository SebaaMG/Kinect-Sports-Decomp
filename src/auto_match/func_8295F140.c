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
extern int fn_8295D318();


undefined8 fn_8295F140(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar5 = 0;
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar2 = (ulonglong)uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) != 0) {
    lVar7 = 0;
    lVar6 = ((ulonglong)uVar1 & 0xfffff) << 2;
    do {
      uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x104) + 8);
      uVar3 = fn_8295D318(param_1,0x20,
                                (ulonglong)*(uint *)(*(int *)(param_1 + 0x104) + 0x10) + lVar7,1,
                                lVar7 + uVar4,lVar6 + uVar4,0,uVar2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 4;
    } while ((uVar5 & 0xffffffff) < uVar2);
  }
  return 0;
}


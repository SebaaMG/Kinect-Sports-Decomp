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
extern unsigned int *auStack_40;
extern int fn_82ADF910();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool fn_82ADFFA8(undefined8 param_1,int param_2,int param_3,undefined8 param_4,ulonglong param_5,
                  undefined8 param_6,ulonglong param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uStack0000002c;
  uint auStack_40 [16];
  
  uStack0000002c = (undefined4)param_4;
  if ((param_5 & 0xffffffff) == 0) {
    if (((((((ulonglong)*(uint *)(param_3 + 0xc0) & 7) + ((ulonglong)*(uint *)(param_2 + 0xc0) & 7))
           - param_7 & 0xffffffff) < 5) && ((*(uint *)(param_2 + 0xc0) & 0x40000000) == 0)) &&
       ((*(uint *)(param_3 + 0xc0) & 0x40000000) == 0)) {
      return true;
    }
  }
  puVar5 = (uint *)fn_82ADF910(auStack_40,param_1,param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  if ((*puVar5 & 0xf0000) != 0) {
    return true;
  }
  if ((param_7 & 0xffffffff) == 0) {
    if ((param_5 & 0xffffffff) != 0) {
      uVar7 = 4;
      uVar8 = param_5;
      do {
        uVar3 = uVar7 >> 3 & 0x1ffffffc;
        uVar1 = uVar7 & 0x1f;
        uVar4 = uVar7 - 4 >> 3 & 0x1ffffffc;
        uVar2 = uVar7 - 4 & 0x1f;
        uVar6 = uVar7 - 1;
        *(uint *)((int)auStack_40 + uVar4) =
             (((2 << (uVar7 + 3 & 0x1f)) - 1U & *(uint *)((int)&stack0x0000002c + uVar3) &
              -1 << uVar1) >> uVar1) << uVar2 | *(uint *)((int)auStack_40 + uVar4);
        uVar7 = uVar7 + 8;
        *(uint *)((int)auStack_40 + uVar3) =
             (((2 << (uVar6 & 0x1f)) - 1U & *(uint *)((int)&stack0x0000002c + uVar4) & -1 << uVar2)
             >> uVar2) << uVar1 | *(uint *)((int)auStack_40 + uVar3);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar5 = (uint *)fn_82ADF910(auStack_40,param_1,param_3,param_2,0,param_5,param_6,0);
    return (*puVar5 & 0xf0000) != 0;
  }
  return false;
}


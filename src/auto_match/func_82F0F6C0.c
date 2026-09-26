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


void fn_82F0F6C0(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 0xb4);
  uVar4 = (ulonglong)uVar1;
  uVar3 = (ulonglong)*(uint *)(param_2 + 0xbc);
  if (*(int *)(param_1 + 0xa0c) != 0) {
    if ((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) != 0)) {
      if ((int)*(uint *)(param_1 + 0x338) < (int)uVar1) {
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x33c);
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x338);
      }
    }
    else if (*(int *)(param_1 + 0x338) < (int)(uVar1 << 1)) {
      uVar3 = (ulonglong)(*(int *)(param_1 + 0x33c) >> 1);
      uVar4 = (longlong)(*(int *)(param_1 + 0x338) >> 1);
    }
  }
  (**(code **)(param_1 + 0x1ffc))
            (*(undefined4 *)(param_1 + 0x4ed8),*(undefined4 *)(param_2 + 0xb0),uVar4,
             *(undefined4 *)(param_2 + 200),*(int *)(param_2 + 4) == 0,
             *(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),*(undefined4 *)(param_1 + 0x330)
             ,*(undefined4 *)(param_1 + 0x54c));
  if (*(int *)(param_1 + 0x344) != 0) {
    (**(code **)(param_1 + 0x2000))
              (*(undefined4 *)(param_1 + 0x4edc),*(undefined4 *)(param_1 + 0x4ee0),
               *(undefined4 *)(param_2 + 0xb8),uVar3,*(undefined4 *)(param_2 + 0xcc),
               *(int *)(param_2 + 4) == 0,*(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),
               *(undefined4 *)(param_1 + 0x334));
  }
  if ((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) {
    (**(code **)(param_1 + 0x1ffc))
              ((longlong)(*(int *)(param_1 + 0x564) >> 1) + (ulonglong)*(uint *)(param_1 + 0x4ed8),
               *(undefined4 *)(param_2 + 0xb0),uVar4,*(undefined4 *)(param_2 + 200),
               *(int *)(param_2 + 4) == 0,*(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),
               *(undefined4 *)(param_1 + 0x330),*(undefined4 *)(param_1 + 0x54c));
    if (*(int *)(param_1 + 0x344) != 0) {
      lVar2 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
      (**(code **)(param_1 + 0x2000))
                ((ulonglong)*(uint *)(param_1 + 0x4edc) + lVar2,
                 (ulonglong)*(uint *)(param_1 + 0x4ee0) + lVar2,*(undefined4 *)(param_2 + 0xb8),
                 uVar3,*(undefined4 *)(param_2 + 0xcc),*(int *)(param_2 + 4) == 0,
                 *(int *)(param_2 + 4) + 1 == *(int *)(param_1 + 0x658),
                 *(undefined4 *)(param_1 + 0x334));
    }
  }
  return;
}


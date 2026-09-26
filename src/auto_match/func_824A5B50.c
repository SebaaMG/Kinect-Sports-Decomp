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


ulonglong fn_824A5B50(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_2 + 0x40);
  uVar3 = (ulonglong)*(uint *)(iVar1 + 0xb0);
  uVar2 = -(ulonglong)*(uint *)(iVar1 + 0xf0) & ~(ulonglong)*(uint *)(iVar1 + 0xf0) & 0xffffffff &
          -uVar3 & ~uVar3 & 0xffffffff &
          -(ulonglong)*(uint *)(iVar1 + 0x2b0) & ~(ulonglong)*(uint *)(iVar1 + 0x2b0) & 0xffffffff &
          -(ulonglong)*(uint *)(iVar1 + 0x1b0) & ~(ulonglong)*(uint *)(iVar1 + 0x1b0) & 0xffffffff;
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = -uVar3 & ~uVar3 & 0xffffffff &
            -(ulonglong)*(uint *)(iVar1 + 0x230) & ~(ulonglong)*(uint *)(iVar1 + 0x230) & 0xffffffff
            & -(ulonglong)*(uint *)(iVar1 + 0x130) & ~(ulonglong)*(uint *)(iVar1 + 0x130) &
              0xffffffff &
              -(ulonglong)*(uint *)(iVar1 + 0x430) & ~(ulonglong)*(uint *)(iVar1 + 0x430) &
              0xffffffff &
              -(ulonglong)*(uint *)(iVar1 + 0x330) & ~(ulonglong)*(uint *)(iVar1 + 0x330) &
              0xffffffff & uVar2;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = -(ulonglong)*(uint *)(iVar1 + 0x470) & ~(ulonglong)*(uint *)(iVar1 + 0x470) & 0xffffffff
            & -(ulonglong)*(uint *)(iVar1 + 0x370) & ~(ulonglong)*(uint *)(iVar1 + 0x370) &
              0xffffffff &
              -(ulonglong)*(uint *)(iVar1 + 0x430) & ~(ulonglong)*(uint *)(iVar1 + 0x430) &
              0xffffffff &
              -(ulonglong)*(uint *)(iVar1 + 0x330) & ~(ulonglong)*(uint *)(iVar1 + 0x330) &
              0xffffffff &
              -(ulonglong)*(uint *)(iVar1 + 0x4b0) & ~(ulonglong)*(uint *)(iVar1 + 0x4b0) &
              0xffffffff &
              -(ulonglong)*(uint *)(iVar1 + 0x3b0) & ~(ulonglong)*(uint *)(iVar1 + 0x3b0) &
              0xffffffff & uVar2;
  }
  return uVar2 >> 0x1f;
}


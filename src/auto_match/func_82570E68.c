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
extern int fn_8251E5A0();
extern int fn_82572A20();


void fn_82570E68(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x380);
  if ((*(uint *)(param_1 + 0x4b8) & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 900);
    for (uVar2 = *puVar3; uVar2 < uVar1; uVar2 = uVar2 + 0xd0) {
      if ((ulonglong)*(uint *)(uVar2 + 0x94) == (param_2 & 0xffffffff)) {
        fn_8251E5A0(param_1 + 0x394,
                        (longlong)((int)(uVar2 - *puVar3) / (int)(uint)*(ushort *)(param_1 + 0x38c))
                        * (longlong)(int)(uint)*(ushort *)(param_1 + 0x3a0) +
                        (ulonglong)*(uint *)(param_1 + 0x394));
        fn_8251E5A0(puVar3,uVar2);
        uVar2 = uVar2 - 0xd0;
        uVar1 = uVar1 - 0xd0;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x4a8);
    for (uVar2 = *(uint *)(param_1 + 0x4a4); uVar2 < uVar1; uVar2 = uVar2 + 8) {
      fn_82572A20(*(undefined4 *)(uVar2 + 4),param_2);
    }
  }
  return;
}


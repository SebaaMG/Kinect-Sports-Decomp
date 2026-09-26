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
extern int fn_82A1E2C0();
extern U64 storeWordConditionalIndexed();


undefined8 fn_8267D4E0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  char in_RESERVE;
  
  bVar3 = (*(uint *)((int)param_1 + 0x18) & 1) == 0;
  if (!bVar3) {
    do {
      puVar5 = (uint *)(param_1 + 0x1c);
      uVar1 = *puVar5;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,param_1 + 0x1c);
        *puVar5 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    sync(1);
    if ((0 < (int)uVar1) &&
       ((uVar1 != 1 ||
        (iVar4 = fn_82A1E2C0(*(undefined4 *)((int)param_1 + 0x2c)), iVar4 != -1)))) {
      return 1;
    }
  }
  return 0;
}


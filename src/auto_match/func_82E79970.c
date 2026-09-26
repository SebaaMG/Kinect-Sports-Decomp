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
extern unsigned int *auStack_30;
extern int fn_82E78690();


short fn_82E79970(int param_1)

{
  longlong lVar1;
  uint uVar2;
  short sVar3;
  ulonglong uVar4;
  uint auStack_30 [12];
  
  sVar3 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    do {
      lVar1 = fn_82E78690(param_1 + 0x178,uVar4,auStack_30);
      uVar2 = -(uint)(lVar1 != 0) & auStack_30[0];
      if (uVar2 == 0) {
        return sVar3;
      }
      if ((*(int *)(uVar2 + 300) == 0) || (*(char *)(uVar2 + 0x130) == '\0')) {
        sVar3 = sVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1e0));
  }
  return sVar3;
}


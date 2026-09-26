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
extern int fn_82C75408();


void fn_82C486C8(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = 1;
  do {
    if (0x32 < *(int *)((*(int *)(param_1 + 0x3cfc) + 0x1420) * 4 + param_1)) {
      uVar4 = *(ulonglong *)((*(int *)(param_1 + 0x3cfc) + 0xa0b) * 8 + param_1);
      uVar3 = (ulonglong)*(int *)((*(int *)(param_1 + 0x3cfc) + 0x1420) * 4 + param_1);
      uVar2 = (longlong)uVar4 / (longlong)uVar3;
      uVar4 = uVar3 & ~((uVar4 << 1 | uVar4 >> 0x3f) - 1);
      trapDoubleWordImmediate(6,uVar3,0);
      iVar1 = *(int *)(param_1 + 0xbc) * *(int *)(param_1 + 0xb4) >> 8;
      trapDoubleWordImmediate(5,uVar4,0xffff);
      if ((0x31 < (int)uVar2) && (0x31 < iVar1)) {
        trapWord(6,(longlong)iVar1,0);
        trapWord(5,(longlong)iVar1 &
                   ~(((uVar2 & 0x7fffffff) << 1 | (uVar2 & 0xffffffff) >> 0x1f) - 1),0xffff);
        fn_82C75408(lVar5 + 6,0x77,(int)uVar2 / iVar1,uVar4);
      }
    }
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 5);
  return;
}


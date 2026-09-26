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
extern int fn_82CFC050();


void fn_82CFED40(uint *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = *param_1;
  iVar3 = (int)(uint)param_4 / (int)uVar1;
  trapWord(6,(ulonglong)uVar1,0);
  lVar2 = param_4 - (longlong)(int)uVar1 * (longlong)iVar3;
  trapWord(5,(ulonglong)uVar1 &
             ~(((param_4 & 0x7fffffff) << 1 | (ulonglong)((uint)param_4 >> 0x1f)) - 1),0xffff);
  if (0 < (int)param_3) {
    iVar4 = iVar3 << 2;
    do {
      if (iVar3 < (int)(param_1[3] - 1)) {
        uVar1 = *param_1;
      }
      else {
        uVar1 = param_1[1];
      }
      lVar5 = (ulonglong)uVar1 - lVar2;
      lVar2 = (ulonglong)*(uint *)(iVar4 + param_1[2]) + lVar2;
      if ((int)param_3 <= (int)lVar5) {
        fn_82CFC050(param_2,lVar2,param_3);
        return;
      }
      fn_82CFC050(param_2,lVar2,lVar5);
      param_3 = param_3 - lVar5;
      param_2 = lVar5 + param_2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      lVar2 = 0;
    } while (0 < param_3);
  }
  return;
}


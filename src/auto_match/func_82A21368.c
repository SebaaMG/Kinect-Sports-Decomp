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
extern int fn_82A1F888();
extern int fn_82A1F950();
extern unsigned int lbl_83219B8C;


void fn_82A21368(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  RtlEnterCriticalSection(param_1);
  uVar4 = 0;
  lVar5 = (param_2 + -4) - (ulonglong)*(ushort *)((int)param_2 + -4);
  puVar2 = (ushort *)lVar5;
  trapWord(6,(ulonglong)puVar2[3],0);
  if (puVar2[4] != 0) {
    do {
      if ((ulonglong)*(byte *)((uVar4 - puVar2[6]) * 4 + (uint)puVar2[2] + (int)puVar2) ==
          ((param_2 - lVar5) - 0x14U & 0xffffffff) / (ulonglong)puVar2[3]) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < puVar2[4]);
  }
  iVar3 = fn_82A1F888(*(undefined4 *)(param_1 + 0x28),1);
  if (-1 < iVar3) {
    fn_82A1F950(*(undefined4 *)(param_1 + 0x28),lVar5,(ulonglong)*puVar2 + 1);
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    (**(code **)(lbl_83219B8C + 4))(*puVar1);
    *puVar1 = 0xffffffff;
  }
  RtlLeaveCriticalSection(param_1);
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}


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
extern int fn_829D3FE8();
extern int fn_829D4038();
extern unsigned int lbl_832179FC;


undefined8 fn_829D5E60(ulonglong param_1)

{
  char cVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 auStack_30 [12];
  
  iVar6 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar6);
  uVar3 = (ulonglong)lbl_832179FC;
  auStack_30[0] = 0;
  cVar2 = fn_829D3FE8(param_1,uVar3,auStack_30);
  if (cVar2 == '\0') {
    RtlLeaveCriticalSection(iVar6);
    uVar1 = 0xffffffff83010008;
  }
  else {
    uVar5 = 0;
    lVar4 = uVar3 + 0x8bc;
    do {
      if ((ulonglong)*(uint *)lVar4 == (param_1 & 0xffffffff)) {
        uVar5 = uVar5 * 0x58 + uVar3 + 0x8a0;
        goto LAB_829d5ee8;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while ((uVar5 & 0xffffffff) < 2);
    uVar5 = 0;
LAB_829d5ee8:
    if (((uVar5 & 0xffffffff) == 0) || (-1 < *(int *)((int)uVar5 + 4))) {
      RtlLeaveCriticalSection(iVar6);
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar1 = fn_829D4038(uVar3,uVar5,3);
      KeSetEvent(*(undefined4 *)(lbl_832179FC + 0x8f4c8),0,0);
      RtlLeaveCriticalSection(iVar6);
    }
  }
  return uVar1;
}


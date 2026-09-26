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
extern int fn_82243988();
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_828A1318();


void fn_828E03E0(int param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0)) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    }
    iVar4 = fn_8240D928(param_3);
    iVar6 = iVar3 + 0xc;
    if (*(uint *)(iVar3 + 0x24) < 5) {
      pbVar7 = (byte *)((iVar4 + 2) * 4 + iVar6);
    }
    else {
      pbVar7 = *(byte **)((iVar4 + 2) * 4 + iVar6);
    }
    pbVar8 = param_2;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != param_2 + 0x41);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      fn_82243988(iVar6,iVar4,param_2);
      cVar5 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
      if (cVar5 == '\0') {
        fn_828A1318(*(undefined4 *)(param_1 + 0x28),param_1);
      }
    }
  }
  return;
}


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
extern int fn_8223C680();
extern int fn_82243988();
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_828996C8();
extern int fn_8289AC08();
extern int fn_8289D8D0();
extern int fn_828A1318();
extern int fn_82BA02A8();


void fn_82248CC8(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  }
  if (iVar3 == 0) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    }
    if (iVar3 == 0) {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      if (iVar3 == 0) {
        return;
      }
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      fn_8289D8D0(*(undefined4 *)(param_1 + 0x28));
      iVar4 = fn_8240D928();
      iVar9 = iVar3 + 8;
      iVar8 = (iVar4 + 2) * 4;
      pbVar6 = (byte *)(iVar8 + iVar9);
      if (4 < *(uint *)(iVar3 + 0x20)) {
        pbVar6 = *(byte **)(iVar8 + iVar9);
      }
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != param_2 + 4);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return;
      }
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_82243988(iVar9,iVar4,param_2);
    }
    else {
      pbVar6 = (byte *)(param_1 + 0xc);
      if (4 < *(uint *)(param_1 + 0x10)) {
        pbVar6 = *(byte **)(param_1 + 0xc);
      }
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != param_2 + 4);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return;
      }
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_8223C680(param_1 + 4,0,param_2);
    }
    fn_8289AC08(param_1,1,1,1,0);
    cVar5 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar5 != '\0') {
      return;
    }
  }
  else {
    pbVar6 = (byte *)(param_1 + 0xc);
    if (4 < *(uint *)(param_1 + 0x10)) {
      pbVar6 = *(byte **)(param_1 + 0xc);
    }
    pbVar7 = param_2;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != param_2 + 4);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      return;
    }
    fn_8289AC08(param_1,1,0,1,0);
    fn_82BA02A8(param_1);
    fn_8223C680(param_1 + 4,0,param_2);
    fn_8289AC08(param_1,1,1,1,0);
    cVar5 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar5 != '\0') {
      fn_828996C8(param_1,0xffffffffffffffff);
      return;
    }
  }
  fn_828A1318(*(undefined4 *)(param_1 + 0x28),param_1);
  return;
}


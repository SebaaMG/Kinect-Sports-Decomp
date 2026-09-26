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
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_826A2E40();
extern int fn_826B32D0();


void fn_826A3298(int param_1)

{
  int iVar1;
  char cVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar5;
  undefined1 auStack_30 [48];
  
  cVar4 = fn_82695468(param_1,7);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    lVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar5 = 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
    uVar2 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar1 + 0x2a0),iVar1 + 0x10,0
                              ,0xffffffffffffffff);
    if (uVar2 != 0) {
      fn_826961B0(auStack_30,lVar5);
      fn_826A2E40(uVar2,*(undefined4 *)(param_1 + 0x18),auStack_30);
      fn_82696330(auStack_30);
      lVar5 = 0;
      if (0 < *(int *)(param_1 + 0x1c)) {
        do {
          uVar3 = fn_826957D0(param_1,lVar5);
          fn_826A2E40(uVar2,*(undefined4 *)(param_1 + 0x18),uVar3);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(param_1 + 0x1c));
      }
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar2);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_826824B0(uVar2);
    }
  }
  return;
}


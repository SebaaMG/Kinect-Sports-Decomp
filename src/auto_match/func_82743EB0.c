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
extern unsigned int *auStack_40;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_82743888();
extern int fn_82743CD8();


void fn_82743EB0(int param_1)

{
  char cVar2;
  undefined8 uVar1;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dStack_50;
  double dStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  cVar2 = fn_82695468(param_1,0x10);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef00,0,0);
  }
  else {
    lVar3 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar3 = 0;
    }
    auStack_30[0] = 0;
    auStack_40[0] = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = fn_826957D0(param_1,0);
      fn_82695FA0(auStack_30,uVar1);
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar1 = fn_826957D0(param_1,1);
        fn_82695FA0(auStack_40,uVar1);
      }
    }
    fn_82743CD8(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_50);
    dVar4 = (double)fn_826972E0(auStack_40,*(undefined4 *)(param_1 + 0x18));
    dVar5 = (double)fn_826972E0(auStack_30,*(undefined4 *)(param_1 + 0x18));
    dStack_50 = dVar5 + dStack_50;
    dStack_48 = dVar4 + dStack_48;
    fn_82743888(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_50);
    fn_82696330(auStack_40);
    fn_82696330(auStack_30);
  }
  return;
}


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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_826972E0();
extern int fn_82743808();
extern int fn_82743888();
extern int fn_82743CD8();


void fn_82744268(int param_1)

{
  char cVar2;
  undefined8 uVar1;
  longlong lVar3;
  double dVar4;
  double dStack_40;
  double dStack_38;
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
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_82743808(lVar3,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff831f12e8);
    }
    else {
      uVar1 = fn_826957D0(param_1,0);
      fn_82695DA0(auStack_30,uVar1);
      fn_82743CD8(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_40);
      dVar4 = (double)fn_826972E0(auStack_30,*(undefined4 *)(param_1 + 0x18));
      dVar4 = dVar4 / SQRT(dStack_40 * dStack_40 + dStack_38 * dStack_38);
      dStack_40 = dStack_40 * dVar4;
      dStack_38 = dStack_38 * dVar4;
      fn_82743888(lVar3,*(undefined4 *)(param_1 + 0x18),&dStack_40);
      fn_82696330(auStack_30);
    }
  }
  return;
}


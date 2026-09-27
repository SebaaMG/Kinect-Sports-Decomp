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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82713060();


void fn_827130B8(int param_1)

{
  undefined4 uVar1;
  char cVar4;
  undefined8 uVar2;
  int iVar3;
  longlong lVar5;
  double dVar6;
  longlong alStack_30;
  
  cVar4 = fn_82695468(param_1,9);
  if (cVar4 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef4c,0,0);
  }
  else {
    lVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar5 = 0;
    }
    iVar3 = 10;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar6 = (double)fn_826972E0(uVar2,uVar1);
      iVar3 = (int)dVar6;
      alStack_30 = (longlong)iVar3;
    }
    uVar2 = fn_82713060(lVar5,iVar3);
    iVar3 = fn_82694700((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar2);
    alStack_30 = CONCAT44(iVar3,((uint)(alStack_30)));
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    fn_82681838(*(undefined4 *)(param_1 + 4),&alStack_30);
    lVar5 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
    *(int *)(iVar3 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iVar3);
    }
  }
  return;
}


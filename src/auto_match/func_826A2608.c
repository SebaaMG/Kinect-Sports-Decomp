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
extern int fn_82681838();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826A1E40();
extern int fn_826A25C0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_826A2608(int param_1)

{
  char cVar2;
  int iVar1;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int aiStack_50 [4];
  uint uStack_40;
  undefined4 uStack_3c;
  
  cVar2 = fn_82695468(param_1,7);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
    cVar2 = fn_826A25C0(iVar5);
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
    if (cVar2 == '\0') {
      fn_8268AFB0(&uStack_40,*(undefined4 *)(iVar1 + 0x288));
      fn_826A1E40(iVar5,*(undefined4 *)(param_1 + 0x18),&uStack_40,0xffffffff82196fac);
      uVar3 = (ulonglong)uStack_40;
      if (uVar3 == 0) {
        uVar3 = 0xffffffff82196582;
      }
      iVar1 = fn_82694610((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar3,
                                uStack_3c);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      aiStack_50[0] = iVar1;
      fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_50);
      lVar4 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
      *(int *)(iVar1 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8(iVar1);
      }
      fn_8268AFD8(&uStack_40);
    }
    else {
      fn_82681838(*(undefined4 *)(param_1 + 4),iVar1 + 8);
    }
    *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + -1;
  }
  return;
}


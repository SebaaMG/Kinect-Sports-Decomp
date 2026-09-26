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
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();


void fn_82713B90(int param_1)

{
  undefined4 uVar1;
  char cVar3;
  undefined8 uVar2;
  int *piVar4;
  longlong lVar5;
  int aiStack_40 [4];
  undefined1 auStack_30 [24];
  
  cVar3 = fn_82695468(param_1,10);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef44,0,0);
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0x10);
    if (*(int *)(param_1 + 8) == 0) {
      piVar4 = (int *)0x0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = (**(code **)(*piVar4 + 0x10))(auStack_30);
    fn_82696D38(aiStack_40,uVar2,uVar1,0xffffffffffffffff,0);
    fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_40);
    lVar5 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
    fn_82696330(auStack_30);
  }
  return;
}


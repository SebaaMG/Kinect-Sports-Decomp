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
extern unsigned int *auStack_28;
extern int fn_82AB15D0();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_82BAAB88(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [10];
  
  piVar1 = *(int **)((param_2 + 0x3a) * 4 + param_1);
  if (piVar1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df3a8,0xffffffff820df268,0x867);
  }
  cVar3 = (**(code **)(*piVar1 + 0x40))(piVar1);
  if ((cVar3 != '\0') && (piVar1[0x14] == 0xb)) {
    iVar2 = (param_2 + 0x20) * 4;
    iVar4 = 0;
    iStack_2c = piVar1[0xec];
    lVar5 = 4;
    uStack_30 = *(undefined4 *)(iVar2 + param_1);
    do {
      *(undefined1 *)((int)auStack_28 + iVar4) =
           *(undefined1 *)((int)auStack_28 + (*(byte *)((int)&uStack_30 + iVar4) - 4));
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(undefined4 *)(iVar2 + param_1) = auStack_28[0];
  }
  return;
}


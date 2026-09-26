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
extern unsigned int *auStack_610;
extern unsigned int *auStack_710;
extern unsigned int uStack_708;
extern unsigned int uStack_70c;


undefined8 fn_82A59C80(int param_1,uint param_2)

{
  int iVar2;
  undefined8 uVar1;
  longlong *plVar3;
  longlong alStack_720 [2];
  undefined1 auStack_710 [4];
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined1 auStack_610 [1536];
  
  uStack_70c = *(undefined4 *)(param_1 + 0x1c);
  uStack_708 = *(undefined4 *)(param_1 + 0x20);
  if (param_2 == 0xffffffff) goto LAB_82a59ce8;
  plVar3 = alStack_720;
  alStack_720[0] = (ulonglong)param_2 * -10000;
  while (iVar2 = KeWaitForMultipleObjects(3,auStack_710,1,3,1,0,plVar3,auStack_610), iVar2 == 1) {
    uStack_70c = *(undefined4 *)(param_1 + 0x1c);
    uStack_708 = *(undefined4 *)(param_1 + 0x20);
LAB_82a59ce8:
    plVar3 = (longlong *)0x0;
  }
  if ((iVar2 == 0x102) || (uVar1 = 0, iVar2 == 2)) {
    uVar1 = 1;
  }
  return uVar1;
}


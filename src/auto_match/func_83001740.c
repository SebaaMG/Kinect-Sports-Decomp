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
extern int fn_83004B48();
extern int fn_8301B058();
extern unsigned int lbl_832642EC;


void fn_83001740(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x3c) == -1) {
      return;
    }
    fn_8301B058(lbl_832642EC,param_1);
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x54);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    for (piVar3 = (int *)*puVar1; (piVar3 != (int *)puVar1[1] && (*piVar3 != param_2));
        piVar3 = piVar3 + 2) {
    }
    piVar3 = (int *)(-(uint)((int *)puVar1[1] != piVar3) & (uint)(piVar3 + 1));
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar3;
  }
  if (iVar2 != 0) {
    fn_83004B48(param_1,iVar2,0xff,param_3,param_4);
  }
  return;
}


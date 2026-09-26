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
extern int fn_82527F50();
extern int fn_82528210();


void fn_82527DF8(int param_1,int param_2,short param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  
  if (param_3 == 0) {
LAB_82527e94:
    if ((param_2 == 0) || (iVar3 = fn_82527F50(param_1), iVar3 == 0)) goto LAB_82527ec0;
    iVar3 = *(int *)(param_1 + 0x1b8);
    uVar4 = 1;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(param_2 + 0x8c0) + 0x30))();
    if (piVar2 == (int *)0x0) goto LAB_82527e94;
    piVar5 = piVar2 + 1;
    piVar2 = piVar5 + *piVar2 * 0x11;
    for (; piVar5 < piVar2; piVar5 = piVar5 + 0x11) {
      if (*(short *)piVar5 == param_3) goto LAB_82527e64;
    }
    piVar5 = (int *)0x0;
LAB_82527e64:
    if (piVar5 == (int *)0x0) goto LAB_82527e94;
    iVar3 = fn_82527F50(param_1);
    if (iVar3 == 0) goto LAB_82527ec0;
    iVar3 = *(int *)(param_1 + 0x1b8);
    uVar4 = 3;
    *(int **)(iVar3 + 4) = piVar5;
  }
  *(undefined1 *)(iVar3 + 1) = uVar4;
  *(undefined1 *)(iVar3 + 2) = 0;
  *(int *)(iVar3 + 0xc) = param_2;
LAB_82527ec0:
  puVar1 = *(undefined1 **)(param_1 + 0x1b8);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = puVar1[1];
    fn_82528210(param_1,*(undefined4 *)(puVar1 + 0xc));
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  return;
}


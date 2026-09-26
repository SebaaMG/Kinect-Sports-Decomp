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
extern int fn_8267C498();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_826A7398();
extern int fn_826FD288();
extern int fn_826FE738();
extern int fn_82701CA0();
extern int fn_82711FA8();


void fn_8271ED68(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar6;
  int *piVar5;
  int *piStack_30;
  int aiStack_2c [11];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int *)(param_1 + 0x1c) < 1) {
    cVar6 = '\x01';
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    cVar6 = fn_82695608(uVar4,uVar2);
  }
  uVar4 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  fn_82711FA8(&piStack_30,uVar4);
  piVar5 = piStack_30;
  if (piStack_30 == (int *)0x0) {
    fn_82701CA0(uVar4);
    piVar5 = (int *)fn_82711FA8(aiStack_2c,uVar4);
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    piVar5 = (int *)*piVar5;
    if (aiStack_2c[0] != 0) {
      fn_8267C498();
    }
  }
  if (cVar6 == '\0') {
    fn_826FD288(uVar4);
  }
  else {
    if (piVar5 == (int *)0x0) {
      return;
    }
    cVar6 = (**(code **)(*piVar5 + 0xbc))(piVar5);
    if (cVar6 != '\0') {
      fn_826FE738(uVar4,piVar5);
    }
  }
  if (piVar5 != (int *)0x0) {
    fn_82696480(*(undefined4 *)(param_1 + 4),piVar5);
    fn_8267C498(piVar5);
  }
  return;
}


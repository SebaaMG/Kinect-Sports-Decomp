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
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256B398();
extern int fn_8256B658();
extern int fn_8256B720();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82F63CA0();


void fn_8256A858(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 auStack_30 [12];
  
  uVar1 = fn_82569B10();
  fn_82549610(auStack_30,uVar1);
  fn_8256B720();
  iVar2 = fn_82569B10();
  for (piVar4 = *(int **)(iVar2 + 0x54); iVar2 = fn_82569B10(), piVar4 != *(int **)(iVar2 + 0x58);
      piVar4 = piVar4 + 1) {
    if ((*(int *)(*piVar4 + 0x20) == -1) && ((*(byte *)(*piVar4 + 0x28) & 0x40) == 0)) {
      fn_8256B658();
    }
  }
  iVar2 = fn_82569B10();
  for (piVar4 = *(int **)(iVar2 + 0x44); iVar2 = fn_82569B10(), piVar4 != *(int **)(iVar2 + 0x48);
      piVar4 = piVar4 + 1) {
    fn_8256B398(*piVar4);
    *(undefined4 *)(*piVar4 + 0x20) = 0xffffffff;
  }
  iVar3 = fn_82569B10();
  iVar2 = *(int *)(iVar3 + 0x44);
  if (iVar2 != *(int *)(iVar3 + 0x48)) {
    fn_82F63CA0(iVar2,*(int *)(iVar3 + 0x48),0);
    *(int *)(iVar3 + 0x48) = iVar2;
  }
  fn_82A1BB18();
  fn_8259C738(auStack_30[0]);
  return;
}


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
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82696B20();
extern int fn_8269A858();
extern int fn_826BD928();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_826CEC00(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  longlong lVar4;
  uint uStack_30;
  int iStack_2c;
  byte bStack_28;
  
  iVar3 = fn_826BD928(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = fn_826957D0(param_1,0);
  fn_82696B20(&uStack_30,uVar2,uVar1);
  lVar4 = (ulonglong)uStack_30 + 0x10;
  if ((ulonglong)uStack_30 == 0) {
    lVar4 = 0;
  }
  fn_8269A858(iVar3,lVar4);
  if (((bStack_28 & 2) == 0) && (uStack_30 != 0)) {
    fn_826824B0();
  }
  uStack_30 = 0;
  if (((bStack_28 & 1) == 0) && (iStack_2c != 0)) {
    fn_826824B0();
  }
  iStack_2c = 0;
  if (iVar3 != 0) {
    fn_8267C498(iVar3);
  }
  return;
}


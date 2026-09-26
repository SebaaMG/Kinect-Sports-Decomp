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
extern int fn_8265C9E0();
extern int fn_8305D7B8();
extern int fn_8305D7C0();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_8306AB38();
extern int fn_8306AC38();


longlong fn_8306A6A0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_30 [48];
  
  lVar5 = 0;
  fn_83060380(auStack_30,param_1);
  fn_83060CB0(auStack_30);
  while (cVar4 = fn_830603C0(auStack_30), cVar4 == '\0') {
    iVar1 = fn_8265C9E0(0xa8);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_8306AC38();
    }
    uVar2 = fn_830603D0(auStack_30);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    fn_8306AB38(param_2,iVar1);
    *(int *)(iVar1 + 0x18) = (int)lVar5;
    lVar5 = lVar5 + 1;
    iVar3 = fn_8305D7C0(*(undefined4 *)(iVar1 + 0x10));
    *(bool *)(iVar1 + 0x14) = iVar3 == 2;
    fn_8305D7B8(*(undefined4 *)(iVar1 + 0x10),0);
    fn_83060CD0(auStack_30);
  }
  return lVar5;
}


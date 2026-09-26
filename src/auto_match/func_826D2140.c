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
extern int fn_8269EA50();
extern int fn_826C8688();
extern int fn_826C90C8();
extern int fn_826D1700();
extern int fn_82700248();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826D2140(int param_1)

{
  char cVar2;
  int iVar1;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar5 = 0;
  uStack_4c = 0;
  uStack_50 = 1;
  uStack_48 = 0;
  uStack_46 = 0;
  uStack_45 = 0xff;
  uStack_44 = 0;
  uStack_43 = 0;
  cVar2 = fn_8269EA50(param_1,&uStack_50);
  uVar3 = 4;
  uStack_3c = 0;
  uStack_38 = 0xff;
  uStack_34 = (uint)(((U64)(uStack_34) >> 16) & 0xFFFF);
  if (cVar2 == '\0') {
    uVar3 = 5;
  }
  iVar1 = fn_82700248((ulonglong)*(uint *)(param_1 + 0xa0) + 0xa2c,uVar3);
  *(undefined4 *)(iVar1 + 4) = 2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if (*(int *)(iVar1 + 8) != 0) {
    fn_8267C498();
  }
  *(int *)(iVar1 + 8) = param_1;
  if (*(int *)(iVar1 + 0xc) != 0) {
    fn_8267C498();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = uStack_40;
  *(undefined4 *)(iVar1 + 0x14) = uStack_3c;
  *(undefined4 *)(iVar1 + 0x18) = uStack_38;
  *(uint *)(iVar1 + 0x1c) = uStack_34;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 0x20;
  fn_826C90C8(param_1,0);
  for (uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xa0) + 0xa9c); uVar4 != 0; uVar4 = uVar4 - 1
      ) {
    iVar1 = fn_826C8688(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0xa98) + iVar5));
    if (param_1 == iVar1) {
      fn_826D1700(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xa0) + 0xa98) + iVar5),param_1);
    }
    iVar5 = iVar5 + 4;
  }
  return;
}


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
extern int fn_82FA5190();
extern int fn_82FA7A48();
extern int fn_82FA9208();
extern int fn_82FA9DC8();
extern int fn_82FAA820();
extern int fn_82FAC5F0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264230;
extern unsigned int uStack_48;


void fn_82FAAD70(int param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  puStack_50 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)0x0;
  uStack_48 = 0;
  lVar5 = 0x400 - (ulonglong)uVar1;
  *(uint *)(param_1 + 0x20) = uVar1 - 1;
  *(uint *)(param_1 + 0x34) = uVar1 - 1;
  if ((int)param_2 != -1) {
    lVar5 = param_2 - (ulonglong)uVar1;
  }
  fn_82FAA820(param_1,&puStack_50,lVar5);
  puVar4 = puStack_4c;
  puVar3 = puStack_50;
  if (puStack_50 != puStack_4c) {
    puVar7 = puStack_50 + 2;
    do {
      if (puVar7[-1] == 1) {
        fn_82FA7A48(lbl_83264230,*puVar7);
      }
      puVar6 = puVar7 + 1;
      puVar7 = puVar7 + 3;
    } while (puVar6 != puVar4);
  }
  if (puVar3 != (undefined4 *)0x0) {
    fn_82FA5190(lbl_831BC768,puVar3);
  }
  fn_82FA9DC8(param_1,-(ulonglong)*(uint *)(param_1 + 0xc));
  fn_82FAC5F0(*(undefined4 *)(param_1 + 0x40));
  iVar2 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar2 != 0) {
    fn_82FA9208();
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


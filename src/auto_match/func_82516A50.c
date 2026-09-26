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
extern int fn_8223C478();
extern int fn_82517978();
extern int fn_828BBA90();
extern int fn_828C27D8();
extern int fn_828E9DB8();
extern unsigned int lbl_83295F34;
extern unsigned int lbl_83295F38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82516A50(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar3 = lbl_83295F34;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  fn_8223C478(param_3,lbl_83295F34,0);
  fn_828E9DB8(param_3,iVar1 - iVar2 >> 4,uVar3);
  for (puVar4 = *(uint **)(param_1 + 8); uVar3 = lbl_83295F38, puVar4 != *(uint **)(param_1 + 0xc);
      puVar4 = puVar4 + 4) {
    fn_828C27D8(param_2,(ulonglong)*puVar4 + 0xc,(ulonglong)puVar4[2] + 8,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  fn_8223C478(param_3,lbl_83295F38,0);
  fn_828E9DB8(param_3,iVar1 - iVar2 >> 4,uVar3);
  puVar4 = *(uint **)(param_1 + 0x18);
  if (puVar4 != *(uint **)(param_1 + 0x1c)) {
    do {
      uStack_40 = 0;
      uStack_3c = 0;
      fn_82517978(&uStack_40,puVar4[2],puVar4[3],0);
      fn_828BBA90(param_2,(ulonglong)*puVar4 + 0xc,&uStack_40,param_3);
      puVar4 = puVar4 + 4;
    } while (puVar4 != *(uint **)(param_1 + 0x1c));
  }
  return;
}


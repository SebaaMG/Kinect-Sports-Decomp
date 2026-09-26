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
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_824C04E0();
extern int fn_82517978();
extern int fn_8265CA20();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_8247DE70(int param_1)

{
  int iVar1;
  int iVar2;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iStack_40 = 0;
  iStack_3c = 0;
  fn_82517978(&iStack_40,*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54),0);
  iVar2 = iStack_40;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iStack_40 + 0x78);
  *(uint *)(param_1 + 0xa0) = (uint)*(byte *)(*(int *)(iStack_40 + 0x70) + 0x5a);
  if (*(int *)(param_1 + 0xa4) != 0) {
    fn_8265CA20();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar1 = iStack_3c;
  uStack_38 = 0;
  uStack_34 = 0;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(iVar2 + 8);
  fn_82517978(&uStack_38,iVar2,iStack_3c,0);
  iVar2 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb0) = uStack_38;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_824C04E0(param_1 + 0x48,1);
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  return;
}


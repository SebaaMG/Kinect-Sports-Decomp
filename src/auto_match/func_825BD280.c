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
extern int fn_82517978();
extern int fn_8256BF18();
extern int fn_8256C5D0();
extern int fn_82599418();
extern int fn_825BD360();
extern int fn_827D5670();
extern int fn_827D5700();
extern int fn_827D9EA8();
extern int fn_827DA660();
extern int fn_827DC520();
extern int fn_82814F70();
extern unsigned int lbl_83265A24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_825BD280(int param_1)

{
  undefined4 *puVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fn_825BD360();
  puVar1 = *(undefined4 **)(param_1 + 0x220);
  for (puVar4 = *(undefined4 **)(param_1 + 0x21c); puVar4 != puVar1; puVar4 = puVar4 + 2) {
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82517978(&uStack_30,*puVar4,puVar4[1],0);
    uVar2 = fn_8256BF18();
    fn_8256C5D0(uVar2,&uStack_30);
  }
  while (iVar3 = fn_827D5670(lbl_83265A24,1), iVar3 != 0) {
    fn_827D5700(lbl_83265A24);
    fn_82599418();
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    if (*(char *)(param_1 + 0x214) == '\0') {
      uVar2 = fn_827D9EA8(*(undefined4 *)(param_1 + 0x58));
      fn_827DA660(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x88),uVar2);
    }
    else {
      fn_82814F70();
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    fn_827DC520(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


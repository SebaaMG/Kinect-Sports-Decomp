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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_138;
extern unsigned int *auStack_178;
extern unsigned int *auStack_1e8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D78();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823CFA50();
extern int fn_823D20A8();
extern int fn_823E51E8();
extern int fn_823EAD78();
extern int fn_82F68CC0();
extern unsigned int iStack_168;
extern unsigned int iStack_174;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_140;
extern unsigned int uStack_148;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_170;
extern unsigned int uStack_17c;


void fn_823CF8B0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined1 auStack_1e8 [104];
  code *pcStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [4];
  int iStack_174;
  undefined8 uStack_170;
  int iStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [104];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [176];
  
  fn_82250D78(auStack_b0);
  fn_823E51E8(param_1,param_2,param_3,auStack_b0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iStack_168 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    uStack_17c = 0;
    pcStack_180 = fn_823CFA50;
    uStack_170 = 0x823cfa5000000000;
    fn_82F68CC0(&uStack_160,auStack_b0,0x90);
    fn_82F68CC0(auStack_1e8,auStack_138,0x68);
    uVar1 = fn_823D20A8(auStack_d0,uStack_170,CONCAT44(iStack_168,uStack_164),uStack_160,
                            uStack_158,uStack_150,uStack_148,uStack_140);
    fn_8227CB30(param_1 + 0xbd8,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if ((iVar2 != 0) && ((int)param_2 == *(int *)(param_1 + 0xcc))) {
      uStack_17c = 0;
      pcStack_180 = fn_823CFA50;
      uStack_170 = 0x823cfa5000000000;
      fn_82F68CC0(&uStack_160,auStack_b0,0x90);
      fn_82F68CC0(auStack_1e8,auStack_138,0x68);
      uVar1 = fn_823D20A8(auStack_d0,uStack_170,CONCAT44(iStack_168,uStack_164),uStack_160,
                              uStack_158,uStack_150,uStack_148,uStack_140);
      fn_8227CB30(param_1 + 0xbd8,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (undefined4 *)fn_822EFBF0(auStack_178,iVar2);
      fn_823EAD78(*puVar3,auStack_b0);
      if (iStack_174 != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}


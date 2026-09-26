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
extern unsigned int *auStack_148;
extern unsigned int *auStack_188;
extern unsigned int *auStack_1f8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D78();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823CE9E0();
extern int fn_823D1ED0();
extern int fn_823E4820();
extern int fn_823EAC80();
extern int fn_82F68CC0();
extern unsigned int iStack_178;
extern unsigned int iStack_184;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_180;
extern unsigned int uStack_18c;


void fn_823CE840(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined1 auStack_1f8 [104];
  code *pcStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_188 [4];
  int iStack_184;
  undefined8 uStack_180;
  int iStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [104];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [192];
  
  fn_82250D78(auStack_c0);
  fn_823E4820(param_1,param_2,auStack_c0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  iStack_178 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    uStack_18c = 0;
    pcStack_190 = fn_823CE9E0;
    uStack_180 = 0x823ce9e000000000;
    fn_82F68CC0(&uStack_170,auStack_c0,0x90);
    fn_82F68CC0(auStack_1f8,auStack_148,0x68);
    uVar1 = fn_823D1ED0(auStack_e0,uStack_180,CONCAT44(iStack_178,uStack_174),uStack_170,
                              uStack_168,uStack_160,uStack_158,uStack_150);
    fn_8227CB30(param_1 + 0xba8,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0) {
      uStack_18c = 0;
      pcStack_190 = fn_823CE9E0;
      uStack_180 = 0x823ce9e000000000;
      fn_82F68CC0(&uStack_170,auStack_c0,0x90);
      fn_82F68CC0(auStack_1f8,auStack_148,0x68);
      uVar1 = fn_823D1ED0(auStack_e0,uStack_180,CONCAT44(iStack_178,uStack_174),uStack_170,
                                uStack_168,uStack_160,uStack_158,uStack_150);
      fn_8227CB30(param_1 + 0xba8,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (undefined4 *)fn_822EFBF0(auStack_188,iVar2);
      fn_823EAC80(*puVar3,auStack_c0);
      if (iStack_184 != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}


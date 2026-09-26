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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822D53F8();
extern int fn_822FAEB8();
extern int fn_82326480();
extern int fn_82359C18();
extern unsigned int iStack_7c;
extern unsigned int lbl_821AE1F0;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a8;


void fn_82326020(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined **ppuStack_b0;
  code *pcStack_ac;
  undefined4 uStack_a8;
  undefined ***pppuStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  pppuStack_a0 = &ppuStack_b0;
  pcStack_ac = fn_822FAEB8;
  ppuStack_b0 = &lbl_821AE1F0;
  uStack_a8 = param_2;
  fn_82230110(auStack_30,0xffffffff821acc3c);
  fn_82230110(auStack_50,0xffffffff821b02cc);
  fn_82230110(auStack_70,0xffffffff821b02dc);
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uVar1 = fn_822D53F8(auStack_80,*(undefined4 *)(param_1 + 0x80));
  fn_82326480(param_1,auStack_70,auStack_50,&uStack_90,uVar1,auStack_30,&ppuStack_b0);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_50,1,0);
  fn_82230300(auStack_30,1,0);
  fn_82359C18(&ppuStack_b0);
  return;
}


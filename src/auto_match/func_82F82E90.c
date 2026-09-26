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
extern int fn_82A2A7D0();
extern int fn_82D7E470();
extern int fn_82F63C78();
extern int fn_82F641F8();
extern int fn_82F71CD0();
extern int fn_82F82D58();
extern int fn_82F82DA8();
extern int fn_82F82DF8();
extern int fn_82F82E48();
extern int fn_82F82E58();
extern int fn_82F82E68();
extern int fn_82F82E78();
extern int fn_82F83034();
extern int iRam83263628;
extern int iRam8326367c;
extern int iRam832636d0;
extern int iRam832636d8;
extern unsigned int lbl_831BC078;
extern unsigned int lbl_831BC084;
extern unsigned int lbl_8326366E;
extern unsigned int lbl_832636C2;
extern unsigned int lbl_832636D4;
extern unsigned int uStack_2c;


void fn_82F82E90(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int aiStack_28 [10];
  
  uStack_2c = 0;
  aiStack_28[0] = 0;
  fn_82F71CD0(7);
  fn_82F82E78();
  iVar1 = fn_82F82DF8(auStack_30);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63C78(0,0,0,0,0);
  }
  iVar1 = fn_82F82D58(&uStack_2c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63C78(0,0,0,0,0);
  }
  iVar1 = fn_82F82DA8(aiStack_28);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63C78(0,0,0,0,0);
  }
  fn_82D7E470();
  lbl_832636D4 = 0;
  lbl_831BC084 = 0xffffffff;
  lbl_831BC078 = 0xffffffff;
  if (iRam832636d8 != 0) {
    fn_82F641F8();
    iRam832636d8 = 0;
  }
  iVar1 = fn_82A2A7D0(0xffffffff83263628);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = iRam83263628 * 0x3c;
    lbl_832636D4 = 1;
    if (lbl_8326366E != 0) {
      iVar1 = iRam8326367c * 0x3c + iVar1;
    }
    if ((lbl_832636C2 == 0) || (iRam832636d0 == 0)) {
      uStack_2c = 0;
      aiStack_28[0] = 0;
    }
    else {
      aiStack_28[0] = (iRam832636d0 - iRam8326367c) * 0x3c;
      uStack_2c = 1;
    }
  }
  piVar2 = (int *)fn_82F82E68();
  *piVar2 = iVar1;
  puVar3 = (undefined4 *)fn_82F82E48();
  *puVar3 = uStack_2c;
  piVar2 = (int *)fn_82F82E58();
  *piVar2 = aiStack_28[0];
  fn_82F83034();
  return;
}


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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82248AE8();
extern int fn_8225F160();
extern int fn_82365BD8();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_8251CF80();
extern int fn_82522588();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1324;
extern unsigned int lbl_83297810;
extern unsigned int uStack_28;
extern unsigned int uStack_38;


void fn_82247890(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = (ulonglong)lbl_83297810;
  if (uVar4 == 0) {
    uVar4 = fn_82511928();
  }
  fn_82513A80(auStack_40,uVar4,uVar1);
  fn_82522588(&uStack_38,auStack_40);
  iVar2 = fn_8225F160();
  lbl_831D131C = ((uint)LZCOUNT(*(undefined4 *)(iVar2 + 8)) >> 5) + 5;
  iVar2 = fn_8225F160();
  lbl_831D1324 = *(undefined4 *)(iVar2 + 0xc);
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  cVar3 = fn_82248AE8(&iStack_30,1);
  iVar2 = iStack_30;
  if (cVar3 != '\0') {
    if (iStack_30 != 0) {
      fn_82365BD8(iStack_30,auStack_40);
    }
    iStack_2c = iVar2 + 8;
  }
  fn_8251CF80((ulonglong)uStack_38 + 0x4c,1,&iStack_30);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}


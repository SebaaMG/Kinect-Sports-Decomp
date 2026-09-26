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
extern int fn_82407968();
extern int fn_82458910();
extern int fn_824589D0();
extern int fn_828EA5F8();
extern unsigned int iStack_5c;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_60;


void fn_824077C8(int param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  undefined4 uStack_60;
  int iStack_5c;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 1) {
    cVar4 = '\x03';
  }
  else if (iVar1 == 2) {
    cVar4 = '\x02';
  }
  else if (iVar1 == 3) {
    cVar4 = '\x01';
  }
  else if (iVar1 == 5) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (iVar1 != 6) + '\x04';
  }
  dVar5 = (double)*(float *)(param_1 + 0xf0);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  if (lbl_832975B0 == 0) {
    fn_82250A18();
  }
  fn_82407968(cVar4,uVar2,param_3,param_4,param_5);
  if ((*(int *)(param_3 + 0x24) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_3 + 0x24) + 0x34), iVar1 != 0)) {
    cVar3 = fn_828EA5F8(iVar1);
    if (cVar3 != '\0') {
      fn_82458910(&uStack_60,param_2,*(undefined4 *)(param_3 + 0x2c));
      fn_824589D0(dVar5,iVar1,uStack_60,cVar4);
      if (iStack_5c != 0) {
        fn_822315A0();
      }
    }
  }
  if (((*(int *)(param_4 + 0x24) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_4 + 0x24) + 0x34), iVar1 != 0)) &&
     (cVar3 = fn_828EA5F8(iVar1), cVar3 != '\0')) {
    fn_82458910(&uStack_60,param_2,*(undefined4 *)(param_4 + 0x2c));
    fn_824589D0(dVar5,iVar1,uStack_60,cVar4);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  return;
}


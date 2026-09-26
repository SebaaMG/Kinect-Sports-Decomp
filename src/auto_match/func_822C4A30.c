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
extern int fn_822B8700();
extern int fn_822BD338();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_822C4A30(int param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  cVar2 = fn_822BD338((ulonglong)*param_2 + 4,0xffffffff821aca94);
  if (cVar2 == '\0') {
    cVar2 = fn_822BD338((ulonglong)*param_2 + 4,0xffffffff821ace70);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x118);
      fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
      uVar4 = *(undefined4 *)(param_1 + 0x118);
      *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x108) = lbl_821917B4;
      fn_822B8700(uVar4,1);
      uVar4 = 0;
      goto LAB_822c4b64;
    }
    cVar2 = fn_822BD338((ulonglong)param_2[2] + 4,0xffffffff821ace70);
    if ((cVar2 == '\0') &&
       (cVar2 = fn_822BD338((ulonglong)param_2[2] + 4,0xffffffff821aca94), cVar2 == '\0')) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x118);
    fn_827F57E8((double)lbl_821CC160,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x118);
    fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
    uVar3 = 1;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x108) = lbl_821917B4;
  fn_822B8700(uVar4,uVar3);
  uVar4 = 1;
LAB_822c4b64:
  *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x60) = uVar4;
  return;
}


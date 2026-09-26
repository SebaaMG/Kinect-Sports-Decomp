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
extern int fn_823AB470();
extern int fn_8251B258();
extern int fn_828AD0F8();
extern int fn_828AD270();
extern int fn_828AD488();
extern int fn_828AD588();
extern int fn_828EA820();
extern unsigned int lbl_83265988;
extern unsigned int uStack_2e;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;


void fn_8251B0F0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar6;
  int iVar5;
  undefined8 uVar7;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  
  iVar5 = lbl_83265988;
  if (lbl_83265988 == 0) {
    if (*(int *)(param_1 + 0x50) != 2) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x54) = 2;
    }
  }
  else {
    uVar4 = fn_828EA820(lbl_83265988);
    fn_8251B258(param_1);
    cVar6 = fn_828AD0F8(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    if (cVar6 == '\0') {
      cVar6 = fn_828AD488(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
      if (cVar6 != '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x38);
        uVar2 = *(undefined4 *)(param_1 + 0x34);
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
        uVar4 = fn_828EA820(iVar5);
        fn_828AD588(uVar3,uVar4,1,uVar2,uVar1,0,0);
      }
    }
    else {
      iVar5 = fn_823AB470(iVar5);
      if (iVar5 == 2) {
        uVar7 = *(undefined8 *)(*(int *)(param_1 + 4) + 0x10);
        uStack_2e = (undefined1)((ulonglong)uVar7 >> 0x28);
        uStack_2f = (undefined1)((ulonglong)uVar7 >> 0x30);
        uStack_30 = (undefined1)((ulonglong)uVar7 >> 0x38);
        fn_828AD270(*(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar4,1,0,1,uStack_30,uStack_2f
                          ,uStack_2e);
      }
      else if (*(int *)(param_1 + 0x50) != 2) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x54) = 2;
      }
    }
  }
  return;
}


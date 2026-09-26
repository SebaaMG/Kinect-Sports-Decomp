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
extern int fn_8289F160();
extern int fn_828EAB70();
extern int fn_828EB278();
extern int fn_828EB300();
extern int fn_828EB388();
extern unsigned int lbl_832144F6;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_828EB410(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x90) - 1;
  *(int *)(param_1 + 0x90) = (int)lVar2;
  if (lVar2 == 0) {
    if ((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
      lbl_832144F6 = 1;
    }
    if (*(char *)(param_1 + 8) == '\0') {
      uVar1 = fn_828EB300();
      uStack_1c = *(undefined4 *)(param_1 + 0x54);
      fn_8289F160(&uStack_20,uVar1,&uStack_1c);
      uVar3 = uStack_20;
      uVar1 = fn_828EB300();
    }
    else if (*(char *)(param_1 + 0x59) == '\0') {
      uVar1 = fn_828EB278();
      uStack_1c = *(undefined4 *)(param_1 + 0x54);
      fn_8289F160(&uStack_20,uVar1,&uStack_1c);
      uVar3 = uStack_20;
      uVar1 = fn_828EB278();
    }
    else {
      uVar1 = fn_828EB388();
      uStack_20 = *(undefined4 *)(param_1 + 0x54);
      fn_8289F160(&uStack_1c,uVar1,&uStack_20);
      uVar3 = uStack_1c;
      uVar1 = fn_828EB388();
    }
    fn_828EAB70(&uStack_1c,uVar1,uVar3);
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}


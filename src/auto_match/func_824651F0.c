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
extern unsigned int *auStack_50;
extern int fn_82465548();
extern int fn_82534820();
extern int fn_82535298();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821CC160;


void fn_824651F0(int param_1,undefined4 *param_2)

{
  char cVar3;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [40];
  
  fn_82465548();
  if (*(int *)(param_1 + 0x24) == 0) {
    cVar3 = fn_82534820(*param_2);
    if (cVar3 != '\0') {
      fn_82864988(auStack_40,0xffffffff821bc014);
      uVar1 = fn_828647D8();
      auStack_50[0] = *param_2;
      uVar2 = fn_82535298(auStack_50,uVar1,0xffffffff83296bc0,0xffffffff83296bd0);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      fn_82864898(auStack_40);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = lbl_821CC160;
  return;
}


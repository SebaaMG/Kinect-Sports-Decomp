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
extern int fn_82359C18();
extern int fn_82408A28();
extern int fn_824550A8();
extern int fn_8288B760();
extern int fn_82F56790();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B7F9C;


void fn_82408420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined ***pppuStack_30;
  
  fn_824550A8(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x20) + 0x84);
  if ((uVar4 != 0) && (cVar3 = fn_8288B760(uVar4), cVar3 == '\0')) {
    pppuStack_30 = &ppuStack_40;
    ppuStack_40 = &lbl_821B7F9C;
    iStack_3c = param_1 + 0x18;
    fn_82F56790(uVar4 + 0x88,&ppuStack_40);
    fn_82359C18(&ppuStack_40);
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 200) = uVar1;
  *(undefined4 *)(iVar2 + 0xbc) = 1;
  *(undefined4 *)(iVar2 + 0xc4) = uVar1;
  *(undefined4 *)(iVar2 + 0xc0) = 0xffffffff;
  fn_82408A28(param_1,*(int *)(*(int *)(param_1 + 0x10) + 0xec) != 0);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0xf0) = 1;
  return;
}


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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822BD338();
extern int fn_822C8C08();
extern int fn_822FB198();
extern int fn_823000E0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_50;


void fn_82306898(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined1 auStack_40 [40];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1e8);
  if (*(int *)(iVar1 + 0x56c) != 0) {
    *(undefined4 *)(iVar1 + 0x568) = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x56c) = 0;
  uStack_50 = 0;
  *(undefined4 *)(iVar1 + 0x558) = lbl_821CC160;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1e8) + 0x564) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(iVar1 + 0x1e8) + 0x578) = 0;
  fn_823000E0(*(undefined4 *)(iVar1 + 0x1e8),auStack_60);
  fn_82230110(auStack_40,0xffffffff821accc4);
  fn_822FB198(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0xc0),auStack_40);
  fn_82230300(auStack_40,1,0);
  cVar2 = fn_822BD338((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20) +
                            4,0xffffffff821aecb4);
  if (cVar2 != '\0') {
    fn_822C8C08(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x4c4);
  for (puVar3 = (undefined4 *)(iVar1 + 0x380); puVar3 != (undefined4 *)(iVar1 + 0x3b8);
      puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20c) = 0;
  return;
}


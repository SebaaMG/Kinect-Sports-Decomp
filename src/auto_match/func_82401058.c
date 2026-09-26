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
extern int fn_82366A98();
extern int fn_825708F0();
extern unsigned int lbl_821B7B38;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


void fn_82401058(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  *param_1 = &lbl_821B7B38;
  fn_825708F0(param_1[0xb7],param_1[0xd9]);
  fn_825708F0(param_1[0xb7],param_1[0xd3]);
  fn_825708F0(param_1[0xb7],param_1[0xd4]);
  fn_825708F0(param_1[0xb7],param_1[0xd5]);
  fn_825708F0(param_1[0xb7],param_1[0xd6]);
  fn_825708F0(param_1[0xb7],param_1[0xd7]);
  fn_825708F0(param_1[0xb7],param_1[0xd8]);
  iVar2 = lbl_8327F844;
  uVar1 = lbl_821CC160;
  if (lbl_8327F844 != 0) {
    puVar3 = (undefined1 *)(lbl_8327F844 + 0x14);
    lVar4 = 2;
    do {
      *(undefined4 *)(puVar3 + 0xa4) = uVar1;
      *(undefined4 *)(puVar3 + 0x88) = 0;
      *(undefined4 *)(puVar3 + 0x9c) = uVar1;
      *(undefined4 *)(puVar3 + 0xac) = 0;
      *(undefined4 *)(puVar3 + 0xa0) = uVar1;
      *(undefined4 *)(puVar3 + 0x84) = 0;
      *(undefined4 *)(puVar3 + 0x98) = uVar1;
      *(undefined4 *)(puVar3 + 0x4c) = 0;
      *(undefined4 *)(puVar3 + 0x90) = uVar1;
      *(undefined4 *)(puVar3 + 0x94) = uVar1;
      *(undefined4 *)(puVar3 + 0x8c) = uVar1;
      *(undefined4 *)(puVar3 + 0x3c) = uVar1;
      *(undefined4 *)(puVar3 + 0x40) = uVar1;
      puVar3 = puVar3 + 0x2c;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  if (param_1[0x9e] != 0) {
    fn_822315A0();
  }
  if (param_1[0x9c] != 0) {
    fn_822315A0();
  }
  if (param_1[0x9a] != 0) {
    fn_822315A0();
  }
  if (param_1[0x98] != 0) {
    fn_822315A0();
  }
  if (param_1[0x96] != 0) {
    fn_822315A0();
  }
  if (param_1[0x94] != 0) {
    fn_822315A0();
  }
  if (param_1[0x92] != 0) {
    fn_822315A0();
  }
  fn_82366A98(param_1);
  return;
}


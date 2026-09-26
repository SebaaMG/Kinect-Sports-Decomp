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
extern int fn_828223C8();
extern int fn_8282D640();


void fn_82827AC0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int aiStack_20 [2];
  
  cVar3 = '\0';
  iVar4 = param_1 + 0x2f4;
  while( true ) {
    fn_828223C8(iVar4,aiStack_20);
    if (aiStack_20[0] == 0) break;
    cVar3 = cVar3 + '\x01';
    *(char *)((uint)*(byte *)(aiStack_20[0] + 0x14) + *(int *)(param_1 + 0x3cc) + -1) = cVar3;
    *(char *)(aiStack_20[0] + 0x14) = cVar3;
    iVar4 = aiStack_20[0];
  }
  iVar4 = 0;
  puVar1 = (undefined4 *)**(int **)(param_1 + 0x2ec);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    iVar4 = iVar4 + 1;
    *(int *)(puVar2[0x42] * 4 + *(int *)(param_1 + 0x3d0) + -4) = iVar4;
    puVar2[0x42] = iVar4;
  }
  fn_828223C8(param_1 + 0x2fc,aiStack_20);
  iVar4 = 0;
  while( true ) {
    if (aiStack_20[0] == 0) break;
    iVar4 = iVar4 + 1;
    *(int *)(*(int *)(aiStack_20[0] + 0xc) * 4 + *(int *)(param_1 + 0x3d4) + -4) = iVar4;
    *(int *)(aiStack_20[0] + 0xc) = iVar4;
    *(undefined1 *)(aiStack_20[0] + 0x28) =
         *(undefined1 *)((uint)*(byte *)(aiStack_20[0] + 0x28) + *(int *)(param_1 + 0x3cc) + -1);
    *(undefined4 *)(aiStack_20[0] + 0x10) =
         *(undefined4 *)(*(int *)(aiStack_20[0] + 0x10) * 4 + *(int *)(param_1 + 0x3d0) + -4);
    fn_828223C8(aiStack_20[0],aiStack_20);
  }
  fn_8282D640(param_1,param_1 + 0x318,0xffffffff8282b920,0);
  fn_8282D640(param_1,param_1 + 0x344,0xffffffff8282ae98,0);
  fn_8282D640(param_1,param_1 + 0x36c,0xffffffff8282a008,0);
  return;
}


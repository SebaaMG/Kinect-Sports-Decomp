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
extern unsigned int *auStack_10;
extern int fn_82454710();


undefined8 fn_82453B80(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_10 [16];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 0x6c);
  while( true ) {
    if (iVar3 == *(int *)(*(int *)(param_1 + 0x44) + 0x70)) {
      return 0;
    }
    if (*(int *)(iVar3 + 8) == param_2) break;
    iVar3 = iVar3 + 0x30;
  }
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
  *(undefined1 *)(param_3 + 0x24) = *(undefined1 *)(iVar3 + 0x24);
  fn_82454710(auStack_10,(ulonglong)*(uint *)(param_1 + 0x44) + 0x6c);
  return 1;
}


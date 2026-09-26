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
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_826A7398();
extern int fn_82713EE8();
extern int fn_8271D378();


undefined8 fn_8274C388(undefined8 param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar4;
  int iVar3;
  undefined8 uVar2;
  longlong lVar5;
  int aiStack_40 [16];
  
  bVar1 = *(byte *)(param_2 + 0x7c);
  fn_82681728(aiStack_40,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8201339c);
  cVar4 = fn_8271D378(aiStack_40,param_3,-(6 < bVar1) & 1);
  lVar5 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
  *(int *)(aiStack_40[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_40[0]);
  }
  if (cVar4 == '\0') {
    uVar2 = fn_82713EE8(param_1,param_2,param_3,param_4);
  }
  else {
    iVar3 = fn_826A7398(param_2);
    iVar3 = *(int *)(iVar3 + 0x114);
    fn_826959C8(param_4);
    *param_4 = 2;
    uVar2 = 1;
    param_4[4] = '\x01' - (iVar3 == 0);
  }
  return uVar2;
}


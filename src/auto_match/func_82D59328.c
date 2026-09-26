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
extern unsigned int *auStack_90;
extern int fn_82D58908();
extern unsigned int uStack_50;
extern unsigned int uStack_98;


int fn_82D59328(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uStack_98;
  undefined8 auStack_90 [6];
  char cStack_60;
  undefined4 uStack_50;
  
  puVar2 = &uStack_98;
  *(undefined1 *)(param_1 + 0x1e21) = 1;
  lVar4 = 8;
  puVar1 = (undefined8 *)(param_2 + -8);
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uStack_50 = 0;
  if (((int)param_3 != (int)param_4) && (*(char *)(param_2 + 0x31) == '\0')) {
    puVar1 = &uStack_98;
    uStack_50 = 2;
    lVar4 = 10;
    puVar2 = (undefined8 *)(*(int *)(param_1 + 0xea0) * 0x50 + param_1 + 0x16a8);
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fn_82D58908(param_1,param_1 + 0xeb0,*(undefined4 *)(param_1 + 0xea0),param_4,param_3,param_4,
                  param_3,*(undefined4 *)(param_1 + 0x1e38));
    if (cStack_60 != '\0') {
      fn_82D58908(param_1,param_1 + 0x12b0,*(undefined4 *)(param_1 + 0xea0),param_4,param_3,
                    param_4,param_3,*(undefined4 *)(param_1 + 0x1e3c));
    }
    uStack_50 = 1;
    *(int *)(param_1 + 0xea0) = *(int *)(param_1 + 0xea0) + 1;
  }
  if (*(char *)(param_2 + 0x32) == '\0') {
    puVar1 = &uStack_98;
    iVar3 = *(int *)(param_1 + 0xea0);
    lVar4 = 10;
    *(int *)(param_1 + 0xea0) = iVar3 + 1;
    puVar2 = (undefined8 *)(iVar3 * 0x50 + param_1 + 0x16a8);
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xea0) + -1;
  }
  fn_82D58908(param_1,param_1 + 0xeb0,iVar3,param_3,param_4,param_3,param_4,
                *(undefined4 *)(param_1 + 0x1e38));
  if (cStack_60 != '\0') {
    fn_82D58908(param_1,param_1 + 0x12b0,iVar3,param_3,param_4,param_3,param_4,
                  *(undefined4 *)(param_1 + 0x1e3c));
  }
  return iVar3;
}


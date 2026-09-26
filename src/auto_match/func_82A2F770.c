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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_20 ((*(U64*)&uStack_20))
extern unsigned int *auStack_28;
extern int fn_82A2F3F0();
extern int fn_82A2F578();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82A2F770(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 0xcc) = 1;
  _uStack_20 = CONCAT44(param_3,param_4);
  if (*(char *)(param_1 + 0xca) == '\0') {
    fn_82A2F3F0(param_1,param_2,&iStack_30,&iStack_2c,auStack_28,&uStack_20);
  }
  else {
    fn_82A2F578(param_1,param_2,*(char *)(param_1 + 0xca),&iStack_30,&iStack_2c,auStack_28,
                  &uStack_20);
  }
  uVar3 = (ulonglong)*(byte *)(param_1 + 200);
  *(undefined1 *)(param_1 + 0xcc) = 0;
  if (uVar3 != 0) {
    pbVar2 = (byte *)(*(int *)(param_1 + 0x30) + -1);
    do {
      pbVar1 = pbVar2 + 8;
      pbVar2 = pbVar2 + 8;
      *pbVar2 = *pbVar1 & 0xf7;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(int *)(param_1 + 0xa4) = iStack_30 + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0xa0) = iStack_2c + *(int *)(param_1 + 0xa0);
  return;
}


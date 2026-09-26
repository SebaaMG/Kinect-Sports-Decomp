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
extern int fn_828184A8();
extern int fn_82820EF8();
extern int fn_82827750();
extern int fn_8282DDD8();
extern int fn_82F6E380();


void fn_8282E0B0(int param_1,undefined4 *param_2)

{
  char cVar2;
  undefined4 uVar1;
  longlong lVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x1c) = 0x80;
  fn_82F6E380(param_1 + 0x14);
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_82820EF8(param_1 + 0x1c,4);
    fn_82820EF8(param_1 + 0x52,1);
    fn_82820EF8(param_1 + 0x24,4);
    fn_82820EF8(param_1 + 0x28,4);
    fn_82820EF8(param_1 + 0x2c,4);
    fn_82820EF8(param_1 + 0x30,4);
    fn_82820EF8(param_1 + 0x3c,4);
    fn_82820EF8(param_1 + 0x40,4);
    fn_82820EF8(param_1 + 0x34,4);
    fn_82820EF8(param_1 + 0x38,4);
    fn_82820EF8(param_1 + 0x44,4);
    fn_82820EF8(param_1 + 0x48,4);
    fn_82820EF8(param_1 + 0x54,4);
    iVar4 = param_1 + 0x68;
    lVar3 = 2;
    do {
      fn_82820EF8(iVar4 + -0x10,4);
      fn_82820EF8(iVar4,4);
      lVar3 = lVar3 + -1;
      iVar4 = iVar4 + 0x14;
    } while (lVar3 != 0);
    fn_82820EF8(param_1 + 0x14,8);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = fn_828184A8(param_1,0x80);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_82820EF8(param_1 + 0x20,4);
  }
  (*(code *)param_2[2])(*param_2,0x80,param_1);
  fn_8282DDD8(param_2,0);
  return;
}


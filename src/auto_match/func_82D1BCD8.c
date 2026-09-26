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
extern int fn_82D0B0C0();
extern int fn_82D0C6B0();
extern int fn_82D0D640();
extern int fn_82D0D6E8();
extern int fn_82D0DC58();


undefined8 fn_82D1BCD8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  if (3 < (int)param_1[1]) {
    fn_82D0D6E8(auStack_40);
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = fn_82D0B0C0(auStack_50);
    iVar4 = fn_82D0DC58(auStack_40,uVar2,uVar1,uVar3);
    if (iVar4 != -1) {
      fn_82D0C6B0(auStack_40,1,param_2);
      fn_82D0D640(auStack_40);
      return 0;
    }
    fn_82D0D640(auStack_40);
  }
  return 1;
}


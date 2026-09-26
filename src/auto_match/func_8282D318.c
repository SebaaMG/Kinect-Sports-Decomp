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
extern unsigned int *auStack_30;
extern int fn_82831618();
extern int fn_82F674A8();
extern int fn_82F67988();
extern int fn_82F6D000();


undefined8 fn_8282D318(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  longlong lVar3;
  uint uVar4;
  undefined4 auStack_30 [12];
  
  iVar2 = fn_82F674A8(auStack_30,param_2,0xffffffff8201ed40);
  if (iVar2 == 0) {
    fn_82F6D000(auStack_30[0],0xffffffff8201ed44,*(undefined4 *)(param_1 + 8));
    uVar4 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      lVar3 = 0;
      do {
        fn_82831618((ulonglong)*(uint *)(param_1 + 0xc) + lVar3,auStack_30[0]);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
    fn_82F67988(auStack_30[0]);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


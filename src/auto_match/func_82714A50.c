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
extern unsigned int fStack_2c;
extern unsigned int fStack_34;
extern unsigned int fStack_3c;
extern int fn_8267C498();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_8269A1F0();
extern int fn_8269CEE0();
extern int fn_82F68CC0();
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82714A50(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [4];
  float fStack_3c;
  float fStack_34;
  float fStack_2c;
  
  cVar3 = fn_82695468(param_1,0x15);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef1c,0,0);
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar4 = 0;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8269CEE0(&uStack_50,uVar4 + 0x30);
      iVar1 = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
      if ((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) != 0) {
        *(int *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 4) = *(int *)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 4) + 1;
        fn_8267C498((((U64)(uStack_50) >> 0) & 0xFFFFFFFF));
        fn_82F68CC0(auStack_40,(((U64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x24,0x20);
        uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)(longlong)fStack_2c)) & ((U64)0xFFFFFFFF)) << 32));
        uVar2 = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
        uStack_48 = (longlong)fStack_34;
        uStack_50 = (longlong)fStack_3c;
        fn_8269A1F0(*(undefined4 *)(param_1 + 4),
                          (((((U64)(uStack_50) >> 32) & 0xFFFFFFFF) & 0xff) << 8 | (((U64)(uStack_48) >> 32) & 0xFFFFFFFF) & 0xff) << 8 |
                          uVar2 & 0xff);
        fn_8267C498(iVar1);
      }
    }
  }
  return;
}


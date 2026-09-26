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
extern int fn_8265E080();
extern int fn_82663538();
extern int fn_82663848();
extern int fn_82663D38();
extern int fn_82663D90();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_10;


byte fn_82663A00(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iStack00000014;
  uint uStack0000001c;
  char cStack00000027;
  uint uStack_10;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  cStack00000027 = param_3;
  uVar1 = fn_82663D38(param_1);
  if (uVar1 < uStack0000001c) {
    fn_8265E080(iStack00000014);
  }
  if (*(uint *)(iStack00000014 + 0x14) < uStack0000001c) {
    fn_82663D90(iStack00000014,uStack0000001c,*(undefined4 *)(iStack00000014 + 0x10));
  }
  else if ((cStack00000027 == '\0') || (7 < uStack0000001c)) {
    if (uStack0000001c == 0) {
      fn_82663848(iStack00000014,0);
    }
  }
  else {
    if (uStack0000001c < *(uint *)(iStack00000014 + 0x10)) {
      uStack_10 = uStack0000001c;
    }
    else {
      uStack_10 = *(uint *)(iStack00000014 + 0x10);
    }
    fn_82663538(iStack00000014,1,uStack_10);
  }
  return -(uStack0000001c != 0) & 1;
}


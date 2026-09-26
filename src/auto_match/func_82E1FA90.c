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
extern unsigned int *auStack_160;
extern unsigned int *auStack_164;
extern int fn_82A1E988();
extern int fn_82A264C8();
extern int fn_82A264D0();
extern int fn_82A26568();
extern int fn_82E1F9D0();
extern unsigned int iStack_16c;
extern unsigned int iStack_170;
extern unsigned int uStack_168;


ulonglong fn_82E1FA90(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [352];
  
  uVar1 = fn_82A264D0(param_2,1,1,0,1,auStack_164,&uStack_168);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = fn_82A1E988(uStack_168,auStack_160,0x134,&iStack_16c,0);
    if ((uVar1 == 0) && (iStack_16c == 1)) {
      iStack_170 = 0;
      uVar1 = fn_82A26568(param_2,0xffffffff821a676c,auStack_160,3,&iStack_170,0,0);
      if (iStack_170 == 2) {
        uVar1 = fn_82E1F9D0(param_1,0xffffffff8214baf8);
      }
    }
    fn_82A264C8(0xffffffff821a676c,0);
  }
  return uVar1;
}


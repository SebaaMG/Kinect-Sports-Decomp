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
extern unsigned int *auStack_28;
extern int fn_82FA73C8();
extern int fn_82FA7468();
extern int fn_82FA76F0();
extern int fn_82FA78F8();
extern int fn_82FAABA8();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_82FA7A48(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  int aiStack_20 [2];
  
  fn_82FA7468(param_2,aiStack_20);
  if ((*(uint *)(aiStack_20[0] + 0xc) & 0x80000000) == 0) {
    uVar1 = *(undefined4 *)(aiStack_20[0] + 4);
    iStack_30 = 0;
    iVar2 = fn_82FA73C8(uVar1,&iStack_30,&uStack_2c,auStack_28);
    if ((iVar2 < 1) ||
       (iVar2 = fn_82FAABA8(*(undefined4 *)(iStack_30 + 0x38),param_2,auStack_28[0],uStack_2c),
       iVar2 != 1)) {
      fn_82FA78F8(uVar1,aiStack_20);
    }
  }
  else {
    *(uint *)(aiStack_20[0] + 0xc) = *(uint *)(aiStack_20[0] + 0xc) & 0xbfffffff;
    fn_82FA76F0();
  }
  return;
}


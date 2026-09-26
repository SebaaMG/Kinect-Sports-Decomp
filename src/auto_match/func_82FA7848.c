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
extern int fn_82FA7468();
extern int fn_82FA76F0();
extern int fn_82FE6A90();


void fn_82FA7848(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *apuStack_20 [2];
  
  fn_82FA7468(param_2,apuStack_20);
  uVar1 = apuStack_20[0][3];
  apuStack_20[0][3] = uVar1 & 0xbfffffff;
  if ((uVar1 & 0x80000000) == 0) {
    apuStack_20[0][3] = uVar1 & 0xbfffffff | 0x80000000;
    iVar2 = apuStack_20[0][1];
    fn_82FE6A90(iVar2,apuStack_20[0][2],0,1);
    for (apuStack_20[0] = (undefined4 *)*apuStack_20[0]; apuStack_20[0] != (undefined4 *)0x0;
        apuStack_20[0] = (undefined4 *)*apuStack_20[0]) {
      if (apuStack_20[0][1] == iVar2) {
        apuStack_20[0][3] = apuStack_20[0][3] | 0x80000000;
      }
    }
  }
  fn_82FA76F0();
  return;
}


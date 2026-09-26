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
extern int fn_82E66440();
extern int fn_82E66A50();
extern unsigned int lbl_8324017C;
extern unsigned int uRam83240184;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82E66BC0(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  char in_RESERVE;
  byte bVar4;
  
  iVar2 = fn_82E66440(0xffffffff83240184);
  bVar4 = (iVar2 == 0) << 1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffffc00d3e85;
  }
  else {
    if (lbl_8324017C < 1) {
      uVar1 = 0xffffffffc00d3e85;
    }
    else {
      piVar3 = (int *)fn_82E66A50(0xffffffff8323ff68,param_1);
      bVar4 = (piVar3 == (int *)0x0) << 1;
      if (piVar3 == (int *)0x0) {
        uVar1 = 0xffffffffc00d36bb;
      }
      else {
        uVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,param_2,0,0);
      }
    }
    sync(1);
    do {
      if (in_RESERVE != '\0') {
        uRam83240184 = storeWordConditionalIndexed((ulonglong)uRam83240184 - 1,0,0xffffffff83240184)
        ;
        bVar4 = 2;
      }
    } while (!(bool)(bVar4 >> 1 & 1));
  }
  return uVar1;
}


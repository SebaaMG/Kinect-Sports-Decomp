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
extern int fn_82A3FF60();
extern int fn_82A40BA8();
extern int fn_82A45350();
extern int fn_82A484F8();
extern int fn_82A4F4E0();


void fn_82A48820(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_82A40BA8(param_1 + 500);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,0xc,0x20970002,0);
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = fn_82A484F8(param_1 + 0x21c,puVar2);
      if (iVar3 == 0) {
        fn_82A4F4E0(puVar2);
      }
      else {
        puVar2[1] = *puVar1;
        puVar2[2] = puVar1[8];
        uVar4 = fn_82A45350(*(undefined4 *)(param_1 + 0x1d8),0);
        *puVar2 = uVar4;
      }
    }
    fn_82A4F4E0(puVar1);
  }
  return;
}


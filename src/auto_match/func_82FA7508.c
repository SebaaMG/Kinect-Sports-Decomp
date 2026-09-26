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
extern int fn_82A1E810();
extern int fn_82FA5190();
extern int fn_82FA7BC8();
extern int fn_82FA80E8();
extern int fn_82FAB6C0();
extern int fn_82FF5088();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264228;
extern unsigned int lbl_83264304;


void fn_82FA7508(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  fn_82FA7BC8(0xffffffff83264234);
  puVar1 = (undefined4 *)param_2[0xe];
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[8] != 0) {
      if ((param_2[5] & 0x20000U) != 0) {
        fn_82FA80E8(0xffffffff83264240);
      }
      fn_82FF5088(lbl_83264304,puVar1[8],param_2 + 4);
      iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
      if (iVar3 != 0) {
        piVar4 = (int *)(**(code **)(*param_2 + 0x20))(param_2);
        (**(code **)(*piVar4 + 0x98))(piVar4,3);
      }
    }
    fn_82FAB6C0(puVar1);
    uVar2 = lbl_831BC768;
    (**(code **)*puVar1)(puVar1,0);
    fn_82FA5190(uVar2,puVar1);
  }
  fn_82A1E810(lbl_83264228);
  return;
}


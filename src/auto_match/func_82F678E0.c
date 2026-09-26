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
extern int fn_82F63BA0();
extern int fn_82F641F8();
extern int fn_82F68240();
extern int fn_82F6BB98();
extern int fn_82F7C468();
extern int fn_82F7C590();
extern int fn_82F7C6F0();


undefined8 fn_82F678E0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffffffffffff;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if ((*(uint *)(param_1 + 0xc) & 0x83) != 0) {
      uVar3 = fn_82F6BB98(param_1);
      fn_82F7C6F0(param_1);
      fn_82F7C468(param_1);
      iVar2 = fn_82F7C590();
      if (iVar2 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
      else if (*(int *)(param_1 + 0x1c) != 0) {
        fn_82F641F8();
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar3;
}


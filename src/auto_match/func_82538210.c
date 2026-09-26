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
extern unsigned int *auStack_1c;
extern int fn_82537D18();
extern int fn_82538468();
extern int fn_82A1C098();
extern int fn_82A1E740();
extern unsigned int uStack_20;


undefined8 fn_82538210(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  if (*(int *)(param_1 + 0x1c) != -1) {
    iVar1 = fn_82A1E740(param_1,&uStack_20,param_2);
    iVar2 = fn_82A1C098(param_1);
    if (iVar1 == 0x3e4) {
      return 0;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      fn_82538468(param_1 + 0x20,uStack_20);
    }
    else {
      if ((iVar1 == 0x12) || (iVar2 == -0x7ff8ffee)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        *(int *)(param_1 + 0x30) = iVar1;
      }
      fn_82537D18(auStack_1c,param_1 + 0x20,*(undefined4 *)(param_1 + 0x20),
                    *(undefined4 *)(param_1 + 0x24));
    }
  }
  return 1;
}


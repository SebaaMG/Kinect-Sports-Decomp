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
extern int fn_823AA2A8();
extern int fn_82E1EC90();
extern int fn_82E21098();
extern int fn_82E210B0();
extern int fn_82E21908();


void fn_82E1EE18(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 9) != '\0') {
    fn_82E21098(*(undefined4 *)(param_1 + 0x48));
    fn_82E21908(*(undefined4 *)(param_1 + 0x48),param_2,param_3,param_4);
    uVar1 = fn_82E210B0(*(undefined4 *)(param_1 + 0x48));
    uVar2 = fn_823AA2A8(*(undefined4 *)(param_1 + 0x48));
    fn_82E1EC90(param_1,uVar2,uVar1);
  }
  return;
}


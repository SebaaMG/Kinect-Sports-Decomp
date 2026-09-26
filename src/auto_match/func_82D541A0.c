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
extern int fn_82CFF8D0();
extern int fn_82D71668();


void fn_82D541A0(int param_1,int *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x30);
  if ((*(uint *)(param_1 + 0x38) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*puVar2,*(uint *)(param_1 + 0x38) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82138a78,*puVar2,*(int *)(param_1 + 0x34) << 2,uVar1);
  }
  fn_82D71668(puVar2,param_2[2],param_2);
  return;
}


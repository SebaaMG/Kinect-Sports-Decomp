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
extern int fn_82954678();


undefined8
fn_829613A8(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = (**(code **)(*param_1 + 0x70))
                    (param_1,*(undefined4 *)(*(int *)(*param_2 * 4 + param_1[5]) + 0x6c));
  if (iVar2 == 0x11) {
    uVar1 = 0;
    *param_5 = 0xe40000;
  }
  else {
    uVar1 = fn_82954678(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}


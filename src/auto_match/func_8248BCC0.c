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
extern int fn_8248DBA8();


byte fn_8248BCC0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) != 0)) {
    bVar2 = 0;
  }
  else {
    (**(code **)(**(int **)(param_2 + 0xc) + 8))(param_1);
    fn_8248DBA8(param_1,*(undefined4 *)(param_2 + 0x14),param_3,param_4);
    bVar2 = 1;
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x18);
    if (uVar3 != *(uint *)(param_2 + 0x1c)) {
      do {
        lVar1 = fn_8248DBA8(param_1,uVar3,param_3,param_4);
        uVar3 = uVar3 + 0x68;
        bVar2 = -(lVar1 != 0) & bVar2;
      } while ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 0x1c));
    }
  }
  return bVar2;
}


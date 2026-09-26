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
extern int fn_82FB00A0();


undefined8 fn_82FB04A0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 1;
  uVar1 = *(uint *)*param_2;
  *param_2 = (int)((uint *)*param_2 + 1);
  if (((uVar1 != 0) && (uVar3 = fn_82FB00A0(param_1 + 0x1f,uVar1), (int)uVar3 == 1)) &&
     (uVar4 = 0, uVar1 != 0)) {
    do {
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (int)((undefined4 *)*param_2 + 1);
      uVar3 = (**(code **)(*param_1 + 100))(param_1,uVar2);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}


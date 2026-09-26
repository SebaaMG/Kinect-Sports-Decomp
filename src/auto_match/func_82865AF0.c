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
extern int fn_822977A8();
extern int fn_82865230();
extern int fn_82F622A8();


undefined4 * fn_82865AF0(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 < -param_1[4] - 1) {
    if (param_2 != 0) {
      iVar3 = param_1[4] + param_2;
      cVar1 = fn_822977A8(param_1,iVar3,0);
      if (cVar1 != '\0') {
        fn_82865230(param_1,param_1[4],param_2,param_3);
        param_1[4] = iVar3;
        puVar2 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        *(undefined2 *)(iVar3 * 2 + (int)puVar2) = 0;
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82196214);
}


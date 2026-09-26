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
extern int fn_822304F8();
extern int fn_82230680();
extern int fn_8223DEF8();
extern int fn_82F622A8();
extern int fn_82F68CC0();


undefined4 * fn_8223DFF0(undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  cVar1 = fn_82230680();
  if (cVar1 == '\0') {
    if (-param_1[4] - 1 <= param_3) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196214);
    }
    if (param_3 != 0) {
      iVar3 = param_1[4] + param_3;
      cVar1 = fn_822304F8(param_1,iVar3,0);
      if (cVar1 != '\0') {
        puVar2 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        fn_82F68CC0(param_1[4] + (int)puVar2,param_2,param_3);
        param_1[4] = iVar3;
        puVar2 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar2 + iVar3) = 0;
      }
    }
  }
  else {
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    param_1 = (undefined4 *)fn_8223DEF8(param_1,param_1,param_2 - (int)puVar2,param_3);
  }
  return param_1;
}


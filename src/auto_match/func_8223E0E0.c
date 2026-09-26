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
extern int fn_82F622A8();
extern int fn_82F691F0();


undefined4 * fn_8223E0E0(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (-param_1[4] - 1 <= param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196214);
  }
  if (param_2 != 0) {
    iVar4 = param_1[4] + param_2;
    cVar2 = fn_822304F8(param_1,iVar4,0);
    if (cVar2 != '\0') {
      piVar1 = param_1 + 4;
      if (param_2 != 1) {
        if (0xf < (uint)param_1[5]) {
          param_1 = (undefined4 *)*param_1;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0((int)param_1 + *piVar1,param_3,param_2);
      }
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar3 + *piVar1) = param_3;
      param_1[4] = iVar4;
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar3 + iVar4) = 0;
    }
  }
  return param_1;
}


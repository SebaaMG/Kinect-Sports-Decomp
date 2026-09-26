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
extern int fn_8256DAE8();
extern int fn_82F622A8();
extern int fn_82F622E0();
extern int fn_82F68CC0();


undefined4 * fn_8260D640(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)param_2[4] < param_3) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar3 = param_2[4] - param_3;
  if (uVar3 < param_4) {
    param_4 = uVar3;
  }
  if (param_4 < -param_1[4] - 1) {
    if (param_4 != 0) {
      iVar4 = param_1[4] + param_4;
      cVar1 = fn_8256DAE8(param_1,iVar4,0);
      if (cVar1 != '\0') {
        if (0xf < (uint)param_2[5]) {
          param_2 = (undefined4 *)*param_2;
        }
        puVar2 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        fn_82F68CC0(param_1[4] + (int)puVar2,(int)param_2 + param_3,param_4);
        param_1[4] = iVar4;
        puVar2 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar2 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar2 + iVar4) = 0;
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82196214);
}


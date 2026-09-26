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
extern int fn_82FECBF0();
extern int fn_82FED848();
extern int fn_82FEF228();
extern int fn_8301DF28();
extern int fn_83024E30();
extern unsigned int lbl_832643D8;


undefined8 fn_82FEDCA8(undefined8 param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = fn_8301DF28(param_2 + 2,param_1);
  if ((int)uVar2 != 0x3f) {
    fn_82FEF228(0xffffffff83264400,param_2);
    if ((int)uVar2 == 1) {
      uVar3 = fn_82FED848(param_1);
      *param_3 = uVar3;
      if (uVar3 == 0) {
        fn_82FECBF0(param_2);
        uVar2 = 2;
      }
      else {
        param_2[1] = lbl_832643D8;
        lbl_832643D8 = lbl_832643D8 + 1;
        puVar1 = (undefined4 *)*param_3;
        *param_2 = 0;
        if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
          *puVar1 = param_2;
        }
        else {
          *(undefined4 *)puVar1[1] = param_2;
        }
        puVar1[1] = param_2;
        puVar1[2] = puVar1[2] + 1;
        fn_83024E30((ulonglong)*param_3 + 0x10);
      }
    }
    else {
      fn_82FECBF0(param_2);
      uVar2 = 2;
    }
  }
  return uVar2;
}

